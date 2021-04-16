/* LAB HW - 1,
   done by Shakirul Islam Leeon
   student ID: 2111728642
*/

#include <stdio.h>

int generateNumber(int digit1,int digit2,int digit3);

int main(){
    int arr[3];

    int res, i;

    for (i = 0; i < 3; i++){
        printf("Digit %d = ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > 9){
            while (arr[i] > 9){
                printf("Please enter a digit.\n");
                printf("Digit %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        }
    }

    res = generateNumber(arr[0], arr[1], arr[2]);
    printf("Result  = %d", res);
    return 0;
}

int generateNumber(int digit1,int digit2,int digit3){
    int res = 0;

    res += digit1 * 100;
    res += digit2 * 10;
    res += digit3;

    return res;

}
