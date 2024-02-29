#include<stdio.h>
#include<time.h>
int main ()
{
    int seconds;
    printf(" Enter a number: ");
    scanf("%d",&seconds);
    while(seconds>0)
    {
        int h=seconds/3600;
        int m=(seconds%3600)/60;
        int s=seconds%60;
        printf("\r%02d:%02d:%02d",h,m,s);
        fflush(stdout);
        clock_t stop= clock()+CLOCKS_PER_SEC;
        while(clock()<stop){ }
        seconds--;
    }
    printf("\rI LOVE YOU BABE!!");
}
