#include <stdio.h>

int main()
{
    int n;
    printf("Dígite um número: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
