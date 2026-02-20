#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Dígite um número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) 
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
