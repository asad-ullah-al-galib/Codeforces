//TheAnonymousAMG
//coded by Asad Ullah Al Galib
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[11],r[11]="codeforces";
    for(int i=0;i<n;i++){
        scanf("%s",&str);
        int galib=0;
        for(int j=0;j<strlen(str);j++){
            if(r[j]!=str[j]){
                galib++;
            }
        }
        printf("%d\n",galib);
    }
}
