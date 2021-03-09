#include<stdio.h>

int main(){
    double x, y;
    int m, n;

    x = 10.5;
    y = 7.2;
    m = 5;
    n = 2;

    printf("%f\n", (double)m);
    printf("%f\n", x / (double)m);
    printf("%f\n", x / m);
    printf("%f\n", (double)(n * m));
    printf("%f\n", (double)(n / m) + y);
    printf("%f\n", (double)(n / m));

    return 0;

}
