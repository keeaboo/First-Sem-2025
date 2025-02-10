#include <stdio.h>

int main(){
	char username[80];
	int numHours;
	int numMinutes;
	
	printf("Please enter your name: \n");
	scanf("%s", &username);
	printf("Enter number of Hours: \n");
	scanf("%d", &numHours);
	
	numMinutes = numHours * 60;
	
	printf("%s, %d hours is equal to %d minutes \n", username, numHours, numMinutes);
	
	return 0;
	
}