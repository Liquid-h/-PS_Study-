#include <stdio.h>

int main(void)
{
    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
            break;

        // 가장 큰 값을 빗변으로 판단
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;

        // 나머지 두 변을 찾기
        int sum_sq = 0;
        if (max == a)
            sum_sq = b * b + c * c;
        else if (max == b)
            sum_sq = a * a + c * c;
        else
            sum_sq = a * a + b * b;

        if (sum_sq == max * max)
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
