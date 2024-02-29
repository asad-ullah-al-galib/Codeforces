#include<stdio.h>
int main()
{
    int n,a,b,c,count;
    scanf("%d",&n);
    count=0;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c >=2){
            count++;
        }

    }
    printf("%d\n",count);
}
