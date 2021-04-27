/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

int main(){

    char buf[15];
    char str1[12];
    //char str2[12];

    // using gets and puts
    printf("Enter a string: ");
    gets(buf);
    puts(buf);

    // using scanf and printf - ---- drawback is stops taking input after space
    printf("Enter a string: ");
    scanf("%12s", str1);
    printf("%-12s\n", str1);

    // pre initialization

    char str2[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    puts(str2);
    printf("%s", str2);

    return 0;
}
