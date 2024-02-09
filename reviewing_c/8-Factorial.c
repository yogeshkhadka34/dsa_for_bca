//Factorial by recursion

#include<stdio.h>

int calculateFactorial(int number){
	int factorial = factorial *number;
	return factorial;
}

int main(){
	int number=6;
	int factorial;
	 for( int i=1; i<number-1;i++ ){
	 	factorial = calculateFactorial(number);
	 }
	 printf("%d is factorial", factorial);
}
