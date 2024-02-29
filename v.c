#include<stdio.h>
int main()
{
    char str[100000],v;
    int i,cons;
    gets(str);
    i=cons=0;
    while (v=str[i]!='\0')
    {        if ( str[i]!='a' || v !='e' || v !='i' || v !='o' || v !='u')
{


            cons++;
}

        i++;
    }
    printf("%d",cons);
}
