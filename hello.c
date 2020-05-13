#include <stdio.h>

static int t = 1;

int main()
{
    if (t)
        printf("trying new build\n");
    else
        printf("but not here\n");

    return 0;
}
