/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>

int charCounter(char* pString, char c);

int main(void){
    char* inpString = "Thequickbrownfoxjumpedoverthelazydog.";
    int charToCount;
    int eCount;

    eCount = 0;
    charToCount = 'e';
    eCount = charCounter(inpString, charToCount);
    printf("\nThe letter %c was found %d times.", charToCount, eCount);

    return 0;
} // end main

int charCounter(char* pString, char c){
    int count = 0;
    char* pTemp = pString;

    while(pTemp != NULL){
    printf("%c\n", *(pTemp));
    printf("%s\n", pTemp);
    printf("________\n");
    pTemp = strchr(pTemp, c);
    if( pTemp ) {
        pTemp++;
        count++;
    }
}
    return count;
} // end countCharacter

//for (int i = 0; str[i] != '\0'; i++){
//        if (str[i] == ch)
//            count++;
//    }
