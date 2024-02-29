#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
    return (*(int*) a - *(int*) b);
}
int find(int arr[],int n)
{
    qsort(arr,n,sizeof(int),compare);

    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
            return i+1;
    }
    return i+1;
}
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findSmallestMissingNumber(arr, n);
    printf("The smallest missing number is: %d\n", missingNumber);

}
