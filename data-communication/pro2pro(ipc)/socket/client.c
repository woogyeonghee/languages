#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <assert.h>
#include <pthread.h>

char nickname[20];

void *sendMsg(void *arg)
{
	int dataSocket = *(int *)arg;
	
	char msg[1024];
	strcpy(msg, nickname);
	strcat(msg, " : ");

	for (;;) {
		//scanf를 쓰면 %s를 쓰면 단어 단어를 끊어버리므로 한줄로 받아야하는 문제점이 있음 -> gets 사용
		fgets(msg + strlen(nickname) + 3, 1024 - 20, stdin);		// 문장의 마지막이 \n\0로 들어가는 것에 유의 

		if (strcmp(msg, "/Q\n") == 0 || strcmp(msg, "/q\n") == 0) {
			close(dataSocket);
			exit(0);
		}

		write(dataSocket, msg, strlen(msg));
	}
	return NULL;
}

void *recvMsg(void *arg)
{
	int dataSocket = *(int *)arg;

	int nread;	
	char msg[1024];
	while ( (nread = read(dataSocket, msg, 1024)) != 0) {
		assert(nread != -1);
		
		// 클라 -> 서버로 보낼 때 \0가 없음 
		msg[nread] = '\0';
		fputs(msg, stdout);
	}
	return NULL;
}

int main(int argc, char **argv)			// 인자(IP주소, 포트 번호, 대화명(닉네임))를 받기위해 void 대신 argc, argv 사용 
{
	assert(argc == 4);						// 인자가 네개 이상이면 중단 ./client 127.0.0.1 7777 nickname
	
	strcpy(nickname, argv[3]);				// 인자전달은 사용했으므로 전역으로 사용 
	
	int clientSocket;
	clientSocket = socket(AF_INET, SOCK_STREAM, 0);
	assert(clientSocket != -1);
		
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr(argv[1]);
	servAddr.sin_port = htons(atoi(argv[2]));			// 빅 엔디언으로 바꾸기 위해 htons
	
	assert( connect(clientSocket, (struct sockaddr *)&servAddr, sizeof(servAddr)) != -1);
	
	pthread_t tid1, tid2;		// send, receive 각 한 개의 쓰레드
	pthread_create(&tid1, NULL, sendMsg, &clientSocket);			// clienSocket을 알아야 데이터를 주고 받고 가능	
	pthread_create(&tid2, NULL, recvMsg, &clientSocket);

	void *result;
	pthread_join(tid1, &result);		// join은 만들어놓은 쓰레드가 끝날때까지 기다리는 blocking 함수
	pthread_join(tid2, &result);

	//close(clientSocket)	// close를 함수에서 했으므로 주석처리했음 
	return 0;
}
