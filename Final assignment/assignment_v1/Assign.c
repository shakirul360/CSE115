/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HOSPITAL_SPACE 100
#define NAME_SIZE 100

typedef struct{
    char name[NAME_SIZE];
    int age;
    int patient_status;
    int risky;

} patient;

void input_patient(int patient_number, char filename[], patient patients[]);
void output_patient_data(int patient_number, char filename[], patient patients[]);
void sort_patients(int patient_number, char filename[], patient patients[]);



int main(){
    char filename[100];
    patient patients[HOSPITAL_SPACE];

    printf("Enter the file name: ");
    gets(filename);
//    input_patient (1, filename, patients);
//output_patient_data(6, filename, patients);
    sort_patients(6, filename, patients);
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
        printf("Enter patient no %d's name: ", i + 1);
        gets(patients[i].name);

        printf("Enter patient's age: ");
        scanf("%d", &patients[i].age);

        printf("Enter patient's status: ");
        scanf("%d", &patients[i].patient_status);
        if (patients[i].patient_status <= 5)
            patients[i].risky = 0;
        else
            patients[i].risky = 1;

        fflush(stdin);

        fprintf(patient_data, "%s, %d, %d, %d\n", patients[i].name, patients[i].age, patients[i].patient_status, patients[i].risky);
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
        strcpy(patients[i].name, ptr);

        ptr = strtok(NULL, ",");

        patients[i].age = atoi(ptr);


        ptr = strtok(NULL, ",");
        patients[i].patient_status = atoi(ptr);

        ptr = strtok(NULL, ",");
        patients[i].risky = atoi(ptr);

    }

    printf("%10s%5c%3s%5c%6s%5c%4s\n", "Name", ' ', "Age", ' ', "Status", ' ', "Risky");
    for (i = 0; i < patient_number; i++){
        printf("%10s%5c%3d%5c%4d%7c%3d\n", patients[i].name, ' ', patients[i].age,' ', patients[i].patient_status, ' ', patients[i].risky);
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
        strcpy(patients[i].name, ptr);

        ptr = strtok(NULL, ",");
        patients[i].age = atoi(ptr);


        ptr = strtok(NULL, ",");
        patients[i].patient_status = atoi(ptr);

        ptr = strtok(NULL, ",");
        patients[i].risky = atoi(ptr);

    }

    for (i = 0; i < patient_number - 1; i++){
        highest_idx = i;
        for (j = i + 1; j < patient_number; j++){
            if (patients[j].patient_status > patients[highest_idx].patient_status)
                highest_idx = j;

        }

        strcpy(temp.name, patients[i].name);
        strcpy(patients[i].name, patients[highest_idx].name);
        strcpy(patients[highest_idx].name, temp.name);

        temp.age = patients[i].age;
        patients[i].age = patients[highest_idx].age;
        patients[highest_idx].age = temp.age;

        temp.patient_status = patients[i].patient_status;
        patients[i].patient_status = patients[highest_idx].patient_status;
        patients[highest_idx].patient_status = temp.patient_status;

        temp.risky = patients[i].risky;
        patients[i].risky = patients[highest_idx].risky;
        patients[highest_idx].risky = temp.risky;

    }

    printf("%10s%5c%3s%5c%6s%5c%4s\n", "Name", ' ', "Age", ' ', "Status", ' ', "Risky");
    for (i = 0; i < patient_number; i++){
        printf("%10s%5c%3d%5c%4d%7c%3d\n", patients[i].name, ' ', patients[i].age,' ', patients[i].patient_status, ' ', patients[i].risky);
        }


}

