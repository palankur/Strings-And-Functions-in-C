#include<stdio.h>           //palindrome or not using function
#include<string.h>
void pal(char str[])
{
    int i=0,l;
    char a[20];
    strcpy(a,str);
    strrev(a);
    if(strcmp(str,a)==0)
    {
        printf("%s is a palindrome string\n",str);
    }
        else{
        printf("%s is not a palindrome string",str);
        }

}
int main()
{
    char str[20];
    printf("Enter any string : ");
    gets(str);
    pal(str);
    return 0;
}

