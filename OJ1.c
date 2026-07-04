#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool f(int m)
{
    return (m % 3 == 0 || m % 5 == 0 || m % 7 == 0);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int cnt = 0;

        for (int j = a; j <= b; j++)
        {
            if (f(j))
                cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}