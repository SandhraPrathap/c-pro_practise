
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j,k,l,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {for(j=0;j<i+1;j++)
    {for(k=0;k<=j;k++)
        printf(" ");
     printf("\\");
            printf("\n");}

            if(j=i+1)
            {for(l=0;l<k;l++)
             printf("-");
            printf("\\");
                   printf("\n");}}}
