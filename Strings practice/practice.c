/* Done by Shakirul Islam leeon
    student ID - 2111728642
    https://www.w3resource.com/c-programming-exercises/string/index.php
    problem - 2
*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char string[50] = "Hello my little love";
    char rev_string[50];
    int i, count = 0, j = 0, end;
    //2
    for (i = 0; string[i] != '\0'; i++){
        count++;
    }
    printf("The length of the string is: %d\n",count + 1);
    printf("Size of string: %d\n", sizeof(string));

    //3 - print each character
    for (i = 0; string[i] != '\0'; i++){
        printf("%c ", string[i]);
    }
    printf("\n");

    //4 - reverse the string
    end = count - 1;
    for (i = 0; i < count; i++){
        rev_string[i]  = string[end];
        end--;
    }

    printf("%s\n", rev_string);

    // 7  Write a program in C to count total number of alphabets, digits and special characters in a string.

    char str2[50] = "Welcome to w3resource.com.";
    int alph = 0, dig = 0, spec = 0, x;

    for (x = 0; str2[x] != '\0'; x++){
        if (isalpha(str2[x]) != 0)
            alph++;
        else if (isdigit(str2[x]) != 0)
            dig++;
        else
            spec++;
    }
    printf("The number of alphabets, digits and special characters are: %d %d %d\n", alph, dig, spec);

    //9 Write a program in C to count total number of vowel or consonant in a string.
    int vowels = 0, conso = 0;
    for (x = 0; str2[x] != '\0'; x++){
        if (toupper(str2[x]) == 'A')
            vowels++;
        else if(toupper(str2[x]) == 'E')
            vowels++;
        else if(toupper(str2[x]) == 'I')
            vowels++;
        else if(toupper(str2[x]) == 'O')
            vowels++;
        else if(toupper(str2[x]) == 'U')
            vowels++;
        else if (isalpha(str2[x]) != 0)
            conso++;
    }
    printf("Number of vowels = %d\nNumber of consonants = %d\n", vowels, conso);

    return 0;
}
