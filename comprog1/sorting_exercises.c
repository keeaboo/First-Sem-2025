#include <stdio.h>

void bubble(int arr[], int size){
	int temp;	
	for (int i=0; i < size; i++){
		for (int j=0; j<(size-1); j++){
			if (arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i=0; i<size; i++){
		printf("bubbledArray[%d] = %d \n", i, arr[i]);
	}
}

void insertion(int arr[], int size){
	for (int i=1; i<size; i++){ // suppose that arr[] = {4, 3, 1}
		// every loop or iteration, arr[i] will be assigned to key
		int key = arr[i]; // values for every iter if size is 3: 1, 2
		// every loop or iteration, i-1 will be assigned to j
		int j = i - 1; // values for evry iter if size is 3: 0, 1
		
		// while j ismorethanorequalto0 AND arr[j](the left element) is more than key(the right element)
		while (j>=0 && arr[j]>key){ //if arr[j] or arr[0] is 4 and the key, arr[i] or arr[1] is 3, then the body of this loop will execute
			//(the right element after arr[j] will be assigned the value of arr[j])
			arr[j+1] = arr[j]; // the value of arr[1] will now become 4
			//j will become negative 1
			j = j-1;
			//the while loop will terminate
		}
		// arr[j+1] (or arr[0] if j is -1), will be assigned arr[i] every loop
		arr[j+1]=key; // key is assigned earlier the value of arr[1], which is 3
		// so now the left element or arr[0] is now 3, and the right element is now 4
	}
	for (int i=0; i<size; i++){
		printf("insertedArray[%d] = %d \n", i, arr[i]);
	}
}

void selection(){
	
}

int main (){
	// sorting algorithm
		int length; 
	printf("enter the size of the array: \n");
	scanf("%d", &length);
	int aray[length];
	printf("size is %d \n", length);

	for(int i=0; i<length; i++){
		printf("Enter number %d: \n", i+1);
		scanf("%d", &aray[i]);
	}
	//		insertion
	insertion(aray, length);
			
	//		bubble sort
//	int arr[7] = {50, 38, 23, 67, 20, 15, 2};
//	// function call
//	bubble(arr, 7);
//	
//	printf("\n");
//	
//	bubble(aray, length);
	
	//		selection
	
	return 0;
}

