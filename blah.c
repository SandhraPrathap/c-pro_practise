#include <stdlib.h>
#include <stdio.h>
void main()
{  char num[8];int a,product=1;
    scanf("%s", num);
    a =atoi(num);    
   while (a!=0){
    product*=a%10;
    a/=10;}
    printf("%d\n",product);
}
