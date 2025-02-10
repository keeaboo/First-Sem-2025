#include <stdio.h>

int main(){
// initialization in loops = init of loop control variables
// sentinel = the condition for a loop to repeat the statements, if the condition is false, the loop will terminate
// loop body = the statements to be executed repeatedly by the loop control
// counter = increment or decrement; to update loop control variables at the end of each repetition/loop until the sentinel is false

	
	
// WHILE LOOP = repeatedly executes a statement as long as the given condition is true
	int a = 1 //initialization
	while (condition or sentinel)
	{	//loop body
			
		statements
		a++ //counter
		//loop body
	}

// PSEUDOCODE FOR WHILE LOOP
	ALGORITHM displaying_from_1to10
	N -> 1 // init
	WHILE N<=10 // sentinel
		BEGIN // loop body
			OUTPUT N
			N -> N+1 // counter
		END
	END WHILE
	
	
// DO WHILE LOOP = executes the action first before checking the condition
// executes at least once
do {
	statements or loop body;
}while(condition to stop or sentinel)
	

// FOR LOOP = execute a specific number of times; same as while loop
for (initialization; condition or sentinel; counter or increment decrement){
	loop body statements;
}

// PSEUDO CODE FOR LOOP
	FOR
		i <- 1 To 5 Do // init and sentinel
		BEGIN //begining of loop body
			OUTPUT i 
			i <- i + 1 // counter or increment
		END
	END FOR
	
// PSEUDOCODE DO WHILE LOOP = Loop terminates when true and repeats if condition is false; baliktad sa ibang loop na terminated na kapag and condition ay false
// pero sa code ng do while loop, terminate if false condition katulad sa ibang loop
// parang do while loop na chinecheck lang ang condition pagkatapos na maexecute and code
	ALGORITHM displaying_from_1to10
	N -> 1
	REPEAT
		BEGIN
			OUTPUT N 
			N<- N + 1
		END
	UNTIL N>10 //if naging true na to, like ang N ay naging 11, terminate


// NESTED LOOP
// result: parent a 1, nested b 1 nested b 2 nested b 3, parent a 2 so on
for (int a = 1; a<10; a++){
	printf("parent a %d \n", a);
	for (int b = 1; b<=3; b++){
		printf(" nested  b %d \n", b);
	}
	
}

// ARRAYS = used to store large number of homogenous values (all chars, all floats, all ints, di pwedeng halu-halo na chars ints and etc sa isang arrray)
// ARRAYS = to read and write elements in an Array, use LOOPS (to add,subtract,multiply,divide elements, ot other complicated chuchu like averages)

datatype name[arraysize or expression] = {"Elements"};

char college[6] = {"CCMIT"};

	// index is inside [], 0 is for the first element, 1 is for the second, and so on || if referencing, -1 is for the last element, -2 is for the second to the last element chuchu
college[0] = 'C';
college[1] = 'C';
college[2] = 'M';
college[3] = 'I';
college[4] = 'T';
// 6 and array size pero 5 lang ang elements, kaya \0
college[5] = '\0';
			
//int scores[11]= {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};

// ACCESSING ELEMENTS IN ARRAYS USING LOOPS
//	for(int i=0; i<10; i++){
//		scores[i];
//		printf("%d \n", scores[i]);
//	}
	
// INPUTTING VALUES
//	int scores[10]; // initialize but no elements
//	for(int i=0; i<10; i++){
//		scanf("%d", &scores[i]);
//	}

	// the first element is zero, then the second is 2 because index 1 * 2 is 2, then the third is 4 because index 2 * 2 is 4, then so on
//	int scores[10]; // initialize but no elements
//	for(int i=0; i<10; i++){
//		scores[i] = i*2;
//		printf("%d \n", scores[i]);
//	}

	return 0;
}