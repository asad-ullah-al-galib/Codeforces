#include<stdio.h>
#include<string.h>
float cal_grade(float a)
{
    if (a>=80)
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
        return 2.50;
    }
    else if (a>=40)
    {
        return 2.00;
    }
    else
    {
        return 0;
    }
}
int main()
    {
        char subjects[11][20]={"SPL","SPLL","DSA","DSAL","NA","NAL","DM","EDC","EDCL","OPDE","Viva_voce"};
        float credits[11]={3,1.5,3,1.5,3,1,3,3,1,3,1};
        int mark[11]={0};
        float grade[11]={0};
        for (int i=0;i<11;i++)
        {
            printf("Enter the marks for %s: ",subjects[i]);
            scanf("%d",&mark[i]);
        }
        for (int j=0;j<11;j++)
        {
            float temp=0;
            temp=cal_grade(mark[j]);
            temp=temp*credits[j];
            grade[j]=temp;
        }
        float sum=0;
        for (int k=0;k<11;k++)
        {
            sum+=grade[k];
        }
        float CGPA,total_grade=24;
        CGPA=sum/total_grade;
        printf("Your CGPA is : %0.2f",CGPA);
    }


