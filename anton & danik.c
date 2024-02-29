//<Coded by TheAnonymousAMGR>
#include<stdio.h>
#include<string.h>
int main ()
{
    int n,count1=0,count2=0;
    scanf("%d",&n);
    char rima[100001];
    scanf("%s",&rima);
    for (int i=0;i<strlen(rima);i++){
        if(rima[i]=='A'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1>count2){
        printf("Anton");
    }
    else if (count1==count2){
        printf("Friendship");
    }
    else{
        printf("Danik");
    }
}
