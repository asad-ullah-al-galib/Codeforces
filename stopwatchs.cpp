//stopwatch
#include<bits/stdc++.h>
using namespace std;

class stopwatch
{
    clock_t begin,end;

    public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
};
stopwatch :: stopwatch()
{
    begin =end= 0.0;
}
stopwatch :: ~ stopwatch()
{
    show();
}

void stopwatch::start()
{
    begin =  clock();
}

void stopwatch :: stop()
{
    end =  clock();
}

void stopwatch:: show()
{
    cout<<"Elapsed time: "<<((double)(end-begin)/CLOCKS_PER_SEC);
    cout<<endl;
}

int main()
{
    stopwatch watch;
    char c;
    cin>>c;
    watch.start();
    cin>>c;
    watch.stop();
}