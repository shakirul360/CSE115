/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

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

void deletePhone(SmartPhoneType mobileList[], int size, int phoneID);

int main(){
    printf("Hello World");
    return 0;
}

void deletePhone(SmartPhoneType mobileList[], int size, int phoneID){
    int i, j, found_flag = 0;
    FILE *mobile_data = fopen("mobileInfo.txt", "w");

    for (i = 0; i < size; i++){
        if (mobileList[i].phoneID == phoneID){
            found_flag = 1;
            for (j = i; j < size; j++){
                mobileList[j] = mobileList[j + 1];
            }
        }
    }

    for (i = 0; i < size - 1; i++){
        fprintf(mobile_data, "%d,%s,%d,%d,%.2f,%d,%s,%d,%s",
                 mobileList[i].phoneID, mobileList[i].phoneName, mobileList[i].price, mobileList[i].ramMemory,
                  mobileList[i].cpuSpeed, mobileList[i].gpuMemory, mobileList[i].userName,
                   mobileList[i].userPhoneNo, mobileList[i].userCountry);
    }
    if (found_flag == 1)
        printf("Sucessfully deleted!\n");
    fclose(mobile_data);

}
