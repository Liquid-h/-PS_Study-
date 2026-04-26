#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // 공백 출력
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        // 별 출력
        for (int k = 0; k < n - i; k++)
        {
            printf("*");
        }
        // 줄바꿈
        printf("\n");
    }

    return 0;
}
