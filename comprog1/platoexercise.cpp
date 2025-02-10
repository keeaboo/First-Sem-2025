#include <stdio.h>

int main(){
	char manName[80];
	int manAge;
	int partnerAge;
	
	printf("Please enter your name: \n");
	scanf("%s", &manName);
	printf("Please enter your Age: \n");
	scanf("%d", &manAge);
	
	partnerAge = manAge/2 + 7;
	
	printf("%s, The ideal age for your partner is %d \n", manName, partnerAge);
	
	return 0;
	
}