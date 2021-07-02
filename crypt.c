#include <stdio.h>
void main()
{
    char a[100];
    int n = 0, count,i=0,j=0,c=0;
    char b[100][100];
    scanf("%[^\n]%*c", a);
   
    for (count = 0; a[count] != '\0'; count++){}
    for(n=0;4*n>count;n++){}
   while(a[c]!='\0'){
        for (int i = 0; i<4; i++)
        {
            for (int j = 0; j<n; j++)
            {
                b[j][i] = a[c];
                c++;
                printf("%c",b[j][i]);
                
            }
        }}
       
        
    
}