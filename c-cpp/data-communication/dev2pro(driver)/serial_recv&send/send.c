#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/signal.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <errno.h>
int transfer_byte(int from, int to, int is_control);

int comfd;
int comfd2;
int break_pro=0;
void print_status(int fd);
char read_sensor(void);
void maintonode(char str);
void close_divice(void);
void set_divice(void);
void close_divice2(void);
void set_divice2(void);
struct termios oldtio, newtio;       //place for old and new port settings for serial port
struct termios oldkey, newkey;       //place tor old and new port settings for keyboard teletype
char *devicename = "/dev/pts/2";
char *devicename2 = "/dev/ttyACM0";	
int speed = B9600;

int main(void)
{
	

	
		
	for(int i =0;i<4;i++){
		set_divice2();
		char in=read_sensor();
		//close_divice2();
		printf("%c",in);
		set_divice();
		maintonode(in);
		close_divice();
	}
	
	
	
}

void set_divice(void){
	comfd = open(devicename, O_RDWR | O_NOCTTY | O_NONBLOCK);
	if (comfd < 0)
	{
		perror(devicename);
		exit(-1);
	}
	//fprintf(stderr, "C-a exit, C-x modem lines status\n");

	tcgetattr(STDIN_FILENO,&oldkey);
	newkey.c_cflag = B9600 | CRTSCTS | CS8 | CLOCAL | CREAD;
	newkey.c_iflag = IGNPAR;
	newkey.c_oflag = 0;
	newkey.c_lflag = 0;
	newkey.c_cc[VMIN]=1;
	newkey.c_cc[VTIME]=0;
	tcflush(STDIN_FILENO, TCIFLUSH);
	tcsetattr(STDIN_FILENO,TCSANOW,&newkey);


	tcgetattr(comfd,&oldtio); // save current port settings 
	newtio.c_cflag = speed | CS8 | CLOCAL | CREAD;
	newtio.c_iflag = IGNPAR;
	newtio.c_oflag = 0;
	newtio.c_lflag = 0;
	newtio.c_cc[VMIN]=1;
	newtio.c_cc[VTIME]=0;

		
	tcflush(comfd, TCIFLUSH);
	tcsetattr(comfd,TCSANOW,&newtio);
}
void set_divice2(void){
	comfd = open(devicename2, O_RDWR | O_NOCTTY | O_NONBLOCK);
if (comfd2 < 0)
	{
		perror(devicename2);
		exit(-1);
	}
	fprintf(stderr, "C-a exit, C-x modem lines status\n");

	tcgetattr(STDIN_FILENO,&oldkey);
	newkey.c_cflag = B9600 | CRTSCTS | CS8 | CLOCAL | CREAD;
	newkey.c_iflag = IGNPAR;
	newkey.c_oflag = 0;
	newkey.c_lflag = 0;
	newkey.c_cc[VMIN]=1;
	newkey.c_cc[VTIME]=0;
	tcflush(STDIN_FILENO, TCIFLUSH);
	tcsetattr(STDIN_FILENO,TCSANOW,&newkey);


	tcgetattr(comfd,&oldtio); // save current port settings 
	newtio.c_cflag = speed | CS8 | CLOCAL | CREAD;
	newtio.c_iflag = IGNPAR;
	newtio.c_oflag = 0;
	newtio.c_lflag = 0;
	newtio.c_cc[VMIN]=1;
	newtio.c_cc[VTIME]=0;

		
	tcflush(comfd, TCIFLUSH);
	tcsetattr(comfd,TCSANOW,&newtio);
}
void maintonode(char str){
		
	if(str=='Q'){
		
		break_pro=1;
	}
	else{
		fd_set fds;
			
		FD_ZERO(&fds);
		FD_SET(STDIN_FILENO, &fds);//main to ardu
		FD_SET(comfd, &fds);//ardu to main
			
		//select(comfd+1, &fds, NULL, NULL, NULL);
		FD_ISSET(comfd, &fds);
		write(comfd,&str,1);
	}
}
char read_sensor(void){
	
	fd_set fds;
	char c;
	int ret;
	
	FD_ZERO(&fds);
	FD_SET(STDIN_FILENO, &fds);//main to ardu
	FD_SET(comfd, &fds);//ardu to main
		
	//select(comfd+1, &fds, NULL, NULL, NULL);
	
	do {
		ret = read(comfd, &c, 1); 
	} while (ret < 0);
	
	write(STDIN_FILENO,&c,1);
	tcsetattr(comfd,TCSANOW,&oldtio);
	tcsetattr(STDIN_FILENO,TCSANOW,&oldkey);
	
	close(comfd);
	return c;
}
void close_divice(void){
	tcsetattr(comfd,TCSANOW,&oldtio);
	tcsetattr(STDIN_FILENO,TCSANOW,&oldkey);
	
	close(comfd);
}
void close_divice2(void){
	tcsetattr(comfd,TCSANOW,&oldtio);
	tcsetattr(STDIN_FILENO,TCSANOW,&oldkey);
	
	close(comfd);
}