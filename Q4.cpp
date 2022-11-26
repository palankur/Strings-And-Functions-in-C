#include<stdio.h>               //lowercase to upper case using function
void lower_upper(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        str[i]=str[i]-32;
        }
    }
    printf("The upper case is : %s",str);
}
int main()
{
    char str[40];
    printf("Enter any string in lower case : ");
    fgets(str,40,stdin);
    lower_upper(str);
    return 0;

}
