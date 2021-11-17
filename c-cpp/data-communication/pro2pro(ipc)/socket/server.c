#include <stdio.h>
#include <unistd.h>									// open, close 등을 위함
#include <arpa/inet.h>								// 아르파
#include <sys/types.h>
#include <sys/socket.h>
#include <pthread.h>
#include <assert.h>

#define PORT_NUM 7000

pthread_mutex_t mutex;												// 전역 공간에 뮤텍스 객체 생성

int count;																// 몇 명이 접속을 했는지 확인하기 위함 
int dataSockets[100];												// 동시 접속자 수 100명	

void* proc_client(void *args)										// 클라이언트에 대응되는 (쓰레드)함수 
{
	int dataSocket = *(int *)args;									// args가 가리키는 것을 역참조하기 위해 타입캐스팅 (void *는 역참조가 불가하므로...)
	int nread;
	char buf[1024];
	// read ( 파일 디스크립터, 버퍼, 최대로 받을 수 있는 크기), read의 반환값은 읽은 데이터의 크기, 0이 리턴되는 경우는 파일의 끝 (EOF)을 받았을 때, 클라이언트에서 연결을 끊으면 EOF 
	while ( (nread = read(dataSocket, buf, 1024)) != 0) {		// 클라이언트가 접속되어 있는동안은 계속 동작이 되어야 함 끊어지면 EOF
		assert(nread != -1);											// write에서 문제가 있을 때 -1을 반환하는데 이 때 프로그램이 종료되도록 만들었음 
		
		for (int i = 0; i < count; ++i) {
pthread_mutex_lock(&mutex);											// 뮤텍스의 시작(크리티컬 섹션의 시작)				
			write(dataSockets[i], buf, nread);					// 채팅프로그램이므로 받은 내용을 연결된 모든 사람에게 보내줘야하므로 
pthread_mutex_unlock(&mutex);										// 뮤텍스의 끝(크리티컬 섹션의 끝)
		}
	}
	// 쓰레드에 의해 접근되는 함수들은 크리티컬 섹션으로 만들어 줘야함 (공유되는 데이터 처리) : 공유되는 데이터를 크리티컬 섹션으로 바꿈, 크리티컬 섹션안의 코드가 작동 되는 동안 다른 접근을 막음 -> 뮤텍스, 이 곳의 공유되는 데이터는 dataSockets라는 배열, 즉 dataSockets를 다루는 곳의 시작과 끝을 Mutex로 감싸주어야한다.
	for (int i = 0; i < count; ++i) {								// 접속을 끊으면 데이터 소켓을 없애는 곳 
pthread_mutex_lock(&mutex);
		if (dataSocket == dataSockets[i]) {
			for (int j = i; j < count - 1; ++j) {					// 한 칸씩 앞으로 땡김
				dataSockets[j] = dataSockets[j + 1];
			}
pthread_mutex_unlock(&mutex);			
			break;														// break를 하면 제일 바깥의 for문을 빠져 나감 
		}
	}
	close(dataSocket);
}

int main(void)
{
	pthread_mutex_init(&mutex, NULL);
	
//	int fd;		// file descriptor 파일 기술자, 배열의 인데스 	열면 3, 4, 5, 못 열면 -1, 예외처리를 -1이면이라는 조건으로 줌, 0(표준 입력장치), 1(표준출력장치), 2(표준에러) 열린 파일에 대한 정보를 index에 저장
//	fd = ("/dev/ttyUSB0", ...);
	

	int servSocket;
	assert( (servSocket = socket(AF_INET, SOCK_STREAM, 0)) != -1);			// 소켓 생성 TCP -> SOCK_STREAM, UDP -> SOCK_DGRAM, open 대신 소켓 함수 사용
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;						// IPv4
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);	// 인터넷 주소 host to network long (4 byte), network는 빅엔디언이므로 빅엔디언으로 바꿈 
	servAddr.sin_port = htons(PORT_NUM);				// 포트 번호	 host to network short (2 byte), 빅엔디언으로 바꿈 
	
	assert( bind(servSocket, (struct sockaddr *)&servAddr, sizeof(struct sockaddr_in)) != -1);
	
	assert( listen(servSocket, 5) != -1);				// 동시 접속자가 많으면 5보다 더 크게
	
	for (;;) {
		struct sockaddr_in clientAddr;
		int addrLen;
		
		int dataSocket = accept(servSocket, (struct sockaddr *)&clientAddr, &addrLen);		// accept 의 2, 3 번째 인자로 접속한 클라이언트의 주소값을 알 수 있음, NULL 이면 클라 정보에 관심이 없다는 의미 
		assert(dataSocket != -1);						// accept가 제대로 동작하지 않았다는 것 
pthread_mutex_lock(&mutex);		
		dataSockets[count] = dataSocket;				// 접속되면 사람 수(count)를 증가시킴
		++count;
pthread_mutex_unlock(&mutex);
		printf("client ip addr : %s\n", inet_ntoa(clientAddr.sin_addr));				// inet_ntoa -> 4 byte 주소값으로 128.0.0.1 같이 문자열을 만들어 냄, 문자열은 전역공간에 저장, 주소값을 리턴
		
		pthread_t tid;
		pthread_create(&tid, NULL, proc_client, &dataSocket);							// 지역 변수 dataSocket을 함수로 보내기 위해 &dataSocket 		
		pthread_detach(tid);																	// 만든 쓰레드를 종료시킬때 사용 
				
	}
	
	
	close(servSocket);
	pthread_mutex_destroy(&mutex);															// 뮤텍스 사용시 종료를 해주는 부분 	
	return 0;
}
