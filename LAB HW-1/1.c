/* LAB HW - 1,
   done by Shakirul Islam Leeon
   student ID: 2111728642
*/


#include <stdio.h>

int main(){
    int i, j, total = 0;

    for (i = 1; i <= 100; i += 2){ /*since odd numbers are not divisible by 2 */
        if (i % 3 != 0){
            printf("%d ", i);
            total++;
        }
    }
    printf("\nThe total numbers are: %d", total);
    return 0;
}
