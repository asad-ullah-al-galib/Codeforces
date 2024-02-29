//Coded by <TheAnonymousAMGR>
//NSTU//CSTE
#include<stdio.h>
#include<math.h>
int main ()
{
    int n,sum,temp;
    scanf("%d",&n);
    int arr[101];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
     for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                arr[j]=temp;
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     }
      int j=0;
     int coin=0;
     for (int i=n-1;i>=0;i--){
        j+=arr[i];
        coin++;
        if (j>sum/2){
            break;
        }
     }
     printf("%d",coin);
}
