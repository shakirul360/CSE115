/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#include <string.h>
#include <stdio.h>
void strReverse(char *str);
int main(){
    char string[] = "Racecar";
    puts(string);
    strReverse(string);
    puts(string);
    return 0;
}

void strReverse(char *str){
    int i, j;
    int length = strlen(str);
    char rev[length];
    printf("Length = %d\n", length);

    for (i = 0; i < length; i++){
        rev[i] = str[length - 1- i];
    }
    rev[length] = '\0';
    strcpy(str, rev);
}
