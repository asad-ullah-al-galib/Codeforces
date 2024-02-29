//TheAnonymousAMG
//Asad Ullah Al Galib
#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",&str);
    char temp;
    for(int i=0;i<strlen(str)-1;i++){
        for(int j=i+1;j<strlen(str);j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=str[i+1]){
            count++;
        }
    }
    if(count%2==0){
    printf("CHAT WITH HER!",count);
    }
   if(count%2==1){
    printf("IGNORE HIM!",count);
     }

}
