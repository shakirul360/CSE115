/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void print_array(int arr[],int  size);
int main(){
    int size = 6;
    int arr[6] = {1,2,3,4,5,6};
    print_array(arr, size - 1);
    return 0;
}

void print_array(int arr[],int  size){
    //printf("size = %d\n", size);
    if (size == 0){
       printf("%d ", arr[0]);
    }
    else{
        print_array(arr, size - 1);
        printf("%d ", arr[size]);
    }

}
