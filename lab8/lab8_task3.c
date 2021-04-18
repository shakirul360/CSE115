#include <stdio.h>
void factorial(int n);
int main(){
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    factorial(n);
    return 0;
}

void factorial (int n){
    int result = 1;
    int i = 1;

    do{
        result *= i;
        i++;
    }
    while(i <= n);
    printf("The result of factorial is %d", result);
}
