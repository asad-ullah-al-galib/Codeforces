#include<bits/stdc++.h>
using namespace std;
int tc,n,k;
string me,U;
int main()
{
	cin>>tc;
	while(tc--)
	{
		cin>>n>>k>>me;
		U=me; reverse(me.begin(),me.end());
		if(k==0||me==U) cout<<"1\n";
		else cout<<"2\n";
	}
	return 0;
}

