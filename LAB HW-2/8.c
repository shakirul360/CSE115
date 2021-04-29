/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
float getMax(float *a, float *b, float *c);
int main(){
    float a, b, c, max;
    printf("Enter three floats: ");
    scanf("%f %f %f", &a, &b, &c);
    max = getMax(&a, &b, &c);

    printf("max is %.2f", max);
    return 0;
}

float getMax(float *a, float *b, float *c){
    if (*a > *b && *a > *c)
        return *a;
    else if (*b > *a && *b > *c)
        return *b;
    else
        return *c;


}
