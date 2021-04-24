/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#define SIZE 100
#include <stdio.h>

int main(){
    int i = 0, sum = 0, count = 0,
        prime_arr[SIZE];

    printf("Enter Prime numbers: \n");
    while(scanf("%d",&prime_arr[i]) == 1 ){
        count++;
        i++;
    }
    for (i = 0; i < count; i++){
        sum += prime_arr[i];
    }

    printf("count = %d", count);
    printf("The sum of all prime numbers stored is %d.\n", sum);
    return 0;
}
