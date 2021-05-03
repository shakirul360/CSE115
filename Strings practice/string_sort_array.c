/* Done by Shakirul Islam leeon
    student ID - 2111728642
    Program that sorts an array of strings in alphabetical order using strcmp
*/

#include <stdio.h>
#include <string.h>
#define NAME_SIZE 10
#define SIZE 5
int min_index_finder(int start,char  array[][NAME_SIZE]);
void print_arr(char arr[][NAME_SIZE]);
int main(){
    char array[SIZE][NAME_SIZE] = {"Abrar", "Sopnil", "Bokul", "Tarannum", "Shakirul"};
    int i;

    print_arr(array);
    sort_names(array, 5);
    print_arr(array);
    return 0;
}

void sort_names(char array[][NAME_SIZE], int n) {
    int fill, index_min, j;
    char temp_name[NAME_SIZE]; /* temporary name */
    for(fill = 0; fill < n-1; fill++) {
        index_min = fill;
        for(j = fill + 1; j < n; j++) {
            if(strcmp(array[j], array[index_min]) < 0)
            index_min = j; /* found a new min */
        }
        strcpy(temp_name, array[fill]);
        strcpy(array[fill], array[index_min]);
        strcpy(array[index_min], temp_name);
    }
}

void print_arr(char arr[][NAME_SIZE]){
    int i;
    for (i = 0; i < 5; i++){
        printf("%s ", arr[i]);
    }
    printf("\n");
}
