#include<stdio.h>

int main(){

    int cels;
    float fahr;

    printf("please enter temperature in degrees celsius: ");
    scanf("%d", &cels);
    fahr = ((cels* 9)/5) + 32;
    printf("%f\n", fahr);


    printf("\t____________________________________________________________\n\t|");
    printf("%-29s", "Sample Input");
    printf("|%-28s", "Sample Output");
    printf("|\n");

    printf("\t____________________________________________________________\n\t|");
    printf("Enter a Temperature: %d %5s", cels, "");
    printf("|%.2f degree Fahrenheit %3s", fahr, "");
    printf("|\n");
    printf("\t____________________________________________________________\n");
    return 0;
}
