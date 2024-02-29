#include <stdio.h>

int main (){

    int s ;
    float CG=0,CGS=0,cgs,cr,cg;

        printf("Subject number of the Semister : ");
        scanf("%d",&s);
        for(int j=1;j<=s;j++){
                float m,cg,c;
            printf("Subject-%d :\n",j);
            if(j==s){
                printf("For fourth subject :\n");
            }
            printf("\t  Mark : ");
            scanf("%f",&m);
            if(m>=80 && m<=100){
                cg = 4 ;
            }
            else if(m<80 && m>=75){
                cg = 3.75 ;
            }
            else if(m<75 && m>=70){
                cg = 3.5 ;
            }
            else if(m<70 && m>=65){
                cg = 3.25 ;
            }
            else if(m<65 && m>=60){
                cg = 3 ;
            }
            else if(m<60 && m>=55){
                cg = 2.75 ;
            }
            else if(m<55 && m>=50){
                cg = 2.5 ;
            }
            else if(m<50 && m>=45){
                cg = 2.25 ;
            }
            else if(m<45 && m>=40){
                cg = 2 ;
            }
            else{
                cg = 0 ;
            }
            if(j==s){
                cg-=2;

                }
            }
            printf("    subject CG : %.2f\n",cg);
            printf("\tCredit : ");
            scanf("%f",&c);
            cgs += (cg*c) ;
            if(j==s){
                c=0;
            }
            cr+=c ;
            }
        CG = cgs/cr ;

        printf("\nYour CG is %.2f\n",CG);

        return 0 ;
    }
