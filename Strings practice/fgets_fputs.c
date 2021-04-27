/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#define L_SIZE 100 /* line size */
#define N_SIZE 40 /* name size */
#include <string.h>

int main(){
    char line[L_SIZE], inname[N_SIZE], outname[N_SIZE];

    printf("Enter the name of input file: ");
    scanf("%s", inname);
    FILE *infile = fopen(inname, "r");
    if(infile == NULL){
        printf("Can't open %s", inname);
        return 1;
    }

    printf("Enter the name of the output file: ");
    scanf("%s", outname);
    FILE *outfile = fopen(outname, "w");
    if(outfile == NULL){
        printf("Can't open %s", outfile);
        return 1;
    }

    /* reads file from input file */

    char *status = fgets(line, L_SIZE, infile);
    while (status != NULL){
        fputs(line, outfile);
        status = fgets(line, L_SIZE, infile);
    }



    fclose(infile);
    fclose(outfile);

    // We use strcpy to either assign string to an array or copy the string
    char t[16];
    strcpy(t, "Test string");
    puts(t);
    return 0;
}
