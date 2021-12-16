#include<stdio.h>
int main()
{
    int size,i,j,temp;
    scanf("%d",&size);
    int x[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}