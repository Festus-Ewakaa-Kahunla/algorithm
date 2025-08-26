#include <stdio.h>

int main(void)
{
    int n;
    n = 0;

    while (getchar() != EOF)
    {
        ++n;
    }
    printf("%d\n", n);
}

// for (int nc = 0; getchar() != EOF; ++n){

// }
