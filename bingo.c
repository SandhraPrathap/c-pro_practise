#include <stdio.h>
void main()
{
    int a[5][5], i, j, t = 1, b, m = 0, n = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
    while (t)
    {
        printf("Player 1");
        scanf("%d", &b);
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
                if (b == a[i][j])
                {
                    a[i][j] = 0;
                    break;
                }
        }
        printf("Player 2");
        scanf("%d", &b);
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
                if (b == a[i][j])
                {
                    a[i][j] = 0;
                    break;
                }
        }

        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (a[i][j] == 0)
                    m++;

                if (m == 5)
                {
                    n++;
                    m = 0;
                }
            }
            m = 0;
            if (n == 5)
            {
                printf("Bingo\n");
                t = 0;
            }
        }
        for (j = 0; j < 5; j++)
        {
            for (i = 0; i < 5; i++)
            {
                if (a[i][j] == 0)
                    m++;

                if (m == 5)
                {
                    n++;
                    printf("%d", n);
                    m = 0;
                }
            }
            m = 0;
            if (n == 5)
            {
                printf("Bingo\n");
                t = 0;
            }
        }
    }

    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}