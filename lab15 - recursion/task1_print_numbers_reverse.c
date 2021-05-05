/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void print_digits_reversed(int x);

int main(){
    int n;
    printf("Enter a term to print till the numbers in reverse order: ");
    scanf("%d", &n);
    print_digits_reversed(n);
    return 0;
}

void print_digits_reversed(int x){
    int result;
    if (x == 0)
        return;
    else{
        result = x % 10;
        printf("%d ", result);
        print_digits_reversed(x / 10);

    }
}
