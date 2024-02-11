#include<stdio.h>

void sort(int arr[], int n){
	int temp; 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] > arr[j]) { 
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
  
    // printing first half in ascending order 
    for (int i = 0; i < n / 2; i++) 
        printf("%d ", arr[i]); 
  
    // printing second half in descending order 
    for (int j = n - 1; j >= n / 2; j--) 
        printf("%d ", arr[j]); 
	
}

int main(){
	int arr[]={1,2,5,3,4,2,9};
	int length=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr, length);
	return 0;
}
