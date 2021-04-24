/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
/* check page 253 / 330 for example */

#include <stdio.h>

int main(){
    int m = 10, n = 5;
    int *mp, *np;
    mp = &m; /* Directing the pointer mp to variable m */
    np = &n; /* Directing the pointer np to variable n */
    *mp = *mp + *np; /* setting the value of m, using mp indirection, to m + p */
    //printf("%d\n", *mp);
    *np = *mp - *np;  /* setting the value of n, using np indirection, to m - p */
    //printf("%d\n", *np);
    printf("%d %d\n%d %d\n", m, *mp, n, *np);

    return 0;
}
