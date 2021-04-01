#include <stdio.h>

int main(){
    int num1, num2;

    do{
        scanf("%d %d", &num1, &num2);
    }
    while (num1 % num2 != 0);
    return 0;
}
