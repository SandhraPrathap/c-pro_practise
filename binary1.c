#include<stdio.h>
void main()
{   int n,x,k=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {k=0;
        printf("Enter x\n");
        scanf("%d",&x);
    while(x!=0)
    {   if(x%2==1)
        k++;
        x/=2;
   }
    printf("%d\n",k);}
}