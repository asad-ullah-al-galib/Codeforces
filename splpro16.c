#include<stdio.h>
void convert(char* str,int* upp,int* low,int* num,int* spec)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(isupper(str[i]))
        {
            (*upp)++;
        }
        else if(islower(str[i]))
        {
            (*low)++;
        }
        else if(isdigit(str[i]))
        {
            (*num)++;
        }
        else
        {
            (*spec)++;
        }
        i++;
    }
}
int main()
{
    char str[100];
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);

    int upp=0,low=0,num=0,spec=0;
    convert(str,&upp,&low,&num,&spec);

    printf("%d\n",upp);
    printf("%d\n",low);
    printf("%d\n",num);
    printf("%d\n",spec);
}
