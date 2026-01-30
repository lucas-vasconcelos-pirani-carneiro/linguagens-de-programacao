#include <stdio.h>

int main(void){
    unsigned short int numero_short = 13;
    unsigned int numero_int = 45000;
    unsigned long int numero_long = 97000000000;
    unsigned long long int numero_long_long = 7613456789900;
    printf("O valor do numero_short é %hu\n", numero_short);
    printf("O valor do numero_int é %u\n", numero_int);
    printf("O valor do numero_long é %lu\n", numero_long);
    printf("O valor do numero_long_long é %llu\n", numero_long_long);
    return 0;
}
