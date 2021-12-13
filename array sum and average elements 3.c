#include<stdio.h>
int main()
{
    int x,sum=0,i,average;
    printf("Enter the size in x\n");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
    {
        printf("Enter the value in array a[i]:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
        average=sum/x;
    }
    printf("Total sum: %d\n total average: %d\n",sum,average);
    return 0;
}