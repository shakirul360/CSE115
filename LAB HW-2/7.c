/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[100] = "It is good to program in PYTHON, language PYTHON. PYTHON";
    char rep_word[100] = "PYTHON";
    char rep[100] = "C";
    char replaced[100] = "", *ptr;
    int i, j;


    ptr = strtok(string, " . ,");

	while(ptr != NULL){

	    if (strcmp(ptr, rep_word) == 0){
            strcat(replaced, rep);
            strcat(replaced, " ");
	    }
	    else{
            strcat(replaced, ptr);
            strcat(replaced, " ");
	    }

		ptr = strtok(NULL, " . ,");
	}
	printf("%s", replaced);

    return 0;
}
