
 #include<stdio.h>
 #include<string.h>
 void swap(char str[])
 {
     for(int i=0;i<str[i]!='\0';i++)
     {
         if(islower(str[i]))
         {
             str[i]=toupper(str[i]);
         }
         else if(isupper(str[i]))
         {
            str[i]=tolower(str[i]);
         }
     }
     printf("%s",str);
 }
 int main()
 {
     char str[100];
     scanf("%s",str);
     swap(str);
 }
