#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main(){
	int pid=0, fd=0;
	static char buf[20];
	fd = open("quotes.txt", O_RDONLY); 
	printf("fd for quotes.txt is %d\n", fd);
	read(fd, buf, 5);
	printf("read data = %s\n", buf);
	read(fd, buf, 8);
	printf("read data = %s\n", buf);
	close(fd);
	return;
}
