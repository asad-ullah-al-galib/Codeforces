#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++){
        int p=i;
        int count=0;
        while(n%p==0){
            count++;
            n/=p;
        }
        printf("%d^%d\n",p,count);
    }
    printf("%d^1",n);
}
