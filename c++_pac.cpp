// //             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+
// /**
// * author:TheAnonymousAMGR
// **/
// //CSTE
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define MOD 1000000007
// #define pb push_back
// #define vi vector<int>
// #define vl vector<ll>
// #define F first
// #define S second
// #define bit(a)   __builtin_popcount(a)
// #define w(x) while(x--)
// #define ni int n;cin>>n;
// #define nl ll n; cin>>n;
// #define loop for(int i=0;i<n;i++)
// #define loop1 for(int i=1;i<n;i++)
// #define str string s;cin>>s;
// #define tc int tc;cin>>tc;while(tc--)
// #define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
// #define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
// #define srt(v) sort(v.begin(),v.end());
// #define rsrt(v) sort(v.rbegin(),v.rend());
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) (a*b)/gcd(a,b)
// #define PI 2*acos(0.0)
// #define pr pair<int,int>
// #define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
// string answer()
// {
//     // double r,area;
//     // cin>>r;
//     // area=pow(r,2)*PI;
//     // cout<<area<<endl;
//     //  str;
//     //  string atrr;
//     //  cin>>atrr;
     
//     // string st=atrr.append(s);
//     // cout<<st;
//     // int a[3];
//     // for(int i=0;i<3;i++)
//     // {
//     //     cin>>a[i];
//     // }
//     // sort(a,a+3);
//     // cout<<max(0,a[2]-a[1]-a[0]+1)<<endl;

//     // int n,k,res=0;
//     // cin>>n>>k;

//     // while(n--)
//     // {
//     //     int j;
//     //     cin>>j;
//     //     if(j%k==0)
//     //     {
//     //         res++;
//     //     }
//     // }
//     // cout<<res<<endl;
//     // ll n,k,x;
//     // cin>>n>>k>>x;
//     // if((n-(k-1)*k/2 >=x) && (k+1)* k/2 <= x)
//     // {
//     //     cout<<"YES"<<endl;
//     // }
//     // else 
//     // {
//     //     cout<<"NO"<<endl;
//     // }
//       str;
//       string ss = strrev(s);
//       if(s==ss)
//       {
//         cout<<"YES"<<endl;
//       }
//       else 
//       {
//         cout<<"NO"<<endl;
//       }
// }
// int main()
// {
//     AMGR();
//     //tc
//     answer();
// }
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     string ss=strrev(s);
//     if(s==ss)
//     {
//         cout<<"YES"<<endl;
//     }
//     else 
//     {
//         cout<<"NO"<<endl;
//     }
// }



// stopwatch
// #include<bits/stdc++.h>
// #include<ctime>
// using namespace std;

// class stopwatch
// {
//     double begin,end;

//     public:
//     stopwatch();
//     ~stopwatch();
//     void start();
//     void stop();
//     void show();


// };
// stopwatch :: stopwatch()
// {
//     begin =end = 0.0;
// }
// stopwatch :: ~ stopwatch()
// {
//     cout<<"stopwatch object being destroyed...";
//     show();
// }

// void stopwatch::start()
// {
//     begin = (double) clock() / CLOCKS_PER_SEC;
// }

// void stopwatch :: stop()
// {
//     end = (double) clock()/ CLOCKS_PER_SEC;
// }

// void stopwatch:: show()
// {
//     cout<<"Elapsed time: "<<end-begin;
//     cout<<endl;
// }

// int main()
// {
//     stopwatch watch;
//     long i;
//     watch.start();
//     for(i=0;i,320000;i++)
//     {
//         watch.stop();
//     }
//     watch.show();
// }


#include<bits/stdc++.h>
using namespace std;

class t_and_d
{
    time_t systime;
    public:
    t_and_d(time_t tm);
    void show();

};
t_and_d :: t_and_d(time_t tm)
{
    systime=tm;
}
void t_and_d::show()
{
    cout<<ctime(&systime)<<endl;
}
int main()
{
    time_t tm;

    tm=time(NULL);
    t_and_d obj(tm);
    obj.show();
}




// //number 3.
#include<iostream>
using namespace std;

class box {
    double l,w,h;
    double volume;
    public:
    box(double a,double b, double c);
    void vol();
};
box::box(double a,double b, double c)
{
    l=a;
    w=b;
    h=c;
    
    volume =i*w*h;
}

void box::vol()
{
    cout<<"Volume is: "<<volume<<endl;
}
int main()
{
    box x(2.2, 3.97,8.09), y(1.0,2.0,3.0);
    x.vol();
    y.vol();
    return 0;
}

// // number 4

#include<iostream>
using namespace std;

class prompt {
    int cnt;
    public: 
    prompt (char *c) {cout<<s;cin>>cnt;};
    ~prompt();
};

prompt :: ~prompt() {
    int i,j;
    for(i=0;i<cnt;i++)
    {
        cout<<'\a';
        for(j=0;j<32000;j++);
    }
}
int main()
{
    prompt ob("Enter a number ");
    return 0;
}

// //number 5

#include<iostream>
#include<cstdlib>
using namespace;

class dice {
    int val;
    public:
    void roll();
};

void dice :: roll()
{
    val = (rand()%6)+1;//generate 1 through 6
    cout<<val<<'\n';
}

int main()
{
    dice one, two;

    one.roll();
    two.roll();
    one.roll();
    two.roll();
    one.roll();
    two.roll();

    return 0;
    
}
//stopwatch new

#include<unistd.h>
using namespace std;

int main()
{
    short minn,sec; int time;


    do
    {
        cout<<"Enter seconds:: ";
        cin>>sec;
    } while (sec>59);
    do
    {
        cout<<"Enter minutes:: ";
        cin>>minn;
    } while (minn>59);

    time=(minn!=0)?minn*60 : 0;

    time +=sec;

    for(int i=time;i>0;i--)
    {
        system("clear");
        system("cls");
        cout<<"The time remaining is 0: " <<minn<<":"<<sec<<endl;

        minn =(i%60==0)? --minn : minn;

        sec = (sec ==0)? 59 : --sec;

        //system("sleep 1");
        sleep(1);
    }
    system("clear");

    cout<<"*******************\nTimer ended! \a\nLasted for " << time <<"seconds"<<"\n***********\n\n\n\n\n"<<endl;
    
}