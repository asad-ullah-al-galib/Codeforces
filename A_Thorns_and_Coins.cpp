#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		string str;
		int ans=0;
		cin>>str;
		for(int i=1;i<=n;i++){
			if(str[i]=='@') ans++;
			if(str[i]=='*'&&str[i-1]=='*') break;
		}
		printf("%d\n",ans);
	}
	return 0;
}