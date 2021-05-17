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

void printByDept(char *deptName , student allStudents[], int size);
void saveByDept(char *fileName, char *deptName , student allStudents[], int size);

int main(){
    FILE *inp;
    inp = fopen("input.txt", "r");

    if(inp == NULL){
        printf("File could not be opened\n");
        return 0;
    }

    student students[2];
    int i = 0, j = 0;
    char line[300];
    char *ptr;


    while (fgets(line, 300, inp) != NULL){
//        puts(line);
        ptr = strtok(line, ",");
        strcpy(students[i].name, ptr);

        ptr = strtok(NULL, ",");
        students[i].id = atoi(ptr);


        ptr = strtok(NULL, ",");
        ptr++;
        strcpy(students[i].dept, ptr);

        ptr = strtok(NULL, ",");
        students[i].cgpa = atof(ptr);
        i++;

    }

    for (j = 0; j < i; j++){
        printf("%s, %d, %s, %.2lf\n", students[j].name, students[j].id, students[j].dept, students[j].cgpa);
    }
    printByDept("Computer Science", students, i);
    saveByDept("output.txt", "Finance", students, i);


    return 0;
}



void printByDept(char *deptName , student allStudents[], int size){
    int i;
    for (i = 0; i < size; i++){
        if (strcmp(allStudents[i].dept, deptName) == 0)
            printf("%s, %d, %s, %.2lf\n", allStudents[i].name, allStudents[i].id, allStudents[i].dept, allStudents[i].cgpa);
    }
}



void saveByDept(char *fileName, char *deptName , student allStudents[], int size){
    FILE *output = fopen(fileName, "a");
    int i;

    if (output == NULL){
        printf("Could not open file!\n");
    }

    for (i = 0; i < size; i++){
        if (strcmp(allStudents[i].dept, deptName) == 0){
            fprintf(output, "%s, %d, %s, %.2lf\n", allStudents[i].name, allStudents[i].id, allStudents[i].dept, allStudents[i].cgpa);
        }
    }
}
