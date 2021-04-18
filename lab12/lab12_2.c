#include <stdio.h>

void value_check(int arr[], int value);
void read_arr(int arr[]);

int main(){

    int arr[10], value;

    read_arr(arr);
    printf("Enter a value for check: ");
    scanf("%d", &value);
    value_check(arr, value);


    return 0;
}

void read_arr(int arr[]){
    int i;

    for (i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
}

void value_check(int arr[], int value){
    int i, flag = 0;

    for (i = 0; i < 10; i++){

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
