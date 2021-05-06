/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void reverse_string(char str[]);

int main(){
    char str[] = "LEO MESSI";
    reverse_string(str);
    return 0;
}

void reverse_string(char str[]){

    if (str[0] == '\0')
        return;
    else{
        reverse_string(&str[1]);
        printf("%c", str[0]);
    }
}
