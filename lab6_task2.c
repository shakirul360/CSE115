#include<stdio.h>

int main(){
    char c;

    printf("please enter a character: \n");
    scanf("%c", &c);

    switch (c){
        case 'a':
            printf("%c is a Vowel", c);
            break;
        case 'A':
            printf("%c is a Vowel", c);
            break;
        case 'e':
            printf("%c is a Vowel", c);
            break;
        case 'E':
            printf("%c is a Vowel", c);
            break;
        case 'i':
            printf("%c is a Vowel", c);
            break;
        case 'I':
            printf("%c is a Vowel", c);
            break;
        case 'o':
            printf("%c is a Vowel", c);
            break;
        case 'O':
            printf("%c is a Vowel", c);
            break;
        case 'u':
            printf("%c is a Vowel", c);
            break;
        case 'U':
            printf("%c is a Vowel", c);
            break;
        default:
            printf("%c is a Consonant", c);
            break;
    }

    return 0;
}
