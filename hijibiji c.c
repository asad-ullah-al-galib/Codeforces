#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int max_height=0;
        for(int i=1;i<=n;i++){
            n-=i;
            max_height++;
            if(n<i){
                break;
            }
        }
        printf("%d\n",max_height);
    }
}
