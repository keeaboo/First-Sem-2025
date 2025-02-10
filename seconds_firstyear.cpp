#include <stdio.h>

int main(){
	char username[80];
	int usersec;
	int seconds, minutes, hours;
	
	printf("Please enter your name: \n");
	scanf("%s", &username);
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
	
	return 0;
	
}