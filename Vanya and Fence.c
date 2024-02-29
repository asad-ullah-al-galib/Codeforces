#include<stdio.h>
#include<math.h>
int main ()
{
    int n,h,sum,count1=0,count2=0;
    scanf("%d %d",&n,&h);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]<=h){
            count1++;
        }
        else {
           count2++;
        }
    }
    sum=count1+count2;

    printf("%d",sum);
}
