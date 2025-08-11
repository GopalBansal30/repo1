#include<stdio.h>
int main()
{   int n;
    printf("Enter no. of elements in the array:\t");
    scanf("%d",&n);
    int arr[n],sum=0;
    printf("\nEnter all the %d elements of the array:\n\n",n);
    for(int i=0;i<n;i++)
    {   printf("arr[%d]:\t",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];}
    float avg=(float)sum/n;
    printf("\nAverage:\t%f\n",avg);
    return 0;}
