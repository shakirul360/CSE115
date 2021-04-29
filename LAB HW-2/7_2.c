/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[50] = "It is good to program in PYTHON language.";
    char rep_word[50] = "PYTHON";
    char rep[50] = "C";
    char *ptr;
    int i, j;


    ptr = strtok(string, " ");

	while(ptr != NULL){

	    if (strcmp(ptr, rep_word) == 0){
            printf("%s ", rep);
	    }
	    else{
            printf("%s ", ptr);
	    }

		ptr = strtok(NULL, " ");
	}
	printf("\n");

    return 0;
}
