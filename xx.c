/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

int main(){
    int m = 25, n = 77;
    char c = '*';
    int *itemp;

    *itemp = &c;
    printf("%d\n", *itemp);
    printf("%c", c);
    printf("%d", &c);


    return 0;
}
