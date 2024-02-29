/*TheAnonymousAMGR*/
// Insha Allah I will
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0, i = 0, j = 0;
    while(i<n && j<m)
    {
        int x = a[i], y = b[j];
        if(abs(x-y)<=1)
        {
            ans++;
            i++;
            j++;
        }
        else if(x<y)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << ans << endl;
}
