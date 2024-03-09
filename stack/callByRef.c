#include<stdio.h>

void change_value(int* ptr){
	printf("The received pointer is %d\n", *ptr);
	*ptr=45;
	printf("The changed pointer location is %p\n", (void*)ptr);
}

void change_pointer(int** ptr){
	int val2=90;
	*ptr=&val2;
	printf("\n\nThe location of val2 is %p", &val2);
}

void main(){
//	Seeing basic changes in the value
//	Location is same but value is changed
	int val1=30;
	int* ptr=&val1;
	printf("The caller pointer location is %p\n", (void*)ptr);
	change_value(ptr);
	printf("The ptr in caller is %d", val1);
	printf("\n");
	
//	Seeing how pointer location is received or updated
	change_pointer(&ptr);
	printf("\nThe received value is %d from location %p\n",*ptr, ptr);
	
}
