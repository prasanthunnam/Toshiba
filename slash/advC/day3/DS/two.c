#include<stdio.h>
#include<malloc.h>

struct ll{
	int data;
	struct ll *next;
};

struct ll *start=NULL;

void createnode(int);
void displaylist();
void deletenode();
void insertnode();
void takedata();

void main(){
	takedata();
	displaylist();
	insertnode();
	displaylist();
	return;
}

void takedata(){
	int num=0;
	while(1)
	{
		printf("enter a number and -1 to stop\n");
		scanf("%d", &num);
		if (num == -1){
			break;
		}
		else
			createnode(num);

	}
	return;
}

void createnode(int num)
{
	struct ll *temp, *p;
	p = start;
	temp = (struct ll *) malloc(sizeof(struct ll));
	temp->data = num;
	//if first node
	if (start==NULL){
		start=temp;
	}
	else {
		while(p->next!=NULL){
			p=p->next;
		}
		p->next = temp;
	}
	return;
}

void displaylist(){
	struct ll *p;
	p = start;
	printf("elements are:\n");
	while(p!=NULL){
		printf("%d\t", p->data);
		p=p->next;
	}
	printf("\n");
	return;
}

void insertnode()
{
	int val, where, flag=0;
	struct ll *p, *temp;
	printf("enter element after which new data has to be inserted\n");
	scanf("%d", &where);
	printf("enter value to be inserted\n");
	scanf("%d", &val);

	p=start;
	temp = (struct ll *) malloc(sizeof(struct ll));
	temp->data = val;
	temp->next = NULL;
	while(p->next!=NULL)
	{
		if(p->data==where){
			temp->next = p->next;
			p-> next = temp;
			flag=1;
			break;
		}
		else{
			p=p->next;
		}
	}
	if (flag==0){
		printf("element not found, so appending it\n");
		p->next=temp;
	}
}





















