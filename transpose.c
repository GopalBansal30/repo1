#include<stdio.h>
int main()
{   int rows,cols;
    printf("Enter number of rows:\t");
    scanf("%d",&rows);
    printf("Enter number of columns:\t");
    scanf("%d",&cols);
    int matrix[rows][cols];
    int transpose[cols][rows];
    printf("\nEnter all %d elements of the matrix:\n\n",rows*cols);
    for(int i=0;i<rows;i++)
    {   for(int j=0;j<cols;j++){scanf("%d",&matrix[i][j]);}}
    for(int i=0;i<rows;i++)
    {   for(int j=0;j<cols;j++){transpose[j][i]=matrix[i][j];}}
    printf("\nTranspose of the matrix:\n\n");
    for(int i=0;i<cols;i++)
    {   for(int j=0;j<rows;j++){printf("%d ",transpose[i][j]);}
        printf("\n");}
    return 0;}
