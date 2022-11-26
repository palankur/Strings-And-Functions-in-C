#include<stdio.h>               //No. of words in a given string
void words(char a[])
{
    int i,count=1;
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
        count++;
    }
    printf("Words are : %d",count);
}
int main()
{
    char a[20];
    printf("Enter a string : ");
    fgets(a,20,stdin);
    words(a);
    return 0;

}
