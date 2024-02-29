//TheAnonymousAMG
//coded by Asad Ullah Al Galib
//CSTE//NSTU
#include<stdio.h>
#include<string.h>
int main ()
{
    char amg[101];
    scanf("%s",&amg);
    for(int i=0; i<strlen(amg); i++)
    {
        if(amg[i]>='A' && amg[i]<='Z')
        {
            amg[i]='a'+(amg[i]-'A');
        }
    }
    for(int i=0; i<strlen(amg); i++)
    {
        if(amg[i]!='a' && amg[i]!='o'&& amg[i]!='y'&& amg[i]!='e'&& amg[i]!='i'&& amg[i]!='u')
        {
            printf(".%c",amg[i]);

        }
    }
}
