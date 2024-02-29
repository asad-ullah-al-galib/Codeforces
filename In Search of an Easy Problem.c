//Coded BY <TheAnonymousAMGR>....
#include<stdio.h>
//#include<string.h>
int main ()
{
    int n,flag=0;
    scanf("%d",&n);
    int str[n];
    for (int i=0; i<n;i++)
        {
        scanf("%d",&str[i]);
        if (str[i]==1)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
    printf("HARD");
    }
    else
    {
        printf("EASY");
    }
}
