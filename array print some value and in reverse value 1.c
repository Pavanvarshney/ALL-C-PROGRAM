#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter all elements in array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("array element at index %d is: %d\n",i,a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("array elements in reverse at index %d is: %d\n",i,a[i]);
    }
    return 0;

}
