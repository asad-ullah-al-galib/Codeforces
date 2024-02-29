#include<stdio.h>
//int compare(const void* a, const void* b)
//{
 //   return (*(int*) a - *(int*) b);
//}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //qsort(arr,n,sizeof(int),compare);

    //printf("Max=%d\n",arr[n-1]);
    //printf("Min=%d\n",arr[0]);
    int max=arr[0],min=arr[0];
    for(int i=1;i<n;i++)
    {

        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Max=%d\n",max);
    printf("Min=%d\n",min);
}
