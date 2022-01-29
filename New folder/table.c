#include <stdio.h>
int main()
{
    int a, n, b, c, d;

    printf("Enter n=");
    scanf("%d", &n);

    printf("\nEnter c=");
    scanf("%d", &c);

    printf("\nEnter d=");
    scanf("%d", &d);

    for (a = n; a <= d; a++)
    {
        for (b = 1; b <= c; b++)
        {
            printf("%d * %d=%d\n", a, b, a * b);
        }
        printf("\n");
    }
}