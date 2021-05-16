#include<stdio.h>
void main()
{
    char a[100];int j=0,k=0;
    scanf("%[^\n]%*c",a);
    for(int i=0;a[i]!=0;i++)
    {
        if(a[i]=='x'||a[i]=='X')
        j++;
        if(a[i]=='o'||a[i]=='O')
        k++;
    }
    if(j==k)
    printf("True");
    else
    printf("False");



    
    
}