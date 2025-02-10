#include <stdio.h>

int main(){
	
	// Sorting and Searching are algorithms used to organize and manipulate data 
	// SORTING = organizes data into descending or ascending order
	// SEARCHING = process of finding a specific item in a data set, like arrays
	
		//SORTING TYPES
	
			// INSERTION = the most simple sorting algorithm, sorts items one at a time BY SWAPPING
	// it first checks and sorts the first two items, then the left most part will become the the SORTED SUB-LIST
	
	// then sorts the next two items in the right part after the sorted sub-list
	
	// then checks the sorted sub-list if there are any unsorted, then sorts it
	
	// repeat until all items are sorted
	
	
	
			// SELECTION = finds the minimum or smallest (or maximum or biggest if descending) item in the array or data set, then switches or swaps it with the first element or item 
			// until the array is in ascending order
	
	
			// BUBBLE SORT = swaps adjacent items one by one then after getting to the last item, goes through all the items again and swaps them until the array is sorted
			// O(n^2) time complexity where n is the number of items
			
			
			// MERGE SORT = divide and conquer || O(n log n) = fast
	// divide the array in equal halves then the halves into halves again and again until we achieve the ATOMIC VALUES = single elements
	
	// compare the adjacent two elements then merge them in a sorted manner
	
	// the next iteration is merging the adjacent two lists' elements in a sorted manner
	
	// repear until the array is sorted
	
	
	int arr[5]; int i = 0;
	
	while (i < 5){
		arr[i] = ++i;
		printf("%d", arr[i]);
	}
	printf("\n");
	for (i=0; i<5; i++){
		printf("%d", arr[i]);
	}
	
	
	return 0;
}