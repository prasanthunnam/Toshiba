// shared mem
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/mman.h>

void main()
{
	int fd;
	char *ptr;
	fd = shm_open("/bin", O_CREAT|O_RDWR, 0666);
	ftruncate(fd, 200);
	ptr = mmap(0, 200, PROT_WRITE, MAP_SHARED, fd, 0);
	memset(ptr, 0, 200);
	strcpy(ptr, "gotta catch them all");
	munmap(ptr, 200);
	close(fd);
	return;
}

