/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <stdlib.h>

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

void printPhoneInfo(SmartPhoneType phoneType);
void getHighestPricePhone(SmartPhoneType mobileList[], int size, SmartPhoneType *highestPricePhone);

int main(){
    int size = 5;
    char filename[] = "mobileInfo.txt";
    SmartPhoneType mobileList[size];
    SmartPhoneType highestPricePhone;


    getHighestPricePhone(mobileList, size, &highestPricePhone);
    printf("Data of Highest Priced phone: \n");
    printPhoneInfo(highestPricePhone);

    return 0;
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
