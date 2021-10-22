#include<stdio.h>
int main()
{
    float d,y,w;
    printf("Enter the no.of days=");
    scanf("%f",&d);
    y=d/365;
    printf("no.of year=%f\n",y);
    w=d/7;
    printf("no.of weeks=%f\n",w);
    return 0;
}