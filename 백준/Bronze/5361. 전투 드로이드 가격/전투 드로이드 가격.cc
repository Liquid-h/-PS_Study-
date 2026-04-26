#include <stdio.h>

int main(void)
{
    int LeeJungWu = 0;
    int n1, n2, n3, n4, n5;

    float arm = 125.30;
    float leg = 180.90;
    float yachu = 350.34;//라이플
    float a = 230.90;//시각
    float b = 190.55;//청각
    float result = 0;

    scanf("%d", &LeeJungWu);

    for (int i = 0; i < LeeJungWu; i++)
    {
        scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
        result = (n1 * yachu) + (n2 * a) + (n3 * b) + (n4 * arm) + (n5 * leg);
        printf("$%.2f\n", result);
        result = 0;
    }

    return 0;
}
