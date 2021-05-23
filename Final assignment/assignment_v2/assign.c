/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HOSPITAL_SPACE 100
#define NAME_SIZE 100

typedef struct{
    int id;
    char name[NAME_SIZE];
    int age;
    int underlying_issues;
    int patient_status; /* Automatically set by comparing age and underlying issues boolean */

} patient;

void input_patient(int patient_number, char filename[], patient patients[]);
void output_patient_data(int patient_number, char filename[], patient patients[]);
void sort_patients(int patient_number, char filename[], patient patients[]);



int main(){
    char filename[100];
    patient patients[HOSPITAL_SPACE];

    printf("Enter the file name: ");
    gets(filename);
    //input_patient (2, filename, patients);
//    output_patient_data(7, filename, patients);
//    sort_patients(7, filename, patients);
    return 0;
}

void input_patient(int patient_number, char filename[], patient patients[]){
    int i;
    char file_str[100];
    strcpy(file_str, filename);
    strcat(file_str, ".txt");
    FILE *patient_data = fopen(file_str, "a");
    if (patient_data == NULL){
        printf("Could not open the file!\n");
        return;
    }

    for (i = 0; i < patient_number; i++){
        printf("Enter patient's ID: ");
        scanf("%d", &patients[i].id);
        fflush(stdin);

        printf("Enter patient no %d's name: ", i + 1);
        gets(patients[i].name);

        printf("Enter patient's age: ");
        scanf("%d", &patients[i].age);

        printf("Does the patient have any underlying issues?1 = yes, 0 = no: ");
        scanf("%d", &patients[i].underlying_issues);

        if (patients[i].age >= 60 && patients[i].underlying_issues == 1)
            patients[i].patient_status = 9;
        else if (patients[i].age >= 60 && patients[i].underlying_issues == 0)
            patients[i].patient_status = 7;
        else if (patients[i].patient_status < 60 && patients[i].underlying_issues == 1)
            patients[i].patient_status = 5;
        else
            patients[i].patient_status = 3;


        fprintf(patient_data, "%d,%s,%d,%d,%d\n", patients[i].id, patients[i].name,
                 patients[i].age, patients[i].underlying_issues, patients[i].patient_status);
    }
    fclose(patient_data);
}


void output_patient_data(int patient_number, char filename[], patient patients[]){
    int i;
    char file_str[100], line[300], *ptr;

    strcpy(file_str, filename);
    strcat(file_str, ".txt");
    FILE *patient_data = fopen(file_str, "r");

    if (patient_data == NULL){
        printf("Could not open the file!\n");
        return;
    }

    for (i = 0; i < patient_number; i++){
        fgets(line, 300, patient_data);

        ptr = strtok(line, ",");
        patients[i].id = atoi(ptr);

        ptr = strtok(NULL, ",");
        strcpy(patients[i].name, ptr);

        ptr = strtok(NULL, ",");
        patients[i].age = atoi(ptr);

        ptr = strtok(NULL, ",");
        patients[i].underlying_issues = atoi(ptr);

        ptr = strtok(NULL, ",");
        patients[i].patient_status = atoi(ptr);



    }
    fclose(patient_data);

    printf("%4s%5c%10s%5c%3s%5c%6s%5c%4s\n", "ID", ' ', "Name", ' ', "Age", ' ', "U_issues", ' ', "Status");
    for (i = 0; i < patient_number; i++){
        printf("%4d%5c%10s%5c%3d%5c%4d%5c%6d\n", patients[i].id, ' ', patients[i].name, ' ', patients[i].age, ' ', patients[i].underlying_issues, ' ', patients[i].patient_status);
    }

}

void sort_patients(int patient_number, char filename[], patient patients[]){

    int i, j, highest_idx;
    char file_str[100], line[300];
    char *ptr;
    patient temp;

    strcpy(file_str, filename);
    strcat(file_str, ".txt");
    FILE *patient_data = fopen(file_str, "r");

    if (patient_data == NULL){
        printf("Could not open the file!\n");
        return;
    }


    for (i = 0; i < patient_number; i++){
        fgets(line, 300, patient_data);

        ptr = strtok(line, ",");
        patients[i].id = atoi(ptr);

        ptr = strtok(NULL, ",");
        strcpy(patients[i].name, ptr);

        ptr = strtok(NULL, ",");
        patients[i].age = atoi(ptr);

        ptr = strtok(NULL, ",");
        patients[i].underlying_issues = atoi(ptr);

        ptr = strtok(NULL, ",");
        patients[i].patient_status = atoi(ptr);



    }

    for (i = 0; i < patient_number - 1; i++){
        highest_idx = i;
        for (j = i + 1; j < patient_number; j++){
            if (patients[j].patient_status > patients[highest_idx].patient_status)
                highest_idx = j;

        }

        temp = patients[i];
        patients[i] = patients[highest_idx];
        patients[highest_idx] = temp;

    }

    printf("%4s%5c%10s%5c%3s%5c%6s%5c%4s\n", "ID", ' ', "Name", ' ', "Age", ' ', "U_issues", ' ', "Status");
    for (i = 0; i < patient_number; i++){
        printf("%4d%5c%10s%5c%3d%5c%4d%5c%6d\n", patients[i].id, ' ', patients[i].name, ' ', patients[i].age, ' ', patients[i].underlying_issues, ' ', patients[i].patient_status);
    }
    fclose(patient_data);

}


