#include<stdio.h>
#include<string.h>
int main()
{
     char str[1001];

     //scanf("%c",&str);
     gets(str);
     int word=0,alpha=0,digit=0,cha=0;

     for(int i=0;i<strlen(str);i++)
     {
         if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
         {
             alpha++;
         }
         else if(str[i]==' ')
         {
             word++;
         }
        else if(str[i]>='0' && str[i]<='9')
         {
             digit++;
         }
         else
         {
             cha++;
         }
     }
     printf("Number of words=%d\n",word+1);
     printf("Number of alphabets=%d\n",alpha);
     printf("Number of digits=%d\n",digit);
     printf("Number of special characters=%d\n",cha);
}
