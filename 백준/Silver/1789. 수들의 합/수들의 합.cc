#include <stdio.h>

int main(void)
{
    long long int S;
    int count = 0;
    scanf("%lld", &S);

    long long int sum = 0;
    int n = 1;
    while (1) {
        if (sum + n > S)
            break;
        sum += n;
        n++;
        count++;
    }

    printf("%d\n", count);
    return 0;
}