//Coded by <TheAnonymousAMGR>
//NSTU....<CSTE>
#include <stdio.h>
int main ()
{
    int j=0,f=0;
    char s[101],a[5]="hello";
    scanf("%s",&s);
    for (int i=0;i<5;i++){
        while(s[j]!='\0')
        {
            if (a[i]==s[j])
            {
                f++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
    }
    if (f==5)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
