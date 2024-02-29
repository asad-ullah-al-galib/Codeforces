#include <stdio.h>
#include<math.h>
void prime (int a)
{
    if (a<2)
    {
        printf("NO");
        return;
    }
    for (int i=2;i*i<=a;i++){
        if(a%i==0){
            printf("NO");
            return;
        }
    }
    printf("yes");
}
int main ()
{
    int n;
    scanf("%d",&n);
    prime(n);
}
