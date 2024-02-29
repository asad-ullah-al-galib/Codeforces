
#include<stdio.h>
#include<string.h>

void pal(char str[])
{

    int f=0;
    int l=strlen(str)-1;
    while(l>1)
    {
        if(str[f++] != str[l--])
        {
            printf("NOT PAl\n");
            return;
        }
    }
    printf("PAL\n");
}
int main()
{
    char str[100];
    scanf("%s",&str);
    //fgets(str,sizeof(str)-1,stdin);
    pal(str);
}
