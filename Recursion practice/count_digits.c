/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int count_digits(int num);

int main(){
    int n = 503;
    int res;
    res = count_digits(n);
    printf("The number of digits in %d is %d\n", n, res);

    printf("The number in reverse is: ");
    print_rev_digits(n);
    return 0;
}

int count_digits(int num){
    int count;
    if (num == 0)
        return 0;
    else
        count = 1 + count_digits(num / 10);
    return count;
}

void print_rev_digits(int num){
    if (num == 0)
        return;
    else{
        printf("%d ", num % 10);
        num = num / 10;
        print_rev_digits(num);
    }
}
