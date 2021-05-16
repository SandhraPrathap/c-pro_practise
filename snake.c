#include <stdio.h>
int main() {
int k=0,l,b,x=1;
printf("Enter l and b\n");
    scanf("%d%d",&l,&b);
    
    for(int i=0;k<l;i++)
    {if((l-k)>=b||i%2!=0||(i-1)!=(x-4)){
     if(i%2==0){
        for(int j=0;j<b;j++)
        {if(k<l){printf("0");}
        k++;
        }
        printf("\n");}
     else if(i==x)
     {{
         for(int m=0;m<b-1;m++)
             printf(" ");
     if(k<l) {printf("0");}
          k++;printf("\n");
         x+=4;
    }
}
    else
    {if(k<l)
    {printf("0");}
     k++;
    printf("\n");}}
    else
    {for(int z=0;z<b-(l-k);z++)
    printf(" ");
    for(int y=0;k<l;y++)
    {printf("0");
    k++;}printf("\n");}}}
    