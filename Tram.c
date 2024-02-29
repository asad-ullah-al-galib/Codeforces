//Coded by Asad Ullah Al Galib
//TheAnonymousAMG
#include<stdio.h>
int main()
{
    int n,sum=0,max=0;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d %d",&a,&b);
        sum+=(-a+b);
        if(sum>max){
            max=sum;
        }
    }
    printf("%d",max);
}
