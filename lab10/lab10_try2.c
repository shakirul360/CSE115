#include <stdio.h>
#include <math.h>

void add(int *a, int *b, int *res);
void sub(int *a,int *b, int *res);
void mul(int *a,int *b, int *res);
void div(int *a, int *b, double *res);
void fact(int *a, int *res);

int main(){
    int a, b, choice;
    double res = 0;


    printf("1: Addition\n");
    printf("2: Substraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: Factorial\n");
    printf("6: Quit\n");

    printf("Enter the choice => ");
    scanf("%d", &choice);

    printf("Enter two numbers => ");
    scanf("%d %d", &a, &b);

    switch (choice){

        case 1:
            add(&a, &b, &res);
            printf("Addition: %d\n", res);
            break;
        case 2:
            sub(&a, &b, &res);
            printf("Substraction: %d\n", res);
            break;
        case 3:
            mul(&a, &b, &res);
            printf("Multiplication: %d\n", res);
            break;
        case 4:
            (double) res;
            div(&a, &b, &res);
            printf("Division: %f\n", res);
            break;
        case 5:
            fact(&a, &res);
            printf("Factorial: %d\n", res);
            fact(&b, &res);
            printf("Factorial: %d\n", res);
            break;

    }



    return 0;
}

void add(int *a,int *b, int *res){


    *res = *a + *b;
}

void sub(int *a, int *b, int *res){


    *res = *a - *b;
    *res = abs(*res);

}


void mul(int *a, int *b, int *res){


    *res = *a * *b;
}


void div(int *a, int *b, double *res){

    *res = *a / *b;

}

void fact(int *a, int *res){
    *res = 1;
    int i;

    for (i = 2; i <= *a; i++){
        *res *= i;
    }
}
