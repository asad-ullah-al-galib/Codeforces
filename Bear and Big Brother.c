//TheAnonymousAMG
//coded by Asad Ullah Al Galib
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i=1;
    while(1){
        a*=3;
        b*=2;
        if(a>b){
            break;
        }
        i++;
    }
    printf("%d",i);
}
