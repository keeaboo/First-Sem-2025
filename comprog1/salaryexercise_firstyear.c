#include <stdio.h>

int main(){
	char username[80];
	int hoursWorked;
	float grossPay;
	float withTax;
	float netPay;
	
	printf("Please enter your username: \n");
	scanf("%s", &username);
	printf("Please enter how many hours you worked: \n");
	scanf("%d", &hoursWorked);
	grossPay = 281 * hoursWorked;
	withTax = 0.32 * grossPay;
	netPay = grossPay - withTax;
	
	printf("Here\'s your pay details, %s\n", username);
	printf("  Hourly rate: 281.00\n");
	printf("  Hours Worked: %d\n", hoursWorked);
	printf("  Gross Pay: %.2f\n", grossPay);
	printf("  Witholding Tax: %.2f\n", withTax);
	printf("  Net Pay: %.2f\n", netPay);
	
	return 0;
}