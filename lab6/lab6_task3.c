#include<stdio.h>

int main(){
    char c;

    printf("please enter the character to be tested: \n");
    scanf("%c", &c);

    if ( c == 'a' || c == 'A'){
        printf("%c is a vowel\n", c);
    } else if (c == 'e' || c == 'E'){
        printf("%c is a vowel\n", c);
    } else if ((c == 'i') || c == 'I'){
        printf("%c is a vowel\n", c);
    } else if (c == 'o' || c == 'O'){
        printf("%c is a vowel\n", c);
    } else if (c == 'u' || c == 'U'){
        printf("%c is a vowel\n", c);
    } else {
        printf("%c is a Consonant\n", c);
    }
    return 0;
}

