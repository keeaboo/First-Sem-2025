#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
	char A[80] = "CS";
	char B[80] = "PUP";
	// copies s2 into s1
//	strcpy(s1, s2);
	
	// concatenates s2 on the end of s1
//	strcat(s1, s2)

	//
//	strlen(s1)

	// returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2
//	strcmp(B, A);
//	
//	if(strcmp(B, A)){
//		printf("Hello");
//	}
//	else
//		printf("Kumusta");

	//returns a substrin of string beginnnign at te first occurrence of charactaer c up to the end of string
//	strchr(s1, ch)

	//reverses all characters except for the null character
//	strrev(string)

	// MATH FUNCTIONS <math.h>
	//pow, double pow(double)
	//sqrt, double sqrt
	//log, double log
	//floor, double floor
	//ceil, double ceil
	//abs, double abs
	
	
	//<ctype.h>
	// int isalnum(int c) || checks whether the passed char is alphanumeric
	// int isalpha(int c) || checks whether passed char is alphabetic
	// int iscntrl(int c) || checks whether char is control char
	
	if(isxdigit('W')){
		printf("Hello");
	}
	else
		printf("Kumusta");
	
	return 0;
}