/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void palindrome(int count, int end, char arr[]);
int main(){
    int count = 0, end;
    char string[10];
    printf("Enter string: ");
    gets(string);


    while (string[count] != '\0')
      count++;

    end = count - 1;
    palindrome(count, end, string);

    return 0;
}
void palindrome(int count, int end, char arr[]){
    char rev_arr[count + 1];
    int begin = 0;

    for (begin = 0; begin < count ; begin++){
        rev_arr[begin] = arr[end];
        end--;
    }
    rev_arr[begin] = '\0';

    if (strcmp(arr, rev_arr) == 0)
        printf("%s is a palindrome", arr);
    else
        printf("%s is not a palindrome", arr);

}
