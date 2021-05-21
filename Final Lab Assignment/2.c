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

void printPhoneInfo(SmartPhoneType phoneType);

int main(){
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
