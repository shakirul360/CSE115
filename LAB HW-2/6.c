/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, j, length;
    char string[100], temp;
    printf("Please enter a string: ");
    gets(string);
    length = strlen(string);

    for (i = 0; string[i] != '\0'; i++){
        for (j = i + 1; string[j] != '\0'; j++){
            if (string[i] > string[j]){
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("%s\n", string);
    return 0;
}
