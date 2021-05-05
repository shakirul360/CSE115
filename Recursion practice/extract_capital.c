/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define STRSIZ 50

char * find_caps(char *caps, const char *str);

int main(){
    char caps[STRSIZ];

    printf("Capital letters in JoJo are %s\n", find_caps(caps, "JoJo"));

    return 0;
}

 char * find_caps(char *caps, const char *str){
    char restcaps[STRSIZ]; /* caps from reststr */

    if (str[0] == '\0')
        caps[0] = '\0';
    else
        if (isupper(str[0])){
            sprintf(caps, "%c%s", str[0], find_caps(restcaps, &str[1]));
        } else
            find_caps(caps, &str[1]);

    return caps;



 }
