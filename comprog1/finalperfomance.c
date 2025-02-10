#include <stdio.h>

int main()
{
	// Final Performance my first draft
	int arr[4] = {3, 4, 4, 5};
	int dupl[4];

	for (int i = 0; i < 4; i++)
	{
		//		int el = arr[i];
		for (int j = 1; j < 4; j++)
		{
			if (arr[i] == arr[j])
			{
				dupl[j] = arr[i];
				printf("duplicate\n");
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		//		int le = arr[i];
		for (int j = 0; j < 4; j++)
		{
			if (arr[i] == dupl[j])
			{
				arr[i] = 0;
				printf("delete\n");
			}
		}
	}

	for (int j = 0; j < 4; j++)
	{
		printf("element%d is %d\n", j, arr[j]);
	}

	return 0;
}