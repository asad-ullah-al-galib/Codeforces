#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int count[100000]={0};
    for(int i=0;i<n;i++){
        int x=ara[i];
        count[x]=count[x]+1;
    }
    for(int i=0;i<n;i++){
        printf("%d %d",ara[i],count[ara[i]]);
        printf("\n");
    }
}
