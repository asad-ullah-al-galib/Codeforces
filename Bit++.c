//Coded by TheAnonymousAMGR
#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,n;
    scanf("%d",&n);
    char str[100];
    for(int i=0; i<n; i++)
    {
        scanf("%s",&str);
        if(str[1]=='+')
        {
            x++;
        }
         else
        {
            x--;
        }
    }
    printf("%d",x);
}
