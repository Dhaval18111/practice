#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);
    // for ( i = 1; i <= 10; i++)
    // {
    //     sum=sum+i;
    // }
    //  printf("%d\n",sum);
    return 0;
}