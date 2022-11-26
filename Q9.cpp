#include<stdio.h>                           //reversing the total string my name is ankur = ankur is name my
#include<string.h>
void reverse_sentence(char str[])
{
    int i,l;
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            str[i]='\0';
            printf("%s ",&str[i]+1);
        }
    }
    printf("%s",str);
}
int main()
{
    int j,i,m;
    char str[100];
    printf("Enter the string : ");
    gets(str);
    reverse_sentence(str);
    return 0;
}
