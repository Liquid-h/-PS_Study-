#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    unsigned long long a = 0; // F(0)
    unsigned long long b = 1; // F(1)

    for (int i = 0; i < n; i++) {
        unsigned long long sibal = a + b;
        a = b;
        b = sibal;
    }

    printf("%llu\n", a);
    return 0;
}
