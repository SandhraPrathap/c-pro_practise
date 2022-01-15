#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[5][5];
    int randoma[5][5];
    int i, j, t = 0, b, m = 0, n = 0, d = 0, o = 0, u = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            randoma[i][j] = u;
            u++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", randoma[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
            int temp = randoma[i][j];
            int randomIndex = rand() % 25;
            printf("%d\n", randomIndex);
            printf("%d\n", temp);
            int randomIndex1 = rand() % 25;

            randoma[i][j] = randoma[randomIndex][randomIndex1];
            randoma[randomIndex][randomIndex1] = temp;
        
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", randoma[i][j]);
        }
        printf("\n");
    }
    printf("Enter the matrix\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }

    while (1)
    {
        d = 0;
        o = 0;
        m = 0;
        t = 0;
        n = 0;
        printf("Player 1\n");
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
        printf("Player 2\n");
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
            t = 0;
            m = 0;
            for (j = 0; j < 5; j++)
            {
                if (a[i][j] == 0)
                    m++;
                if (m == 5)
                {
                    n++;
                }
                if (a[j][i] == 0)
                    t++;
                if (t == 5)
                {
                    n++;
                }
                if (a[i][i] == 0)
                {
                    d++;
                }
                if (d == 25)
                {
                    n++;
                }
                if (a[i][4 - i] == 0)
                {
                    o++;
                }
                if (o == 25)
                {
                    n++;
                }
            }
        }
        printf("%d\n", n);
        if (n == 5)
            break;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    printf("Bingo\n");
}