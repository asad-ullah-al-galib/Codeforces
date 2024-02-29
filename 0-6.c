#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",&ch);
    for(int i=0;i<n;i++){
        if(ch[i]==ch[i+1]){
            count++;
        }
    }
    printf("%d",count);
}
