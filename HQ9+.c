#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int count=0;
    scanf("%s",&str);
    for (int i=0;i<strlen(str);i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            count++;
        }
        else{
                count==0;
        }
    }
    if (count>=1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
