/* LAB HW - 1,
   done by Shakirul Islam Leeon
   student ID: 2111728642
*/

#include <stdio.h>
#include <math.h>

void triangle_calc(int hypo, int base);

int main(){
    int hypo, base;

    printf("Please enter the hypotenuse and base of the triangle: ");
    scanf("%d %d", &hypo, &base);

    triangle_calc(hypo, base);
    return 0;
}

void triangle_calc(int hypo, int base){
    int a, b;
    double height, area;
    /* Pythagoras > hypo^2(a) = base^2(b) + height^2(c); */
    a = pow(hypo,2);
    b = pow(base,2);
    height  = sqrt(a - b);
    area = 0.5 * base * height;

    printf("The height of the triangle is %.2f.\n", height);
    printf("The area of the triangle is %.2f.\n", area);
}
