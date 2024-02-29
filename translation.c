#include<stdio.h>
#include<string.h>
int main()
{
    int g=0,i,j;
    char s[100];
    scanf("%s",&s);
    char t[101];
    scanf("%s",&t);
    int n=strlen(s);
    for(i=0,j=n-1;i<n;i++,j--){
        if(s[i]==t[j]){
            g=1;
        }
        else{
            g=0;
            break;
        }
    }
    if(g==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
