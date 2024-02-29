// Coded by TheAnonymousAMGR
#include<stdio.h>
int main ()
{
    char str[1001];
    scanf("%s",&str);
    if(str[0]>='a'&& str[0]<='z'){
        str[0]='A'+(str[0]-'a');
    }
    printf("%s",str);
}
