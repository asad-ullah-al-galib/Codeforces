#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    int a=0,e=0,i=0,o=0,u=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a'){
            a++;
        }
        else if (str[i]=='e'){
            e++;
        }
        else if (str[i]=='i'){
            i++;
        }
        else if(str[i]=='o'){
            o++;
        }
        else if (str[i]=='u'){
            u++;
        }
    }
    if (a&&e&&i&&o&&u>0){
        printf("NO");
    }
    else {
        printf("YES");
    }
}
