/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

void printPhoneInfo(SmartPhoneType phoneType);
void countryWisePhone( SmartPhoneType mobileList[], int size, char *country);

int main(){
    printf("Hello World");
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


void countryWisePhone(SmartPhoneType mobileList[], int size, char *country){
    int i;

    for (i = 0; i < size; i++){
        //printf("%s%s", mobileList[i].userCountry, country);
        if (strcmp(mobileList[i].userCountry, country) == 0){
            printPhoneInfo(mobileList[i]);
        }
    }

}
