#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Dígite um número: ");
    scanf("%d", &n);
    int i = 1;
   do
   {
        printf("%d\n", i);
        i++;    
   } while (i <= n);
   
    return 0;
}
