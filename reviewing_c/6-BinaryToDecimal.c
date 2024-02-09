#include<stdio.h>
#include<math.h>

int main(){
	int N=10100;
	int ans=0,i=0;
	
	while(N!=0){
		ans=ans+(N%10)*pow(2,i);
		N=N/10;
		i++;
	}
	
	printf("%d is the required decimal number", ans);
	return 0;
}
