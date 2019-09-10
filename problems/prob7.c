#include<stdio.h>



void printDiagonalSums(int size, int mat[size][size])
{
    int principal = 0, secondary = 0,n=size;
    for (int i = 0; i < n; i++) {
        principal += mat[i][i];
        secondary += mat[i][n - i - 1];
    }

    printf("\nPrincipal Diagonal: %d" ,principal);
    printf("\nSecondary Diagonal: %d",secondary);
}


int main()
{
    int size,i,j;
    scanf("%d",&size);
    int a[size][size];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printDiagonalSums(size,a);
    return 0;
}
