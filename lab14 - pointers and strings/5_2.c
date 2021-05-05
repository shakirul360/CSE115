/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#include <stdio.h>
#define SIZE 25 /* primes between 1-100 */


int main(){
    int i = 0, sum = 0,
        prime[SIZE];

    printf("Enter Prime numbers from 1- 100: ");
    for (i = 0; i < SIZE; i++){
            scanf("%d", &prime[i]);
        }
    for (i = 0; i < SIZE; i++){
        sum += prime[i];
    }
    printf("The sum of all prime numbers between 1 - 100 is %d.\n", sum);
    return 0;

}
