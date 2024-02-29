 
#include<stdio.h>
#include<string.h>
void check(char str[], char word[])
{
    if(strstr(str,word)!= NULL)
    {
        printf("YES\n");
    }
    else
    {

        printf("NO\n");
    }
}
int main()
{
    char str[100],word[50];
    //scanf("%s",str);
    //scanf("%c",&word);
    gets(str, sizeof(str), stdin);  // read string
    str[strlen(str) - 1] = '\0';  // remove newline character

    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);
    check(str,word);
}
