#include<stdio.h>
#include<math.h>

int main(){
	int N=102008;
	int i=0, ans=0;
	
	while(N!=0){
		if (N%10==0)
			ans= ans + 1*pow(10,i);
		else
			ans= ans + (N%10)*pow(10,i);
		N=N/10;
		i++;
	}
	printf("The required number is %d", ans);
	return 0;
}
