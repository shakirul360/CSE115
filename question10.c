/*
    * Calculate and display the sum of two input values.
*/

#include <stdio.h> /* imports library to use printf and scanf functions */

int main (){

        /* declarations of  X =  first input value, x =  second input value, sum = sum of inputs*/

        int num1, num2, sum;


        scanf("%i %i", &num1, &num2);  /* this statement scans two values and places into the memory as X and x respectively. */

        sum = num1 + num2;             /* this statement uses + operator to add the two values together and assign it to sum variable */

        printf("%d + %d = %d\n", num1, num2, sum);  /* this statement outputs the values and the sum of values in the given format */

        return 0;                              /* returns 0 since our value to be returned by main has to be int and 0 indicates our code works fine */

    }
