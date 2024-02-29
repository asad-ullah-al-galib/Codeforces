#include<stdio.h>
#include<string.h>
int main()
{
    char amg[101];
    scanf("%s",amg);
    int count1=0,count2=0;
    for(int i=0;i<strlen(amg);i++){
        if(amg[i]=='1'){
            count1++;
        }
        else{
            count1=0;
        }
    }
}
