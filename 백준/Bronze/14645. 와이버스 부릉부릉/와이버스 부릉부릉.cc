#include <stdio.h>

int main(void)
{
    int n, k;
    int a, b;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        k = k - b + a;
    }

    printf("비와이\n");

    return 0;
}

