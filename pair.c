#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ara[i]+ara[j]==17){
                count++;
            }
        }
    }
    printf("%d",count);
}
