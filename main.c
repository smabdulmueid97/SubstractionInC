#include <stdio.h>
int main()
{
    int x, x_i, i_x, x_d, d_x;
    x = 26;
    x_i = x++; i_x = ++x;
    printf ("x=%d, x_i=%d, i_x=%d", x, x_i, i_x);
    x = 26;
    x_d = x--;
    d_x = --x;
    printf ("x=%d, x_d=%d, d_x=%d", x, x_d, d_x);
}
