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
