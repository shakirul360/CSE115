/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello world";

    char *p = str;

    puts(p);
    printf("%d\n", p);

    for (int i = 0; *(p + i) != '\0'; i++){
        printf("%c", *(p + i));
    }
    printf("\n");

    // reversing the string using pointers.

    char *begin, *end, temp;
    int length = sizeof(str) - 1;

    begin = str;
    end = str;

    for (int i = 0; i < (length - 1); i++){
        end++;
    }

    for (int i = 0; i < length / 2; i++){
        temp = *end;
        *end = *begin;
        *begin = temp;

        begin++;
        end--;
    }
    printf("%s", str);

    return 0;
}
