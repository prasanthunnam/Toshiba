#include<stdio.h>
#include<unistd.h>

void main()
{
	printf("hello\n");
	fork();
	printf("namaste\n");
	fork();
	printf("good morning\n-----\n");
	return;
}
