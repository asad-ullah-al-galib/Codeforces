#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c<'a' || c>'z')
    {
        printf("Invilid\n");
        return 1;
    }
    char *ptr=&c;
    while(*ptr<='z')
    {
        printf("%c ",*ptr);
        (*ptr)++;
    }
}
