#include <stdio.h>

int main(){
	char name[80];
	int num;
	int sumeven;
	int prodeven = 1; 
	int prododd = 1;
	int sumodd = 0;
	
	printf("Please enter a number: \n");
	scanf("%d", &num);
	
	if (num > 0)
	{
		printf("Here are the information of numbers 1 to %d \n", num);
		for(int ahk=1; ahk<=num; ahk++)
		{ //   initial.. sentinel.. counter 
			//loop body
			if (ahk%2 == 0)
			{	
				printf("%d is even \n", ahk);
				sumeven += ahk;
				prodeven *= ahk;
			}	
			else
			{
				printf("%d is odd \n", ahk);
				sumodd += ahk;
//				printf("%d \n", sumodd);
				prododd *= ahk;
			}
		};
		printf("%d is the sum of even numbers 1 to %d \n", sumeven, num);
		printf("%d is the product of even numbers 1 to %d \n", prodeven, num);
		printf("%d is the sum of odd numbers 1 to %d \n", sumodd, num);
		printf("%d is the product of odd numbers 1 to %d \n", prododd, num);
//		for(int b=1; b<=num; b++)
//		{
//			c += b;
//			d *= b;
//		};
//		printf("%d is the sum of numbers 1 to %d \n", c, num);
//		printf("%d is the product of numbers 1 to %d \n", d, num);
	}
	else
		printf("Error");
		
	
	return 0;
}