#include<stdio.h>
int main()
{
    float cm,km,m;
    
    printf("Enter the value in centimeter(cm)=");
    scanf("%f",&cm);
    m=cm/100;
    km=cm/100000;
    printf("value in meter= %f\n",m);
    printf("value in kilometer=%f\n",km);
     return 0;
}
