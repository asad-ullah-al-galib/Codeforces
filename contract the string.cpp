#include<stdio.h>
#include<string.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        while(a--)
        {

            printf("%c",a%c+97);
           // printf("\n");
        }
         printf("\n");
    }
}
