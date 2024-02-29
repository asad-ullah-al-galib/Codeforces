#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the integer to divide by: ");
    scanf("%d",&k);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%k==0)cnt++;
    }
    printf("%d\n",cnt);
}
