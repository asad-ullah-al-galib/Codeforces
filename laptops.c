#include<stdio.h>
int main()
{
    int tc,u=0;
    scanf("%d",&tc);
    while(tc--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            u++;
        }
    }
    if(u>0)
    {
        printf("Happy Alex");
    }
    else
    {
        printf("Poor Alex");
    }
}
