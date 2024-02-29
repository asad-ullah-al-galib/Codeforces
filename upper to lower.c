#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]='A'+(str[i]-'a');
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]='a'+(str[i]-'A');
        }
    }
    printf("%s",str);
}
