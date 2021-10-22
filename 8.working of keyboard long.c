#include<stdio.h>
int main()
{
    int a,b;
    a=sizeof(long int);
    b=sizeof(long double);
    
    printf("size of long int=%d bytes\n",a);
    printf("size of long double=%d bytes\n",b);

    return 0;

}