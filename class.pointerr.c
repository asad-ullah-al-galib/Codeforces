#include<stdio.h>
int main()
{
   int var;
   int *ptr;
   int **pptr;

   var=3000;
   ptr=&var;

   pptr=&ptr;

   printf("%d\n",var);
   printf("%d\n",*ptr);
   printf("%d\n",**pptr);

   return 0;
}
