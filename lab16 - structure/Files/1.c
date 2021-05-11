/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{

    char name[50];
    int id;
    char dept[20];
    double cgpa;

} student;


int main(){
    FILE *inp;
    inp = fopen("input.txt", "r");

    if(inp == NULL){
        printf("File could not be opened\n");
        return 0;
    }

    student students[100];
    int i = 0, j = 0;
    char line[300];
    char name[100];
    int id;
    char dept[100];
    double cgpa;
    char *ptr;

//    while (fscanf(inp, "%s", students[i].name) != EOF){
//        fscanf(inp, "%d", &students[i].id);
//        fscanf(inp, "%s", students[i].dept);
//        fscanf(inp, "%lf", &students[i].cgpa);
//        i++;
//    }
    while (fgets(line, 300, inp) != EOF){
        puts(line);
        //name =  strtok(line, " ,");
        strcpy(students[i].name, name);

        id  =  atoi(strtok(NULL, " ,"));
        students[i].id = id;

        //dept =  strtok(NULL , " ,");
        strcpy(students[i].dept, dept);

        cgpa = strtod(line, &ptr);
        students[i].cgpa = cgpa;

        i++;

    }

    for (j = 0; j < i; j++){
        printf("%s %d %s %lf\n", students[j].name, students[i].id, students[j].dept, students[j].cgpa);
    }


    return 0;
}
