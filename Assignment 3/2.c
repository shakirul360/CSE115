/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

int main(){
    int m = 25, n = 77;
    char c = '*';
    int *itemp;

    m = &n; /* error 1 = we are pointing the address of n by the variable, not a pointer, m. An appropriate statement would be itemp = &n OR m = n; */

    itemp = m; /* error 2 = we are assigning the value of m, 25, to a pointer which is supposed to hold an address.
    An appropriate statement would be itemp = &m OR *itemp = m. */
    printf("itemp = %d\n", itemp);

    *itemp = c; /* error 3 = we are assigning a character value to a int type pointer. Appropriate statement can be - *itemp = n; */
    printf("itemp = %c\n", *itemp);

    *itemp = &c; /* error 4 = we are using indirection operator of itemp pointer to change the previous value of the variable to the address of c. Appropriate statement can be - *itemp = n */
                 /* itemp is an int pointer whereas c is a char character. Inflict of types */

    printf("itemp = %c", *itemp);
    return 0;

}

