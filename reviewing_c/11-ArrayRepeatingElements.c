// C Program for 
// checking duplicate 
// values in a array 
#include <stdio.h> 

//Sorting is required else repeating terms with the frequency will be displayed, 
//we want the formatted output
void sort_array(int arr[], int n){
	
	for( int i=0; i<n-1; i++){
		for( int j=0; j<n-i-1; j++){
			
			if(arr[j]>arr[j+1]){
				int temp= arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
}

//Finding repeating element and writing it without repeating
int find_repeating(int arr[], int n){
	
int count = 0; 
    for (int i = 0; i < n; i++) { 
  		printf("Starting value of i is %d \n",i); 
        int flag = 0; 
        while (i < n - 1 && arr[i] == arr[i + 1]) { 
        	printf("%d \n", arr[i+1]);
            flag = 1; 
            i++; 
        } 
        if (flag) 
            printf("%d ", (arr[i - 1]));
			printf("flagged and value of i is %d \n",i); 
    } 
  
    return 0; 
}

int main(){
	int arr[]={5,2,1,1,3,4,5,3,3,3,3,5,2};
	int array_length = sizeof(arr)/sizeof(arr[0]);
	
	sort_array(arr, array_length);
	
	int new_length= find_repeating(arr,array_length);
	
	printf("The repeated elements in array are ");
	for (int i=0; i<new_length; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}




//int Sort(int arr[], int size) 
//{ 
//	for (int i = 0; i < size - 1; i++) { 
//
//		for (int j = 0; j < size - i - 1; j++) { 
//			if (arr[j] > arr[j + 1]) { 
//				int temp = arr[j]; 
//				arr[j] = arr[j + 1]; 
//				arr[j + 1] = temp; 
//			} 
//		} 
//	} 
//} 
//
//// find repeating element 
//void findRepeating(int arr[], int n) 
//{ 
//	int count = 0; 
//	for (int i = 0; i < n; i++) { 
//
//		int flag = 0; 
//		while (i < n - 1 && arr[i] == arr[i + 1]) { 
//			flag = 1; 
//			i++; 
//		} 
//		if (flag) 
//			printf("%d ", (arr[i - 1])); 
//	} 
//
//	return; 
//} 
//
//int main() 
//{ 
//	int arr[] = { 1, 3, 4, 1, 2, 3, 5, 5, 4 }; 
//
//	int n = sizeof(arr) / sizeof(arr[0]); 
//	
//	Sort(arr,n); 
//	
//	findRepeating(arr,n); 
//	
//	
//
//	return 0; 
//}

