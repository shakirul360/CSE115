/*
    * Calculate and display the sum of two input values.
*/

#include <stdio.h> /* imports library to use printf and scanf functions */

int main (){

        int X, x, sum;   /* X =  first input value, x =  second input value, sum = sum of inputs*/

        /* the line above declares the variables and its types */

        scanf("%d %d", &X, &x);  /* this statement scans two values and places into the memory as X and x respectively. */

        sum = X + x;             /* this statement uses + operator to add the two values together and assign it to sum variable */

        printf("%d + %d = %d\n", X, x, sum);  /* this statement outputs the values and the sum of values in the given format */

        return 0;                              /* returns 0 since our value to be returned by main has to be int and 0 indicates our code works fine */

    }
