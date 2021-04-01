#include <stdio.h>

int main(){
    int iter, i, denom;
    double pi, bracket, value;

    printf("Please enter the number of iterations to be performed: ");
    scanf("%d", &iter);

    denom = 3;
    bracket = 1;

    for(i = 1; i < iter; i++){
        value = 1.0 / denom;
        if (i % 2 == 1){
            bracket -= value;
        } else{
            bracket += value;
        }
        denom += 2;
    }
    pi = 4.0 * bracket;
    printf("The value of pi after %d iterations is %f.\n", iter, pi);
    return 0;
}























//    denom = 1;
//    bracket = 1;
//
//    for (i = 1; i <= iter; i++){
//        if (i % 2 == 1){
//            pos += (4.0)/(2.0*i-1.0);
//        }else{
//            neg += (-4.0)/(2.0*i-1.0);
//        }
//    }
//    pi = neg + pos;
