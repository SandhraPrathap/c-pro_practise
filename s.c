#include<stdio.h>
void main(){
long n,s=0,i;
scanf("%ld",&n);
for(i=1;n!=0;i+=2)
{
    s+=i;
    n--;
}
printf("%ld",s);
}