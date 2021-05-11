/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

typedef struct{
    float real;
    float imag;
} Complex_t;

Complex_t Complex_add(Complex_t n1, Complex_t n2);

int main(){
    Complex_t a, b, res;

    a.real = 4.0;
    a.imag = 3.0;
    b.real = 5.0;
    b.imag = 6.0;

    res = Complex_add(a, b);

    printf("The result of the additon = %.2lf %.2lf", res.real, res.imag);
    return 0;
}

Complex_t Complex_add(Complex_t n1, Complex_t n2){
    Complex_t res;

    res.real = n1.real + n2.real;
    res.imag = n1.imag + n2.imag;

    return res;
}
