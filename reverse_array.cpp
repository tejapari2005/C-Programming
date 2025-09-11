#include <stdio.h>
#define MAX_SIZE 10

// Function to print elements of an array in reverse order
void Reversing(int array[], int size) 
{
    printf("Elements of the array in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() 
{
    int array[MAX_SIZE];

    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < MAX_SIZE; i++) 
	{
        scanf("%d", &array[i]);
    }

    Reversing(array, MAX_SIZE);
    return 0;
}

