/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
char  largestCharacter(char str[]);

int main(){
    char max, str[100];

    printf("Please enter a string: ");
    gets(str);
    max = largestCharacter(str);
    printf("Highest character is %c.\n", max);

    return 0;
}

char  largestCharacter(char str[]){
    int i, j, size;

    size = sizeof(str);

    char max = str[0];

    for (i = 1; str[i] != '\0'; i++){
        if (str[i] > max){
            max = str[i];
        }
    }
    return max;

}
