#include <stdio.h>
/* pg 333 */
void sum(int a, int b, int *cp);

int main(){
    int x, y, z;

    x = 7; y = 2;

    printf("%4c%4c%4c\n",'x', 'y', 'z');

    sum(x, y, &z);
    printf("%4d%4d%4d\n", x, y, z);

    sum(y, x, &z);
    printf("%4d%4d%4d\n", x, y, z);

    sum(z, y, &x);
    printf("%4d%4d%4d\n", x, y, z);

    sum(z, z, &x);
    printf("%4d%4d%4d\n", x, y, z);

    sum(y, y, &y);
    printf("%4d%4d%4d\n", x, y, z);


    return 0;
}

void sum(int a, int b, int *cp){
    //printf("%d = %d + %d\n", *cp, a, b);
    *cp = a + b;
   // printf("*cp = %d\n\n", *cp);

}
