#include<stdio.h>
void tailingzero(int arr[],int n)
{
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            arr[cnt++]=arr[i];
        }
    }
    while(cnt<n)
    {
        arr[cnt++]=0;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    tailingzero(arr,n);
    printf("Array after pushing all zeros to the end of the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
