//Coded by <TheAnonymousAMGR>
//NSTU..<CSTE>..
#include<stdio.h>
#include<string.h>
int main ()
{
    char a[101];
    char b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    for (int i=0;i<strlen(a);i++){
        if (a[i]==b[i]){
            a[i]='0';
        }
        else{
            a[i]='1';
        }
    }
    printf("%s",a);
}
