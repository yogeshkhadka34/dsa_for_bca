#include <stdio.h>
#include <math.h>

double binaryToDecimal(char *binary){
	int integerPart=0;
	double floatingPart=0.0;
	int floatingPower=1;
	int decimalPlace=0;
	
	for(int i=0; binary[i]!='\0';i++){
		if (binary[i]=='.'){
			decimalPlace=1;
			continue;
		}
		if (decimalPlace==0)
			integerPart = integerPart*2 + (binary[i]-'0');
		else{
			floatingPart = floatingPart + (binary[i]-'0')*pow(2,-floatingPower);
			floatingPower++;
		}			
	}
	return integerPart + floatingPart;
}

int main(){
	char binaryNumber[64];
	printf("Please enter the floating point binary number: ");
	scanf("%s", binaryNumber);
	
	double decimalNumber = binaryToDecimal(binaryNumber);
	printf("The required decimal number is %0.6lf", decimalNumber);
	return 0;
}
