#include <stdio.h>

int main(){
	// searching
	//linear
	int num = 5; int j = 0;
	int size = 7;
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	
	for (int i=0; i<7; i++){
		if (num==arr[i]){
			printf("Found at index [%d]", i);
			j = 1;
		}
	}
	if (j==0){
		printf("not found");
	}
	
	//binary
	
	
	
	return 0;
}