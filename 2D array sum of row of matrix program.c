#include<stdio.h>
int main()
{
    int x[3][3],row,col,sum=0;
    for(row=0;row<3;row++)
        {
            for(col=0;col<3;col++)
            {
                scanf("%d",&x[row][col]);
            }
        }
    printf("matrix\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%d",x[row][col]);
        }
        {
            printf("\n");
        }
    }
    printf("sum of rows\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            sum=sum+x[row][col];
        }
        {
            printf("%d\n",sum);
        }
        sum=0;

    }    
    return 0; 
    
}
