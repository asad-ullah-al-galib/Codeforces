#include<stdio.h>
void addone(char* str)
{
    int len=strlen(str),carry=1,i;
    for(i=len-1;i>=0;i--)
    {
        int dig=str[i]-'0';
        dig+=carry;
        carry =dig/10;
        dig%=10;
        str[i]=dig+'0';
    }
    if(carry)
    {
        printf("1%s\n",str);
    }
    else
    {
        printf("%s\n",str);
    }
}
int main()
{
    char str[1000];
    scanf("%s",str);
    addone(str);
}
