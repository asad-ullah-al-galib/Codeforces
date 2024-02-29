
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b ;
    cin>>n>>m>>a>>b;
    int cost = 0;
  if (a * m <= b) {
    cost = n * a;
  } else {
    cost = (n / m) * b;
    if (n % m != 0) {

      if ((n % m) * a <= b) {

        cost += (n % m) * a;
      } else {

        cost += b;
      }
    }
  }
  cout<<cost<<endl;
}
