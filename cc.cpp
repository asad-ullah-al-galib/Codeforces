#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int count=0;
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    for (int i=1;i<str.size()-1;i++)
    {
        if(str[i]=='{}' || str[i]==',' || str[i]==' '){
            continue;
        }
        else
        {
            if (str[i]!=str[i+1])
            {
                count++;
            }
        }
    }
    cout<<count-1;
}

