/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int ch_count(char ch, const char *str);

int main(){
    const char str[80] = "Mississippi sassafras";
    char ch = 's';
    int count;

    count = ch_count(ch, str);
    printf("The character %c appeared in %s %d times\n", ch, str, count);

    return 0;
}

int ch_count(char ch, const char *str){
    int ans;

    if (str[0] == '\0')
        ans = 0;
    else
        if (ch == str[0])
            ans = 1 + ch_count(ch, &str[1]);
        else
            ans = ch_count(ch, &str[1]);

    return ans;
}
