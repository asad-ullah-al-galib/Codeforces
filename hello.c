//Coded by TheAnonymousAMGR
#include<stdio.h>
#include<string.h>
int main ()
{
    char amgr[101];
    scanf("%s",&amgr);
    for(int i=0; i<strlen(amgr); i++)
    {
        if(amgr[i]>='A' && amgr[i]<='Z')
        {
            amgr[i]='a'+(amgr[i]-'A');
        }
    }
    for(int i=0; i<strlen(amgr); i++)
    {
        if(amgr[i]!='a' && amgr[i]!='o' && amgr[i]!='u' && amgr[i]!='y' && amgr[i]!='e' && amgr[i]!='i')
        {
            printf(".%c",amgr[i]);
        }
    }
}
