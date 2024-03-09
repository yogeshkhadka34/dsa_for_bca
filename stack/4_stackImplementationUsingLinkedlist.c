#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	int nepal;
	struct Node* link;
};

struct Node* top;

void push(int n){
	struct Node* newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	
	if(newNode==NULL){
		printf("Stack Overflow");
		exit(1);
	}
	
	newNode->data = n;
	newNode->link = top;
	top = newNode;
}

int pop(){
	struct Node* temp;
	if(top==NULL){
		printf("Stack Underflow");
		return -1;
	}
	int value= top->data;
	temp=top;
	
	top=temp->link;
	
	free(temp);
	printf("\nPopped element is %d \n", value);
	return 1;
}

void print(){
	struct Node* temp;
	temp=top;
	if(temp==NULL){
		printf("\nNo elements to display");
	}
	while(temp){
		printf("%d  ", (*temp).data);
		temp= temp->link;
	}
	printf("\n");
}

int main(){
	push(5);
	push(6);
	push(9);
	push(7);
	pop();
	pop();
	push(3);
	print();
}
