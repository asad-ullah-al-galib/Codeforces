//Coded by <TheAnonymousAMGR>
#include<stdio.h>
#include<string.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    char str[n];
    scanf("%s",&str);
    for (int i=0;i<t;i++){
        for(int j=0;str[j]!='\0';j++){
            if(str[j]=='B' && str[j+1]=='G'){
                str[j]='G';
                str[j+1]='B';
                j++;
            }
        }
    }
    printf("%s",str);

}
