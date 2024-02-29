//Coded by TheAnonymousAMG
//CSTE
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int A[5][5];
    int swap;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           if(A[i][j]==1){
            swap=abs((i+1)-3)+abs((j+1)-3);
           }
        }
    }
    printf("%d",swap);
}
