#include <stdio.h>

void value_check(int arr[], int value);

int main(){

    int arr[5] = {2,4,5,6,8}, value;
    printf("Enter a value to check: ");
    scanf("%d", &value);
    value_check(arr, value);
    return 0;
}


void value_check(int arr[], int value){
    int i, flag = 0;

    for (i = 0; i < 5; i++){

        if (arr[i] == value){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Value %d found.\n", value);
    else
        printf("Value %d not found.\n", value);

}
