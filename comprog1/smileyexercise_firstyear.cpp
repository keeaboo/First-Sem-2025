#include <stdio.h>

int main(){
	char username[80];
	int a;
	int b;
	int c;
	int twicesum;
	
	printf("Please enter your name: \n");
	scanf("%s", &username);
	printf("Please enter a number: \n");
	scanf("%d", &a);
	printf("Please enter another number: \n");
	scanf("%d", &b);
	printf("Please enter another number: \n");
	scanf("%d", &c);
	
	twicesum = (a+ b + c) * 2;
	
	printf("%s, Twice the sum of your numbers: \n %d, %d, %d, \nis: %d :) :) :) \n", username, a, b, c, twicesum);
	
	return 0;
	
}