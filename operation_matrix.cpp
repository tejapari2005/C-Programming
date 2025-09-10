#include <stdio.h>
#define MAX_SIZE 50

int main() 
{
    int Matrix1[MAX_SIZE][MAX_SIZE], Matrix2[MAX_SIZE][MAX_SIZE], Matrix3[MAX_SIZE][MAX_SIZE];
    int rows1, colmn1, rows2, colmn2;

    // Input size and elements of matrix A
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &colmn1);
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++) 
	{
        for (int j = 0; j < colmn1; j++) 
		{
            scanf("%d", &Matrix1[i][j]);
        }
    }

    // Input size and elements of matrix B
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &colmn2);
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++) 
	{
        for (int j = 0; j < colmn2; j++) 
		{
            scanf("%d", &Matrix2[i][j]);
        }
    }

    // Addition of matrices A and B
    printf("\nAddition of matrices 1 and 2:\n");
    if (rows1 == rows2 && colmn1 == colmn2) 
	{
        for (int i = 0; i < rows1; i++) 
		{
            for (int j = 0; j < colmn1; j++) 
			{
                Matrix3[i][j] = Matrix1[i][j] + Matrix2[i][j];
                printf("%d ", Matrix3[i][j]);
            }
            printf("\n");
        }
    } 
	else 
	{
        printf("Matrices are not of same dimensions.\n");
    }

    // Subtraction of matrices A and B
    printf("\nSubtraction of matrices A and B:\n");
    if (rows1 == rows2 && colmn1 == colmn2) 
	{
        for (int i = 0; i < rows1; i++) 
		{
            for (int j = 0; j < colmn1; j++) 
			{
                Matrix3[i][j] = Matrix1[i][j] - Matrix2[i][j];
                printf("%d ", Matrix3[i][j]);
            }
            printf("\n");
        }
    } 
	else 
	{
        printf("Matrices are not of same dimensions.\n");
    }

    // Multiplication of matrices A and B
    printf("Multiplication of matrices 1 and 2:\n");
    if (colmn1 == rows2) 
	{
        for (int i = 0; i < rows1; i++) 
		{
            for (int j = 0; j < colmn2; j++) 
			{
                Matrix3[i][j] = 0;
                for (int k = 0; k < colmn1; k++) 
				{
                    Matrix3[i][j] += Matrix1[i][k] * Matrix2[k][j];
                }
                printf("%d ", Matrix3[i][j]);
            }
            printf("\n");
        }
    } 
	else 
	{
        printf("Matrices A and B cannot be multiplied. Number of columns of 1 is not equal to number of rows of 2.\n");
    }

    // Transpose of matrix A
    printf("Transpose of matrix 1:\n");
    for (int i = 0; i < colmn1; i++) 
	{
        for (int j = 0; j < rows1; j++) 
		{
            Matrix3[i][j] = Matrix1[j][i];
            printf("%d ", Matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

