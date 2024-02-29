//TheAnonymousAMG
//Asad Ullah Al Galib
//nstu
#include<stdio.h>
int main()
{
    long long int n,m,a,mahin;
    double asad,galib;
    scanf("%lld %lld %lld", &n, &m, &a);

    asad = ceil((double)n/(double)a);
    galib= ceil ((double)m/(double)a);

    mahin = asad*galib;
    printf("%lld",mahin);

}
