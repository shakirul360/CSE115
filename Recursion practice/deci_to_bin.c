/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void binary_print(int n);

int main(){
    int n = 66;
    binary_print(n);
    return 0;
}

void binary_print(int n){
    if (n == 0)
        return;
    else{
        binary_print(n / 2);
        printf("%d", n / 2);
    }
}
