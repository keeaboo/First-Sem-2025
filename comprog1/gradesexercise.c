#include <stdio.h>

//void ;
int main(){
	int n;
	
	printf("Enter the number of students: ");
	scanf("%d", &n);

	int grades[n];
	
	// ask the grades for each student
			// mamaya na  ang CONDITIONALS: 0<=GRADE<=100
	for (int i=0; i<n; i++){
		printf("Enter grade for student %d: ", i + 1);
		scanf("%d", &grades[i]);
	}
	
	//print all students' grades
			// mamaya na ang COMMAs
	for (int j=0; j<n; j++){
		printf("%d", grades[j]);
		printf(", ");
	}
	
	printf("\n");
	//highest grade
	printf("Highest Grade: ");
	
	//lowest grade
	printf("\n Lowest Grade: ");
	
	//average grade
	printf("\n Average Grade: ");
	
	printf("\n Number of Students Passed: ");
	
	printf("\n Number of Students Failed: ");
	
	return 0;
}



//void name(int x[], int z)
//{
//	
//	for (){
//		printf("%d", x[j]);
//	}
//}