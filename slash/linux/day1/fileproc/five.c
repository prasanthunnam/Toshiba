#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main(){
	int pid=0, fd=0;
	fd = open("quotes_new.txt", O_RDONLY); 
	printf("fd for quotes.txt is %d\n", fd);
//	do something with the file
	close(fd);
	return;
}
