#include <stdio.h>

int main(void)
{
    int t, s;

    scanf("%d %d", &t, &s);

    if (12 <= t && t <= 16 && s == 0)
    {
        printf("320");
    }
    else 
    {
        printf("280");
    }

    return 0;
}
