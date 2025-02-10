#include <stdio.h>

int main(){
	char name[80];
	int bmonth, bday; //aries, taurus, gemini, cancer, leo, virgo, libra, scorpius, sagit, capri, aqua;
	 //DI PO TAPOS
	printf("Please enter your name: \n");
	scanf("%s", &name);
	printf("Please enter your Birthmonth in number: \n");
	scanf("%d", &bmonth);
	printf("Please enter the date of your Birth in number: \n");
	scanf("%d", &bday);
	
	if (bmonth == 3)
		{
		if (bday > 20 & bday < 32) 
			{
			printf("Aries(Ram)\n");
			}
		}
		
	else if (bmonth == 4)
		{
		if (bday > 0 & bday < 20)
			{
			printf("Aries(Ram)\n");
			}
		else if (bday > 19 & bday < 31)                                
			{
			printf("Taurus(Bull)\n");
			}
		} 
	
	else if (bmonth == 5)
		{
		if (bday > 0 & bday < 21)
			{
			printf("Taurus(Bull)\n");
			}
		else if (bday > 19 & bday < 31)                                
			{
			printf("Gemini(Twins)\n");
			}
		}                
		 
		 
//		if 
//			{
//			printf("Taurus(Bull)\n");
//			}
//		}
	
//	(bmonth > 2 & bmonth <5 & bday > 20 & bday < 20)
//	switch(symbol){
//		case 1: 
//			()
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//		case 6:
//		case 7:
//		case 8:
//		case 9:
//		case 10:
//		case 11:
//	}
//	
	
	printf("Thank you for your applicatioin, %s \n", name);
	
	return 0;
	
}