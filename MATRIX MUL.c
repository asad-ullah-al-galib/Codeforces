
#include<stdio.h>
#include<string.h>
float cal_grade(float a)
{
    if(a>=80)
    {
        return 4;
    }
    else if (a>=75)
    {
        return 3.75;
    }
    else if (a>=70)
    {
        return 3.50;
    }
    else if (a>=65)
    {
        return 3.25;
    }
    else if (a>=60)
    {
        return 3.00;
    }
    else if (a>=50)
    {
        return 2.5;
    }
    else if (a>=40)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
    int main ()
    {
        char subjects[12][20]={"SPL","SPLL","DSA","DSAL","NA","NAL","DM","EDC","EDCL","OPDE","Viva_voce","fourth_sub"};
        float credits[12]={0};
        int mark[12]={0};
        float grade[12]={0};
        for (int i=0;i<12;i++)
        {
            printf("Enter the marks for %s :", subjects[i]);
            scanf("%d",&mark[i]);
        }
        for(int a=0;a<12;a++)
        {
            printf("Enter the credit for %s :",subjects[a]);
            scanf("%f",&credits[a]);
        }

        for (int j=0;j<12;j++)
        {
            float temp=0;
            temp=cal_grade(mark[j]);
            temp=temp*credits[j];
            grade[j]=temp;
        };

        double fourth;
        scanf("%lf", &fourth);
        double _temp;
        _temp = cal_grade(fourth);

        if(_temp > 2) {
            _temp=_temp-2;
        }

        float sum=0;
        for (int k=0;k<12;k++)
        {
            sum+=grade[k];
        }
        float CGPA,total_credits=27;
        CGPA=sum/total_credits;
        printf("Your CGPA is : %0.2f",CGPA);

    }

