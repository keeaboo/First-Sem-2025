// Final Performance program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define width 60

void printCentered(const char *text)
{ // Function to center a line of text
    int padding = (width - strlen(text)) / 2;
    for (int i = 0; i < padding; i++)
    {
        printf(" ");
    }
    printf("%s\n", text);
}

void frontpage()
{
    printCentered("============================================================");
    printCentered("~~~ UNIQUE ELEMENTS ~~~");
    printCentered("============================================================");
    printCentered("Created by:");
    printCentered("------------------------------------------------------------");
    printCentered("Ellimhykelle Fajardo");
    printCentered("Chelsey Silva");
    printCentered("Treskel Tan");
    printCentered("------------------------------------------------------------");
    printCentered("============================================================");
    printf("\n");
}

void findUniqueElements(int arr[], int size)
{
    printf("\nThe unique elements found in the array are:\n");
    for (int i = 0; i < size; i++)
    {
        int unique = 1;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                unique = 0;
                break;
            }
        }
        if (unique)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int getValidInteger()
{ // to handle invalid input and only accept integers
    int num;
    char term;
    while (1)
    {
        if (scanf("%d%c", &num, &term) != 2 || term != '\n')
        {
            printf("Invalid input! Please enter a valid integer number.\n");
            while (getchar() != '\n')
                ;
        }
        else
        {
            return num;
        }
    }
}

int main()
{
    frontpage();
    int n;
    char name[80];
    char choice;
    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);
    printf("Hi, %s! \n", name);
    do
    {
        do
        {

            printf("Please input the number of elements to be stored in the array: ");
            n = getValidInteger(); // to handle invalid input and only accept integers
                                   // the scanf is replaced
            if (n <= 0)
            {
                printf("The array must have at least 1 element.\n");
            }
        } while (n <= 0);

        int arr[n];
        printf("Please input %d elements in the array:\n", n);
        for (int i = 0; i < n; i++)
        {
            printf("element - %d : ", i);
            arr[i] = getValidInteger(); // the scanf is replaced
        }

        findUniqueElements(arr, n);

        do
        { // user can re-check unique elements :)
            printf("\nDo you want to check unique elements again? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'n' || choice == 'N')
            {
                char exitConfirm;
                do
                { // user can confirm exit to prevent accidental exit :(
                    printf("Are you sure you want to exit? (y/n): ");
                    scanf(" %c", &exitConfirm);

                    if (exitConfirm == 'y' || exitConfirm == 'Y')
                    {
                        printf("\nThank you for using the program, %s!\nExiting the program...\n", name);
                        return 0;
                    }
                    else if (exitConfirm == 'n' || exitConfirm == 'N')
                    {
                        choice = 'y';
                    }
                } while (exitConfirm != 'y' && exitConfirm != 'Y' && exitConfirm != 'n' && exitConfirm != 'N');
            }

        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
// sana walang mali sa program hehe