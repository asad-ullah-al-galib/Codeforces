#include<stdio.h>
int main()
{
    int n,i,*arr,res;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    arr=(int*) malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory not allocated!\n");
        exit(0);
    }
    printf("Enter the element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    res=*arr;

    for(i=1;i<n;i++)
    {
        if(*(arr+i)>res)
        {
            res=*(arr+i);
        }
    }
    printf("%d\n",res);

}
