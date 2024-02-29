#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("%c is a lower case",ch);
    }
    if (ch>='A'&& ch<='Z'){
        printf("%c is a upper case",ch);
    }
}




