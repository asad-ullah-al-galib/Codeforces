//< Coded by TheAnonymousAMGR>
#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    scanf("%d",&n);
    float ans,sum;
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    ans=sum/n;
    printf("%f",ans);
}
