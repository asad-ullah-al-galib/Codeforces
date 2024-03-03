
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    char s[100];
    vector<string>v;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    cout<<v[n]<<endl;
}
