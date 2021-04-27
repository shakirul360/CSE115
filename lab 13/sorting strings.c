#include<stdio.h>
#include<string.h>
int main(void){
    char str1[10];
    char str2[10];
    char str3[10];
    char temp[10];

    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    printf("Enter string 3: ");
    gets(str3);
//    puts(str1);
//    puts(str2);
//    puts(str3);
    if (strcmp(str2, str1) < 0){
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    if (strcmp(str3, str2) < 0){
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    printf("%s %s %s", str1, str2, str3);

}
