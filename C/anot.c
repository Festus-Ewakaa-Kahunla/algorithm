#include <stdio.h>
/* Print farenheit and celsius table */
main()
{
    int F, C;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    F = lower;
    printf("Farenheit to Celsius\n");
    while (F <= upper)
    {
        C = 5 * (F - 32) / 9;
        printf("%3d %6d\n", F, C);
        F += step;
    }
}