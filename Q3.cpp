#include<stdio.h>                       //comparing strings
#include<string.h>
int compare(char a[],char b[])
{
    int i,flag=0;
    while(a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    i++;
    }
    if(flag==0)
        return 0;
    else
        return 1;
}
int main()
{
    int z;
    char a[20],b[20];
    printf("Enter the first string : ");
    fgets(a,20,stdin);
    printf("Enter the second string : ");
    fgets(b,20,stdin);
    z=compare(a,b);
    if(z==0)
        printf("The strings are same.");
    else
        printf("The strings are not same.");
    return 0;

}
