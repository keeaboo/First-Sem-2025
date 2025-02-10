#include <stdio.h>

int main(){
	int choice;
	char username[80];
	int a, b, c;
	int twicesum;
	int gender, manAge, partnerAge;
	int usersec;
	int seconds, minutes, hours;
	int ans = 1;
	
	printf("Please enter your name: \n");
		scanf("%s", &username);
	do {	
		
		printf("Please choose which program to run: Smiley=1, Plato=2, Seconds=3: \n");
		scanf("%d", &choice);
		if (choice == 1)
			{
						// Smiley
				printf("Please enter a number: \n");
				scanf("%d", &a);
				printf("Please enter another number: \n");
				scanf("%d", &b);
				printf("Please enter another number: \n");
				scanf("%d", &c);
				twicesum = (a+ b + c) * 2;
				printf("%s, Twice the sum of your numbers: \n %d, %d, %d, \nis: %d :) :) :) \n", username, a, b, c, twicesum);
			}
		else if (choice == 2)
			{// Plato
			printf("What is your gender: woman=1 , man=2 \n");
			scanf("%d", &gender);
			printf("Please enter your Age: \n");
			scanf("%d", &manAge);
			
			if (gender == 1){
				partnerAge = manAge*2 - 7;
				printf("The ideal age for your partner is %d \n", partnerAge);
			}
			else if (gender ==2){
				partnerAge = manAge/2 + 7;
				printf("The ideal age for your partner is %d \n", partnerAge);
			}
			}
		else if (choice ==3)
			{// Seconds
			printf("Enter seconds: \n");
			scanf("%d", &usersec);
			
			hours = usersec/3600;
			usersec = usersec%3600;
			minutes = usersec/60;
			usersec = usersec%60;
			seconds = usersec;
			
			printf("%s, here is the result: \n", username);
			printf("seconds: %d \n", seconds);
			printf("minutes: %d \n", minutes);
			printf("hours: %d \n", hours);
			printf("The time is %d:%d:%d \n", hours, minutes, seconds);
			}
			
		printf("Do you want to try again? yes=1, no = 2");
		scanf("%d", ans);
		
//			if (ans == 1){
//				printf("proceeding \n");
//			}
//			else if (ans == 2){
//				printf("Do you really want to exit? yes = 1, no = 0\n");
//				scanf("%d", &ans);
//				if (ans == 0){
//					ans = 1;
//					printf("Here we go \n");	
//				}
//				else if (ans == 0){
//					printf("Exiting Program \n");
//				}	
//			}
	} while (ans == 1);
	
	
	
	return 0;
}