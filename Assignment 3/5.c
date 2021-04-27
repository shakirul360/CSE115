/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#include <stdio.h>
#define SIZE 100

int main(){
    int i = 0, sum = 0, count = 0,
        prime[SIZE];

    printf("Enter Prime numbers: \n");
    while ((scanf("%d",&prime[i]) == 1) && (count < SIZE)){
        count++;
        i++;
    }
    for (i = 0; i < count; i++){
        sum += prime[i];
    }

    printf("count = %d", count);
    printf("The sum of all prime numbers stored is %d.\n", sum);
    return 0;

}
