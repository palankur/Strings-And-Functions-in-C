#include<stdio.h>           //alphanumeric or not using function
void alphanumeric(char str[])
{
    int i,alpha=0,digits=0,spcl=0;
    for(i=0;str[i];i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        alpha++;
        else if(str[i]>=48 && str[i]<=57)
        digits++;
        else
            spcl++;
    }
    if(alpha>=1 && digits>=1 && spcl>=1)
        printf("The number is a alphanumeric number");
    else
        printf("The number is not a alphanumeric number");

}
int main()
{
    char str[100];
    printf("Enter any string value : ");
    fgets(str,100,stdin);
    alphanumeric(str);
       return 0;
}
