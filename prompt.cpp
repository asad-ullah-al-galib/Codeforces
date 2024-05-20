#include<iostream>
using namespace std;

class prompt {
    int cnt;
    public: 
    prompt (string c) {cout<<c;cin>>cnt;};
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