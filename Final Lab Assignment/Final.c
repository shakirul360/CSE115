/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

typedef struct {

    int phoneID; // unique ID will start from 1 up to N.
    char phoneName[50];
    int price;
    int ramMemory;
    float cpuSpeed;
    int gpuMemory;
    char userName[50];
    int userPhoneNo;
    char userCountry[50];

} SmartPhoneType;

void input_mobile(int size, SmartPhoneType mobileList[], char filename[]);
void load_info(int size, SmartPhoneType mobileList[], char filename[]);   /* used as a helper function to debug, as inputting the same data multiple time is a hassle */
void printPhoneInfo(SmartPhoneType phoneType);
void getHighestPricePhone(SmartPhoneType mobileList[], int size, SmartPhoneType *highestPricePhone);
void countryWisePhone( SmartPhoneType mobileList[], int size, char *country);
void deletePhone(SmartPhoneType mobileList[], int size, int phoneID);


int main(){
    int size = 5;
    char filename[] = "mobileInfo.txt";
    SmartPhoneType mobileList[size];
    SmartPhoneType highestPricePhone;

    /* Question 1 */
    input_mobile(size, mobileList, filename);


    //load_info(size, mobileList, filename); /* used as a helper function to debug, as inputting the same data multiple time is a hassle */

    /* Question 2 */
    printf("\n-------Printing all the structured phone data on array: --------\n\n");
    for (int i = 0; i < size; i++){
        printPhoneInfo(mobileList[i]);
        printf("\n");
    }

    /* Question 3 */
    getHighestPricePhone(mobileList, size, &highestPricePhone);
    printf("--------Data of Highest Priced phone: --------\n");
    printPhoneInfo(highestPricePhone);

    /* Question 4 */

    printf("---------Search by Country----------\n\n");
    countryWisePhone(mobileList, size, "America");
    printf("\n");

    /* Question 5 */
    printf("-------Deleting the ID number passed: -------\n");
    deletePhone(mobileList, size, 1);

    return 0;
}

void input_mobile(int size, SmartPhoneType mobileList[], char filename[]){
    int i;

    FILE *mobile_data = fopen(filename, "w");

    if (mobile_data == NULL){
        printf("Could not open the file!\n");
        return;
    }

    for (i = 0; i < size; i++){

        /* Reading data from user */
        printf("Enter phone  ID: ");
        scanf("%d", &mobileList[i].phoneID);
        printf("Enter phone name: ");
        fflush(stdin);
        gets(mobileList[i].phoneName);
        printf("Enter Price: ");
        scanf("%d", &mobileList[i].price);
        printf("Enter RAM Size: ");
        scanf("%d", &mobileList[i].ramMemory);
        printf("Enter cpu Speed: ");
        scanf("%f", &mobileList[i].cpuSpeed);
        printf("Enter GPU Size: ");
        scanf("%d", &mobileList[i].gpuMemory);
        printf("Enter User Name: ");
        fflush(stdin);
        gets(mobileList[i].userName);
        printf("Enter user phone No.: ");
        scanf("%d", &mobileList[i].userPhoneNo);
        printf("Enter User Country: ");
        fflush(stdin);
        gets(mobileList[i].userCountry);
        //d,s,d,d,f,d,s,d,s
        /* printing data to mobileInfo.txt */

        fprintf(mobile_data, "%d,%s,%d,%d,%.2f,%d,%s,%d,%s\n",
                 mobileList[i].phoneID, mobileList[i].phoneName, mobileList[i].price, mobileList[i].ramMemory,
                  mobileList[i].cpuSpeed, mobileList[i].gpuMemory, mobileList[i].userName,
                   mobileList[i].userPhoneNo, mobileList[i].userCountry);
        printf("\n");
    }
    fclose(mobile_data);

}

void load_info(int size, SmartPhoneType mobileList[], char filename[]){
    int i;
    char line[300], *ptr;
    FILE *mobile_data = fopen(filename, "r");

    if (mobile_data == NULL){
        printf("Could not open the file!\n");
        return;
    }

    for (i = 0; i < size; i++){
        fgets(line, 300, mobile_data);

        ptr = strtok(line, ",");
        mobileList[i].phoneID = atoi(ptr);

        ptr = strtok(NULL, ",");
        strcpy(mobileList[i].phoneName, ptr);


        ptr = strtok(NULL, ",");
        mobileList[i].price = atoi(ptr);

        ptr = strtok(NULL, ",");
        mobileList[i].ramMemory = atoi(ptr);

        ptr = strtok(NULL, ",");
        mobileList[i].cpuSpeed = atof(ptr);

        ptr = strtok(NULL, ",");
        mobileList[i].gpuMemory = atoi(ptr);

        ptr = strtok(NULL, ",");
        strcpy(mobileList[i].userName, ptr);

        ptr = strtok(NULL, ",");
        mobileList[i].userPhoneNo = atoi(ptr);

        ptr = strtok(NULL, ",");
        strcpy(mobileList[i].userCountry, ptr);


    }
    fclose(mobile_data);
}

void printPhoneInfo(SmartPhoneType phoneType){
    printf("ID: %d\n", phoneType.phoneID);
    printf("Phone Name: %s\n", phoneType.phoneName);
    printf("Price: %d\n", phoneType.price);
    printf("RAM Memory: %d\n", phoneType.ramMemory);
    printf("CPU Speed: %.2f\n", phoneType.cpuSpeed);
    printf("GPU Memory: %d\n", phoneType.gpuMemory);
    printf("User's Name: %s\n", phoneType.userName);
    printf("User Phone Number: %d\n", phoneType.userPhoneNo);
    printf("User's Country: %s\n", phoneType.userCountry);
}

void getHighestPricePhone(SmartPhoneType mobileList[], int size, SmartPhoneType *highestPricePhone){
    int i, highest_idx = 0;

    for (i = 1; i < size; i++){
        if (mobileList[i].price > mobileList[highest_idx].price){
            highest_idx = i;
        }
    }

    *highestPricePhone = mobileList[highest_idx];
}

void countryWisePhone(SmartPhoneType mobileList[], int size, char *country){
    int i;

    for (i = 0; i < size; i++){
        if (strcmp(mobileList[i].userCountry, country) == 0){
            printPhoneInfo(mobileList[i]);
            printf("\n");
        }
    }

}


void deletePhone(SmartPhoneType mobileList[], int size, int phoneID){
    int i, j, found_flag = 0;
    FILE *mobile_data = fopen("mobileInfo.txt", "w"); /* Reopening the file to ensure the mobile data is removed even from the file if found */

    for (i = 0; i < size; i++){
        if (mobileList[i].phoneID == phoneID){
            found_flag = 1;
            for (j = i; j < size; j++){
                mobileList[j] = mobileList[j + 1];
            }
            size = size - 1;
            break;
        }
    }
    for (i = 0; i < size; i++){
        fprintf(mobile_data, "%d,%s,%d,%d,%.2f,%d,%s,%d,%s\n",
                 mobileList[i].phoneID, mobileList[i].phoneName, mobileList[i].price, mobileList[i].ramMemory,
                  mobileList[i].cpuSpeed, mobileList[i].gpuMemory, mobileList[i].userName,
                   mobileList[i].userPhoneNo, mobileList[i].userCountry);
    }
    if (found_flag == 1)
        printf("Sucessfully deleted!\n");
    else
        printf("No match for ID.\n");
    fclose(mobile_data);

}
