#include<stdio.h>

int main(){
	
//	Swapping without using extra variables
	int a=10,b=6;
//	a=4
	a=a-b; 
//	b=4+6=10
	b=a+b;
//	a=10-4=6
	a=b-a;
	
	printf("a=%d and b=%d", a,b);
	
//	Swapping using temporary variables
	int c=2, d=3, temp;
	temp=c;
	c=d;
	d=temp;
	printf("\nc=%d and d=%d",c,d);
	
	return 0;
}
