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
    
    volume =l*w*h;
}

void box::vol()
{
    cout<<"Volume is: "<<volume<<endl;
}
int main()
{
    double a,b,c; cin>>a>>b>>c;
    box ob(a,b,c);
    ob.vol();
    return 0;
}