#include<bits/stdc++.h>
using namespace std;
#define ll long long
-
class Person 
{
    string name;
    ll num;
    public:
    void stringname( string name, ll num)
    {
        this->name=name;
        this->num = num;
    }
    void print()
    {
        cout<<this->name<< " " << this->num;
    }
};
int main()
{
    Person *p = new Person;
    p->stringname("GALIB",12345667);
    p->print();

}