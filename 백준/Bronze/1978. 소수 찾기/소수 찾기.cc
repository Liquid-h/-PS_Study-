#include <stdio.h>

int main(void)
{
    int n = 0;
    int num, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        for (int ii = 2; ii <= num; ii++)
        {
            if (num == ii)
            { 
                count++;
             }
            if (num % ii == 0)
            {
                break;
            }
                
        }
    }

    printf("%d", count);

    return 0;
}