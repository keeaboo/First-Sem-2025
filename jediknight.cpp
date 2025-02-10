#include <stdio.h>

int main(){
	char name[80];
	int age, height, citizenship, recomendee;
	
	printf("Please enter your name: \n");
	scanf("%s", &name);
	printf("Are you a recomendee of Jedi Master Obi Wan? Type 1 for yes, type 0 for no \n");
	scanf("%d", &recomendee);
	printf("Please enter your age: \n");
	scanf("%d", &age);
	printf("Please enter your height in centimeters: \n");
	scanf("%d", &height);
	printf("Are you a Citizen of the Planet Endor? Type 1 for yes, type 0 for no \n");
	scanf("%d", &citizenship);
	
	
	if (recomendee == 0)
		if (age > 199)
			if (age > 20 and age < 26)
				if (citizenship == 1)
					printf("You are accepted to the Jedi Knight Academy \n");
				else
					printf("We are sorry to inform you that you are rejected \n");
			else
				printf("We are sorry to inform you that you are rejected \n");
		else
			printf("We are sorry to inform you that you are rejected \n");
	else
		printf("You are accepted to the Jedi Knight Academy \n");
	
	printf("Thank you for your applicatioin, %s \n", name);
	
	return 0;
	
}