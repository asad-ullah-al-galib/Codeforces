#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    int res= strcmp(str,strrev(str));
    if(res==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
