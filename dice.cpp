#include<iostream>
#include<cstdlib>
using namespace std;

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
    dice one;
    for(int i=1;i<=6;i++)
    {
        one.roll();
    }

    return 0;
    
}