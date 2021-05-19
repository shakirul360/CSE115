/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

typedef struct{
    int laptopID;
    char name[50];
    int price;
    int ram;
    float cpuSpeed;
    int gpuMemory;
} Laptop;


void changeRam(Laptop laptops[], int size, int laptopID, int newRam);

int main(){
    Laptop laptops[3];
    int i;
    FILE *datafile = fopen("laptops.txt", "a");

    for (i = 0; i < 3; i++){
        printf("Please enter the laptop ID: ");
        scanf("%d", &laptops[i].laptopID);
        fflush(stdin);
        printf("Please enter the name: ");
        gets(laptops[i].name);
        printf("Enter the price: ");
        scanf("%d", &laptops[i].price);
        printf("Enter the ram size: ");
        scanf("%d", &laptops[i].ram);
        printf("Enter the cpu Speed: ");
        scanf("%f", &laptops[i].cpuSpeed);
        printf("Enter the gpu Memory: ");
        scanf("%d", &laptops[i].gpuMemory);

        fprintf(datafile,"%d\n", laptops[i].laptopID);
        fprintf(datafile,"%s\n", laptops[i].name);
        fprintf(datafile,"%d\n", laptops[i].price);
        fprintf(datafile,"%d\n", laptops[i].ram);
        fprintf(datafile,"%f\n", laptops[i].cpuSpeed);
        fprintf(datafile,"%d\n", laptops[i].gpuMemory);

    }

    changeRam(laptops, 3, 3, 15);
    return 0;
}

void changeRam(Laptop laptops[], int size, int laptopID, int newRam){
    /* changeRam requires the laptops[] array already contains the data read from the file */
    int i;
    FILE *datafile = fopen("laptops.txt", "w"); /* using w to reopen the file */
    for (i = 0; i < size; i++){
        if (laptops[i].laptopID == laptopID){
            printf("Matched!\n");
            laptops[i].ram = newRam;
        }
    }
    for (i = 0; i < size; i++){
        fprintf(datafile,"%d\n", laptops[i].laptopID);
        fprintf(datafile,"%s\n", laptops[i].name);
        fprintf(datafile,"%d\n", laptops[i].price);
        fprintf(datafile,"%d\n", laptops[i].ram);
        fprintf(datafile,"%f\n", laptops[i].cpuSpeed);
        fprintf(datafile,"%d\n", laptops[i].gpuMemory);
    }
}

//loop through the array and fix the ram
// write to the file again
