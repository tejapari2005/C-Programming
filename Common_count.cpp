#include <stdio.h>
int main() 
{
    int array1[50], array2[50];
    int size1, size2;
    int Count = 0;

    // Input size of array1 and array2
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("Enter the size of secound array: ");
    scanf("%d", &size2);
    
    // Input elements of array1
    printf("\nEnter elements of first array:\n");
    for (int i = 0; i < size1; i++) 
	{
        scanf("%d", &array1[i]);
    }

    // Input elements of array2
    printf("\nEnter elements of secound array:\n");
    for (int i = 0; i < size2; i++) 
	{
        scanf("%d", &array2[i]);
    }

    // Count common elements in both array
    for (int i = 0; i < size1; i++) 
	{
        for (int j = 0; j < size2; j++) 
		{
            if (array1[i] == array2[j]) 
			{
                Count++;
                break; 
            }
        }
    }

    // Output the count of common elements
    printf("\nNumber of common elements in both the array are : %d\n", Count);

    return 0;
}


