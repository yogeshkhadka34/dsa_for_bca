#include<stdio.h>

//Passing array but it comes as reference only; 
void reverse(int arr[], int n){
	//For loop with both i and j variables
	for(int i=0, j=n-1; i<j; i++, j--){
		int temp= arr[i];
		arr[i]= arr[j];
		arr[j]= temp;
	}
	
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);	
	}
}

//Passing reference to the array
void reverseSingle(int* arr, int n){
	for (int i=0;i<n/2;i++){
		int temp= arr[i];
		arr[i]= arr[n-1-i];
		arr[n-1-i]=temp;
	}
	for(int i=0; i<6; i++){
		printf("%d ", arr[i]);	
	}
}

int main(){
	//Using sizeof() property for unknown array length
	int arr[]={1,2,3,4,5,9};
	int arr_length= sizeof(arr)/sizeof(arr[1]);
	
	//Passing length of array directly
	int array[6]={5,6,7,8,9,0};

	reverse(arr,arr_length);	
	printf("\n");
	reverseSingle(array,6);
		
	return 0;	
}
