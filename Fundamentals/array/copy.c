#include <stdio.h>
// copy character in a sequence, by copy and print.
main()
{
    int c;
    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}