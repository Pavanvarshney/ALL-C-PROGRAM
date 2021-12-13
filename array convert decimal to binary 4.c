#include<stdio.h>
int main()
{
    int i,n,a[4],binary,base=1;
    printf("enter the decimal value: \n");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        a[i]=n%2;
        n=n/2;
        binary=binary+(a[i]*base);
        base=base*10;
    }
    printf("binary %d",binary);

    return 0;
}