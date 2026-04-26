#include <stdio.h>
#define Leejungwu 100

int main(void)
{
    int n;
    int bignose[Leejungwu];
    int yachu = 0;
    int wangko = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bignose[i]);
    }

    scanf("%d", &wangko);

    for (int ii = 0; ii <n ; ii++)
    {
        if (bignose[ii] == wangko)
        {
            yachu += 1;
        }
    }

    printf("%d", yachu);
    return 0;
}
