//call by value
/*#include<stdio.h>
int swap(int,int);
int main()
{
    int a=10,b=20;
    printf("before swaping the values in  main a=%d b=%d\n",a,b);
    swap(a,b);
    printf("after swaping the values in main a=%d b=%d\n",a,b);
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swaping the values in function a=%d b=%d\n",a,b);
}*/
//call by reference
#include<stdio.h>
int swap(int*,int*);
int main()
{
    int a=10,b=20;
    printf("before swaping the values in main a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping the values in main a=%d b=%d\n",a,b);
}
int swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swaping the values in function a=%d b=%d\n",*a,*b);
}
