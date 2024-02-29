//coded by Asad Ullah Al Galib
//TheAnonymousAMG
#include<stdio.h>
int main()
{
    int n,countA=0,countD=0;
    scanf("%d",&n);
    char amg[n];
    scanf("%s",&amg);
    for (int i=0;i<n;i++){
        if(amg[i]=='A'){
            countA++;
        }
        else {
            countD++;
        }
    }
    if(countA>countD){
        printf("Anton");
    }
    else if(countD>countA){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }

}
