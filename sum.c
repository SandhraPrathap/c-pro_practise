#include<stdio.h>
 
void main()
{
    int mat[12][12],transpose[12][12];
    int i,j,row,col,flag=1;
    scanf("%d",&row);
	col=row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
 
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=mat[i][j];
        }
    }
    
    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(mat[i][j]!=transpose[i][j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                printf("NO");
                break;
            }
        }
        if(flag==1)
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
}