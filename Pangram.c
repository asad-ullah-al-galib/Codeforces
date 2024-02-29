#include<stdio.h>
#include<string.h>
int main ()
{
    int n,k,flag=0;
    scanf("%d",&n);
    char str[1000],i,j;
    //scanf("%s",&str);
    gets(str);
    for (i='a',j='A';i<='z',j<='Z';i++,j++)
    {
        flag=0;
        for (k=0;str[k]!='\0';k++)
        {
            if (str[k]==i||str[k]==j)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
