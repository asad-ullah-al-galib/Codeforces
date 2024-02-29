//TheAnonymousAMG
//coded by Asad Ullah Al Galib
//CSTE
#include<stdio.h>
#include<string.h>
int main()
{
    char amg[101];
    scanf("%s",&amg);
    int upper=0,lower=0;
    for(int i=0; i<strlen(amg); i++)
    {
        if(amg[i]>='A' && amg[i]<='Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if(upper>lower)
    {
        for(int i=0; i<strlen(amg); i++)
        {
            if(amg[i]>='a' && amg[i]<='z')
            {
                amg[i]='A'+amg[i]-'a';
            }
        }
    }
    else if(lower>upper)
    {
        for(int i=0; i<strlen(amg); i++)
        {
            if(amg[i]>='A' && amg[i]<='Z')
            {
                amg[i]='a'+(amg[i]-'A');
            }
        }
    }
    else
    {
        for(int i=0; i<strlen(amg); i++)
        {
            if(amg[i]>='A' && amg[i]<='Z')
            {
                amg[i]='a'+(amg[i]-'A');
            }
        }
    }
    printf("%s",amg);

}
