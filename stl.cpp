#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     // int n;
//     // cin>>n;
//     // vector<string>res;
//     // for(int i=1;i<=n;i++)
//     // {
//     //     if((i%15)==0) res.push_back("fizzBuzz");
//     //     else if(i%5==0) res.push_back("Buzz");
//     //     else if(i%3==0) res.push_back("Fizz");
//     //     else res.push_back(to_string(i));
//     // }

//     // //for(int i=0;i<n;i++)
//     // for(string x : res)
//     // {
//     //     cout<<x<<" ";
//     // }
//     // cout<<endl;

//     /* ___________________________________________________________________________________________________________________________ */

//     //vector<int> v;
//     int sum;
//     for(int c : v) cin>>c;
//     cin>>sum;


//     sort(v.begin(),v.end());

//     int n=v.size();
//     vector<int>res;
//     for(int i=0;i<n-3;i++)
//     {
//         int j = i+1;
//         int k=n-1;

//         while(j<k)
//         {
//             int cur_sum=v[i];
//             cur_sum+=v[j];
//             cur_sum+=v[k];

//             if(cur_sum==sum)
//             {
//                 res.push_back(v[i]);
//                 res.push_back(v[j]);
//                 res.push_back(v[k]);
//                 j++;
//                 k--;
//             }
//             else if(cur_sum>sum) k--;
//             else j++;
//         }
//     }
//     for(int e : res) 
//     {
//         cout<<e<<" ";
//     }
//     cout<<endl;
// }

vector<vector<int>>triplets(vector<int>v,int sum)
{
    sort(v.begin(),v.end());

    int n=v.size();
    vector<vector<int>> res;
    for(int i=0;i<n-3;i++)
    {
        int j = i+1;
        int k=n-1;

        while(j<k)
        {
            int cur_sum=v[i];
            cur_sum+=v[j];
            cur_sum+=v[k];

            if(cur_sum==sum)
            {
                res.push_back({v[i],v[j],v[k]});
               // res.push_back(v[j]);
                //res.push_back(v[k]);
                j++;
                k--;
            }
            else if(cur_sum>sum) k--;
            else j++;
        }
    }
    for(int i=0;i<res.size();i++)
    {

    
        for(int e : res) 
        {
            cout<<e<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    vector<int>vec;
    for(int w: vec) cin>>w;
    int sum; cin>>sum;
    triplets(vec,sum);
}