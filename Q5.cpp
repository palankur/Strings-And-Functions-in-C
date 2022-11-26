#include<stdio.h>               //upper case to lower case without using function
void upper_lower(char str[])
{
    int i;
     for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
        str[i]=str[i]+32;
        }
    }
    printf("The lower case is : %s",str);
}
int main()
{
    int i;
    char str[40];
    printf("Enter any string in upper case : ");
    fgets(str,40,stdin);
    upper_lower(str);
    return 0;

}
