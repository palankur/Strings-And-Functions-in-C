#include<stdio.h>           //reverse a string without using functions
#include<string.h>
void reverse(char str[])
{
    int i;
    strlen(str);
    for(i=(strlen(str)-1);str[i]>0;i--)
        printf("%c",str[i]);
}
int main()
{
    char str[40];
    printf("Enter any string : ");
    fgets(str,40,stdin);
    reverse(str);
    return 0;
}
