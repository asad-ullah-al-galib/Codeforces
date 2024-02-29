//<Coded by TheAnonymousAMGR>
#include<stdio.h>
#include<string.h>
int main ()
{
    int f=0;
    char str[101];
    scanf("%s",&str);
    for (int i=0; str[i]!='\0'; i++)
    {
        for (int j=i+1; j<i+7; j++)
        {
            if (str[i]==str[j])
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }
        if (f==1)
        {
            break;
        }
    }
    if (f==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
