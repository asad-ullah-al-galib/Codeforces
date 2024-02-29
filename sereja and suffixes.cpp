#include<bits/stdc++.h>
#include<set>
typedef long long int ll;
using namespace std;
int main()
{
    ll  a, b, c;
    cin >> a >> b;
    set<ll>me;
    vector<ll>U(a);
    vector<ll>V(a);
    for (auto &it : U)
    {
        cin >> it;
    }
    for (int i = a-1; i >=0; i--)
    {
        me.insert(U[i]);
        V[i] = me.size();
    }
    while (b--)
    {
        cin >> c;
        cout << V[c-1] << endl;
    }
}
