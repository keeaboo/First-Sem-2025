#include <stdio.h>
int main()
int fun()
int fun(int x[], int z)

int main(){
	 int a[5] = {2, 6, 8, 1, 4};
	 int b[20] = {1,3,5,7,8};
	 int size = sizeof(a[0]);
	 
	 fun(a,size);
	
	
	return 0;
}

int fun(int x[], int z)
{
	int j;
	for (j=0; j<z; j++){
		printf("%d", x[j]);
	}
}