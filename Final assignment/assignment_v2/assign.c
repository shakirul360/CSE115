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
    float oxygen_level;

} patient;

void input_patient(int patient_number, char filename[], patient patients[]);
void output_patient_data(int patient_number, char filename[], patient patients[]);
void sort_patients(int patient_number, char filename[], patient patients[]);



int main(){
    char filename[100];
    patient patients[HOSPITAL_SPACE];

    printf("Enter the file name: ");
    gets(filename);
    //input_patient(4, filename, patients);
    output_patient_data(4, filename, patients);
//    sort_patients(4, filename, patients);
    //puts(filename);
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

        printf("Enter patient's Oxygen Level: ");
        scanf("%f", &patients[i].oxygen_level);
        fflush(stdin);

        //fprintf(patient_data, "\n%s\n%d\n%d\n%.2f\n", patients[i].name, patients[i].age, patients[i].patient_status, patients[i].oxygen_level);
        fprintf(patient_data,"%s\n",patients[i].name);
        fprintf(patient_data,"%d\n",patients[i].age);
        fprintf(patient_data,"%d\n",patients[i].patient_status);
        fprintf(patient_data,"%.2f\n",patients[i].oxygen_level);
    }
    fclose(patient_data);
}

void output_patient_data(int patient_number, char filename[], patient patients[]){
    int i;
    char file_str[100], line[300];;
    char *ptr;

    strcpy(file_str, filename);
    strcat(file_str, ".txt");
    FILE *patient_data = fopen(file_str, "r");
    if (patient_data == NULL){
        printf("Could not open the file!\n");
        return;
    }
    for (i = 0; i < patient_number; i++){
        fgets(patients[i].name, NAME_SIZE, patient_data);
        puts(patients[i].name);
        fscanf(patient_data, "%d\n", &patients[i].age);
        fscanf(patient_data, "%d\n", &patients[i].patient_status);
        fscanf(patient_data, "%f\n", &patients[i].oxygen_level);
        fflush(stdin);
    }

//        printf("%10s%5c%3s%5c%6s%5c%4s\n", "Name", ' ', "Age", ' ', "Status", ' ', "Oxy_Level");
//        for (i = 0; i < patient_number; i++){
//            printf("%10s%5c%3d%5c%4d%7c%.2f\n", patients[i].name, ' ', patients[i].age,' ', patients[i].patient_status, ' ', patients[i].oxygen_level);
//        }
        for (i = 0; i < patient_number; i++){
            printf("%10s%5c%3d%5c%4d%7c%.2f\n", patients[i].name, ' ', patients[i].age,' ', patients[i].patient_status, ' ', patients[i].oxygen_level);
        }
    }

