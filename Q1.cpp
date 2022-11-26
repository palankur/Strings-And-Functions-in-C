#include<stdio.h>                   //length of a string using function
void length(char str[])
{
    int i;
    for(i=0;str[i];i++);
printf("String length is %d",i-1);
}
int main()
{
char str[20];
printf("Enter a string : ");
fgets(str,20,stdin);
length(str);
return 0;
}
