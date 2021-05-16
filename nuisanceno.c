#include <stdio.h>
int main()
{
    int N, x, t = 0;
    printf("Enter the no\n");
    scanf("%d", &N);
    x = N;
    while (N != 0)
    {
        if (N % 10 == 6)
            t = (t * 10) + 9;
        else if (N % 10 == 9)
            t = (t * 10) + 6;
        else
            t = (t * 10) + (N % 10);
        N /= 10;
    }
    if (t == x)
        printf("no\n");
    else
        printf("yes\n");
}