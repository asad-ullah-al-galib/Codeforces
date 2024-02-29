#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    int k;
    scanf("%d",&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(ara[i]==k){
            printf("Yes %d",i);
            break;
        }
        else{
            printf("No");
            break;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(ara[i]==k){
            count++;
        }
    }
    printf("%d",count);
}
