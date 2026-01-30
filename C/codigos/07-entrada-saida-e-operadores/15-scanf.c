#include <stdio.h>

int main(){
    char c;
    int num;
    double num_real;
    scanf("%c %d %lf", &c, &num, &num_real);
    printf("Os valores digitados foram: %c %d %.3f\n", c, num, num_real);
    return 0;
}
