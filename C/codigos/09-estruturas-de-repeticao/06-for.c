#include <stdio.h>

int main()
{
    int i,j;
    for (i = 1,j = 99; i <= j; i++, j--)
    {
        printf("%d + %d = 100\n", i,j);
    }
    
    return 0;
}
