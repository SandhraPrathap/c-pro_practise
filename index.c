#include<stdio.h>
int find_even_index(int a[1000], int length) {
  int k=0,l=0;
  for(int i=0;i<length;i++)
 {k=0;l=0;
   {for(int j=0;j<i;j++)
   k+=a[j];
   printf("%d ",k);
   for(int j=i+1;j<length;j++)
     l+=a[j];
     printf("%d ",l);
   if(k==l)
     return i;
  }
  }return -1;
}
void main()
{
    int a[100],length;
    scanf("%d",&length);
    for(int i=0;i<length;i++)
    scanf("%d",&a[i]);
    find_even_index(a,length);
}