#include<stdio.h>
int main()
{
    int x,y,add,sub,multi,divide;
    printf("\nEnter the value of x and y");
    scanf("%d%d",&x,&y);
    add=x+y;
    printf("\nadd=%d",add);
    sub=x-y;
    printf("\nsub=%d",sub);
    multi=x*y;
    printf("\nmulti=%d",multi);
    divide=x/y;
    printf("\ndivide=%d",divide);
    return 0;
}