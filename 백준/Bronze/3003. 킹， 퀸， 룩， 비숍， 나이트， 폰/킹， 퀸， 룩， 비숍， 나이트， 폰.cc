#include <stdio.h>

int main(void) {
    int k, q, r, b, n, p;
    int base[6] = {1, 1, 2, 2, 2, 8};  
    
    scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &n, &p);
    
    printf("%d %d %d %d %d %d\n",
           base[0] - k,
           base[1] - q,
           base[2] - r,
           base[3] - b,
           base[4] - n,
           base[5] - p);
    
    return 0;
}
