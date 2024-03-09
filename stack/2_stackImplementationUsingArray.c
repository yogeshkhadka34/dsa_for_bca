#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;

int isEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
}
void push(int data){
	if(top==MAX-1){
		printf("Stack Overflow \n");
		return;
	}
	top=top+1;
	stack_arr[top]=data;
}

int pop(){
	if(isEmpty){
		printf("Stack Underflow with top at %d\n",top);
		exit(1);
	}
	int data= stack_arr[top];
	top=top-1;
	printf("%d is popped \n",data);
}

void print(){
	if(top==-1)
		printf("No items in stack to display");
	for( int i=top; i>=0; i--){
		printf( " %d ", stack_arr[i]);
	}
}

int main(){
	push(5);
	push(6);
	push(7);
	push(9);
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	print();
	
}
