#include <stdio.h>
#include <math.h>


void GetRoot(int a, int b, int c);
int main(){
    int a, b,c;

    printf("Please enter the three coefficients: ");
    scanf("%d %d %d", &a, &b, &c);
    GetRoot(a, b, c);
}






void GetRoot(int a, int b, int c){
    double x, root2, disc;
    disc = b * b - 4 * a * c;
    x = (-b + sqrt(disc)) / (2 * a);
    //x2 = (-b - sqrt(disc)) / (2 * a);
    printf("the value of x is %lf", x);

}
