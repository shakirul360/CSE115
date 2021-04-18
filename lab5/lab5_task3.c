#include<stdio.h>

int main(){
    int a, b,c, max;

    printf("please enter three numbers a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b) && (a > c)) {
        max = a;
    } else if ((b > a) && (b > c)){
        max = b;
    } else{
        max = c;
    }
    printf("%d is the maximum of the three numbers\n", max);

    return 0;
}
