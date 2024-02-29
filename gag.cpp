#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         long long n;
         cin>>n;
         int w=n%3;
         int y=n/3;

         int x=n/3;

         if(w==1)
         {
             y++;
             //cout<<x+1<<" "<<x<<endl;
         }
         else if(w==2)
         {
             x++;
            // cout<<x<<" "<<x<<endl;
         }
         cout<<y<<" "<<x<<endl;
     }
}
