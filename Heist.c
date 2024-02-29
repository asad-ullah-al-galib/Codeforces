#include<stdio.h>
int main ()
{
    long long int n,temp;
    scanf("%lld",&n);
    long long arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d",((arr[n-1]-arr[0])+1)-n);
}
