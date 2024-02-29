//make a array mark,subjects,credits,grade..<done
//input the mark of each sub from user and store in mark array..
//make a grade calculation function
//store the grade according to credit in the grade array
//sum of all grade
//final calculation
#include<stdio.h>
//3
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
        return 3.5;
    }
    else if (a>=65)
    {
        return 3.25;
    }
    else if (a>=60)
    {
        return 3;
    }
    else if (a>=50)
    {
        return 2.5;
    }
    else if (a>=40)
    {
        return 2;
    }
    else{
        return 0;
    }
}
int main()
{
    //1
    char subjects[11][20]={"SPL","SPLL","DSA","DSAL","NA","NAL","DM","EDC","EDCL","OPDE","Viva_voce"};
    float credits[11]={3,1.5,3,1.5,3,1,3,3,1,3,1};
    int mark[11]={0};
    float grade[11]={0};

    //2
    for (int i=0;i<11;i++)
    {
        printf("enter the marks for %s :",subjects[i]);
        scanf("%d",&mark[i]);
    }
    for (int j=0;j<11;j++)
    {
        float temp=0;
        temp=cal_grade(mark[j]);
        temp=temp* credits[j];
        grade[j]=temp;
    }
    float sum=0;
    for(int k=0;k<11;k++)
    {
        sum+=grade[k];
    }
    float cgpa,total_grade=24;
    cgpa=sum/total_grade;
    printf("Your CGPA is : %0.2f",cgpa);

}
