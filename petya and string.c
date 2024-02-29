//#include<stdio.h>
//#include<string.h>
//int main()
//{
    //char str1[101],str2[101];
    //scanf("%s %S",&str1,&str2);
   // for (int i=0; i<strlen(str1); i++)
   // {
     //   if (str1[i]>='a'&& str1[i]<='z')
    //    {
    //        str1[i]='A'+(str1[i]-'a');
    //    }
    //}
   // for (int i=0; i<strlen(str2); i++)
    //{
       // if(str2[i]>='a' && str2[i]<='z')
      //  {
       //     str2[i]='A'+(str2[i]-'a');
      //  }
   // }
   // printf("%d",strcmp(str1,str2));
//}
#include<stdio.h>
#include<string.h>
int main()
{

    char str[101],rima[101];
    scanf("%s %s",&str,&rima);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]='A'+(str[i]-'a');
        }
    }
    for(int i=0;i<strlen(rima);i++){
        if(rima[i]>='a'&& rima[i]<='z'){
            rima[i]='A'+(rima[i]-'a');
        }
    }
    printf("%d",strcmp(str,rima));
}
