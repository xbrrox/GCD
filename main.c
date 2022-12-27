#include <stdio.h>

void gcd(int u, int v)
{
    int temp;
    printf("your number are %i and %i\n", u, v);
    while ( v != 0 )
    {
        temp = u % v;
        u=v;
        v = temp;
    }
    printf ("%i\n", u);
}

int main (void)
{
    gcd(150, 35);
    return 0;
}