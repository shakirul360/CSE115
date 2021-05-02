/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "Hello Hello is there anybody in there? Hello nod if you can hear me";
    int count;
    char *needle = "Hello";
    char *p = str;

    while ((p = strstr(p, needle)) != NULL){
//        printf("%s\n", p);
        count++;
        p += strlen(needle);
//        printf("%d\n", strlen(needle));
//        printf("%s\n", p);
    }

    printf("%d", count);
    return 0;
}
