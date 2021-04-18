#include <stdio.h>

void swap_numbers(int *a, int *b);

int main(){
    int a, b;
    a = 5;
    b = 10;

    swap_numbers(&a, &b);
    printf("Value a: %d\n", a);
    printf("Value b: %d\n", b);
    return 0;
}

void swap_numbers(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
