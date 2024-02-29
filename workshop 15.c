#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char str[N];
    scanf("%s",&str);
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=str[i]-'0';

    }

    if (sum%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
