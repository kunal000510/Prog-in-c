#include <stdio.h>
int main()
{
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int subMatrix[rows][cols];
    printf("\nEnter elements of the 1st matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of the 2nd matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            subMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("\n Sum of  Matrix (Sum):\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", subMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}