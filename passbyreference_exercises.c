#include <stdio.h>
	//PASS BY REFERENCE vs PASS BY VALUES

void swapNumbers(int* aa, int* bb);
int main(){
	// notes
	// datatype* variableName asterisk || int* d;
		// it's used to initialize a pointer variable to accept or store addresses
	// %x is used instead of %d or %f || printf("%x", &a)
	// &variableName & ampersand is a pointer operator || d = &a;
		// it's used to get the address of a variable
	
//	int a = 9;
//	int* d; // declared a pointer 'd' that can store the address of an integer
//	d = &a; // assigned the address of 'a' to the pointer 'd'
//	printf("value of a is %d \n", a);
//	
//	printf("d address is %x \n", &d); // print the address of where pointer d is stored
//	printf("a address is %x \n", &a); // print the address of where variable a is stored
//	printf("d value is %x \n", d); // print the value of pointer d which is the address of a
////	printf("d value is %d \n", d); the %d is wrong because the value of d is an address so it must be %x, and %d is used for integers
//
//	//or
//	printf("d address is %p \n", (void*)&d);
//	printf("a address is %p \n", (void*)&a);
//	printf("d value is %p \n", (void*)d);
//	
//	
//// 	to print the value of a via pointer d
//	printf("value of a via pointer d is %d\n", *d); // you can print the value of a using the address stored inside pointer d
	
	// swap values
	int num = 20;
	int numo = 50;
	printf("Before swap: num = %d, numo = %d\n", num, numo);
	swapNumbers(&num, &numo);
	printf("After swap: num = %d, numo = %d\n", num, numo);
	
	// find the maximum and minimum numbers in an array
	int arr[6] = {3, 5, 23, 9, 38, 2};
	int max, min;
	findMaxMin(arr, 6, &max, &min); // pass arr, size of arr, addresses of max and min to the function swapNumbers
	printf("Max is %d, and min is %d", max, min);
	
	return 0;
}

void swapNumbers(int* aa, int* bb){
		// first attempt
//	int* temp;
//	printf("aa is %")
//	temp = aa;
//	aa = bb;
//	bb = temp;
//	printf("%")
		// second attempt
//	printf("First pointer's address is %p \n", (void*)&aa);
//	printf("Second pointer's address is %p \n", (void*)&bb);
//	// store the address of each pointer variable to one another
//	*aa = &bb;
//	*bb = &aa;
//	printf("First pointer's value is %p \n", *aa);
//	printf("Second pointer's value is %p \n", *bb);
		//the answer
	int temp = *aa; //the * asterisk here is used to access the value of the address stored in aa, which is 20
	// the int temp can store the value of *aa because the variable passed, the actual parameter from int main, which is num = 20, is an int.
	// the temp is assigned the value of the address stored in aa, not the address itself.
	*aa = *bb;
	*bb = temp; //the true values of the variables from main is now modified.
	
}

void findMaxMin(int* arr, int size, int* max, int* min){ //
	*max = *min = arr[0];
	for (int i = 1; i < size; i++){
		if (arr[i] > *max){
			*max = arr[i];
		}
		if (arr[i] < *min){
			*min = arr[i];
		}
	}
	
}