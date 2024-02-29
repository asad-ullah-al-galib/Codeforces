//TheAnonymousAMG
//Coded by Asad Ullah Al Galib
//CSTE
//NSTU
#include<stdio.h>
#include<string.h>
int main()
{
    char amg[101];
    scanf("%s",&amg);
    char temp;
    for(int i=0;i<strlen(amg);i++){
           for(int j=i+1;j<strlen(amg);j++){
            if(amg[i]!='+' && amg[j]!='+'){
            if(amg[i]>amg[j]){
                temp=amg[i];
                amg[i]=amg[j];
                amg[j]=temp;
            }
           }
        }
    }
        printf("%s",amg);
}
