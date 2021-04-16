/* LAB HW - 1,
   done by Shakirul Islam Leeon
   student ID: 2111728642
*/

#include <stdio.h>

void printPattern(int n);

int main(void) {
	int n;

    printf("enter a number: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

void printPattern(int n){
	int i, j;

	for (i = 1; i <= n; i++){

		for(j = 1; j <= n; j++){

			if (i == ((n + 1)/ 2) && j == ((n + 1)/ 2)){
                printf("O ");
			} else{
                printf("S ");
			}

		}
		printf("\n");

	}
}
