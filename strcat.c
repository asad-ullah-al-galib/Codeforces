#include<stdio.h>
#include <string.h>
int main(){
  char str[20];
  gets(str);
  printf("\nReverse String is: %s",strrev(str));
 return 0;
}
