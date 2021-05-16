#include<stdio.h>
#include<ctype.h>
void main()
{char a[1000],b,j;int k=0;
scanf("%[^\n]%*c",a);
for(j='a';j<='z';j++){
for(int i=0;a[i]!='\0';i++)
{if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
    {b=tolower(a[i]);
    if(b==j)
    {k++;
    break;}

    }
}
}
printf("%d\n",k);
if(k==26)
printf("true\n");
else
printf("false\n");
}