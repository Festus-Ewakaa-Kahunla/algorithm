#include <stdio.h>
main()
{
    for (float f = 300; f >= 0; f -= 20)
    {
        printf("%2.1f %5.1f\n", f, (5.0 / 9.0) * (f - 32));
    }

#define LOWER 0
#define UPPER 300
}