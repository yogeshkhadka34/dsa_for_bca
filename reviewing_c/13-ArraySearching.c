#include<stdio.h>

int search(int arr[], int n, int x){
	for( int i=0; i<n; i++){
		if(x==arr[i])
			return i;
	}
	return -1;
}

int main(){
	int arr[]={1,2,4,6,8};
	int length= sizeof(arr)/sizeof(arr[0]);
	int x=9;
	
	int result= search(arr,length,x);
	
	if(result == -1)
		printf("%d was not found in the array",x);
		
	else
		printf("%d was found in %dth index of the array ", x, result);
		
	return 0;
}
