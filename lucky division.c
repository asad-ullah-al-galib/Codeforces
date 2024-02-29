#include<stdio.h>
int main()
{
    int n,temp,a,f=0;
    scanf("%d",&n);
    temp=n;
    while(temp){
        a=temp%10;
        if (a==4||a==7){
            f=1;
        }
        else{
            f=0;
            break;
        }
        temp=temp/10;
    }
    if (f==1){
        printf("YES");
    }
     else
        {
            if(n%4==0||n%7==0||n%44==0||n%47==0||n%74==0||n%77==0||n%444==0||n%447==0||n%474==0||n%477==0||n%777==0||n%744==0||n%747==0||n%774==0){
                printf("YES");
            }
            else{
        printf("NO");
            }
    }
}
