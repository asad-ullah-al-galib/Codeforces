#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main ()
{
    int seconds;
    cout<< "Enter a number:" ;
    cin>>seconds;
    while(seconds>0)
    {
        int h=seconds/3600;
        int m=(seconds%3600)/60;
        int s=seconds%60;
        cout<<\r h<<\r m<<\r s;
        fflush(stdout);
        clock_t stop= clock()+CLOCKS_PER_SEC;
        while(clock()<stop){ }
        seconds--;
    }
    cout<<"\rI LOVE YOU BABE!!";
}

