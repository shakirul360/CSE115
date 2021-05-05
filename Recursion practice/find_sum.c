/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int find_sum(int n);

int main(){
    int n = 6, res;
    res = find_sum(n);
    printf("The sum of numbers upto %d is %d\n", n, res);
    return 0;
}

int find_sum(int n){
    int res;

    if (n == 1)
        res = 1;
    else
        res = n + find_sum(n - 1);

    return res;

}
