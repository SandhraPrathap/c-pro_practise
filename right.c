#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf(" ");}
            for(int k=0;k<i;k++)
                printf(".");
            printf("\n");
      
    }
    return 0;}
