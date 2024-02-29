#include <stdio.h>
#include <math.h>

int main (){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,sq[n],i,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&sq[i]);
            sum+=sq;
        }
        m=sqrt(sum);
        if((m*m)==sum){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
