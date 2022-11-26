#include<stdio.h>       //duplicate values in array using function
#include<string.h>
void duplicate(char a[])
{
    int i,j,k,count;
    k=strlen(a);
    printf("The repeated character in the given string are as follows : ");
    for(i=0;i<k;i++)
    {
        count=1;
        for(j=i+1;j<k;j++)
        {
        if(a[i]==a[j] && a[i]!=' '){
        count++;
        a[j]='0';
        }
        }
    if(count>1 && a[i]!='0')
     printf("\n%c",a[i]);
    }
}
int main()
{
    char a[20];
    printf("Enter a string : ");
    fgets(a,20,stdin);
    duplicate(a);
    return 0;
}
