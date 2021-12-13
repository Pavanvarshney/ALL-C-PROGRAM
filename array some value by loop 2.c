#include<stdio.h>
int main()
{
    int a[100],i;
    
    for(i=0;i<100;i++)
    {     
         scanf("%d",&i);
        if(i<30)
        {
            printf("1",a[i]);
        }
        else
        {
            printf("0",a[i]);
        }
    }
    return 0;
}