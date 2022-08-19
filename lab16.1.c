#include <stdio.h>
void main()
{
    int A[3][5], B[3][5], row, col;

    printf("Enter elements in matrix of size 3x5: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            B[row][col] = A[col][row];
        }
    }
    printf("\nOriginal matrix: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }
    printf("Transpose of matrix A: \n");
    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            printf("%d ", B[row][col]);
        }
        printf("\n");
    }
}
