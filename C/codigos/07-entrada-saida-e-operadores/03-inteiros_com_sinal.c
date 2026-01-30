#include <stdio.h>

int main(void){
    short int numero_short = -13;
    int numero_int = -45000;
    long int numero_long = 97000000000;
    long long int numero_long_long = -7613456789900;
    printf("O valor do numero_short é %hd\n", numero_short);
    printf("O valor do numero_int é %d\n", numero_int);
    printf("O valor do numero_long é %ld\n", numero_long);
    printf("O valor do numero_long_long é %lld\n", numero_long_long);
    return 0;
}
