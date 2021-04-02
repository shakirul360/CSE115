#include <stdio.h>

int main(){
    int num, odd_count = 0, even_count = 0, i, num_count;
    printf("please enter the number of values to check: ");
    scanf("%d", &num_count);

    for (i = 0; i < num_count; i++){
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    printf("the number of odds and evens of the %d numbers are %d and %d.\n", num_count, odd_count, even_count);
    return 0;
}
