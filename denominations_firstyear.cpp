#include <stdio.h>

int main(){
	char name[80];
    int cash;
    int tho, fiveh, hund, fifties, twenties, tens, fives, ones;
    
    printf("Enter your name: \n");
    scanf("%s", &name);
    printf("Enter the number of cash on hand: \n");
    scanf("%d", &cash);
    
	int cashy = cash;
	
    tho = cash / 1000;
    cash = cash % 1000;

    fiveh = cash / 500;
    cash = cash % 500;

    hund = cash / 100;
    cash = cash % 100;

    fifties = cash / 50;
    cash = cash % 50;

    twenties = cash / 20;
    cash = cash % 20;

    tens = cash / 10;
    cash = cash % 10;

    fives = cash / 5;
    cash = cash % 5;

    ones = cash;

    printf("Here\'s the denominations, %s\n", name);
    printf("Cash on hand: %d\n", cashy); 
    printf("Denominations:\n");
    printf("  1000 = %d\n", tho);
    printf("  500  = %d\n", fiveh);
    printf("  100  = %d\n", hund);
    printf("  50   = %d\n", fifties);
    printf("  20   = %d\n", twenties);
    printf("  10   = %d\n", tens);
    printf("  5    = %d\n", fives);
    printf("  1    = %d\n", ones);

    return 0;
}