#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    int order[N];
    for(int i=0; i<N; i++)
    {
        order[i]=-1;
    }
    for(int i=0; i<N; i++)
    {
        int index=a[i]-1;
        order[index]=i+1;
    }
    for(int i=0; i<N; i++)
    {
        printf("%d ",order[i]);
    }
}
