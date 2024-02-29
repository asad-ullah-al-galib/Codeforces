#include<stdio.h>

void summ(int* n1,int* n2, int* res)
{
    *res=*n1+*n2;
}
int main()
{
    int a,b,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    summ(&a,&b,&sum);

    printf("%d",sum);
}
