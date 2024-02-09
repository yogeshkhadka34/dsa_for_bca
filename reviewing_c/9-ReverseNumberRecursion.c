#include<stdio.h>

int reverseIterations(int n){
	int ans=0;
	while(n!=0){
		ans= ans*10 + (n%10);
		n=n/10;
	}
	printf("%d is the required iterations result\n",ans);
}

int reverseRecursion(int n, int ans){
	if (n == 0) 
        return ans; 
  
    ans = ans * 10 + n % 10; 
    return reverseRecursion(n / 10,ans); 
}

int main(){
	int N=12345;
	int ans=0;
	
	reverseIterations(N);
	
	N=reverseRecursion(N,ans);

	printf("%d is the result by Recursion",N);
	
	return 0;
}
