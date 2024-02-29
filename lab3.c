#include<stdio.h>
int main()
{
    int nn;
    printf("N=",nn);
    scanf("%d",&nn);
    char ss[nn+1];
    scanf("%s",&ss);

    char *hh;

    hh=&ss;
    for(int i=0;i<nn;i++)
    {
        printf("%c ",*hh);
        hh++;
    }
}
