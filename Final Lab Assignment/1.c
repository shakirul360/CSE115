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

void input_mobile(int size, SmartPhoneType mobileList[], char filename[]);

int main(){
    int size = 5;
    char filename[] = "mobileInfo.txt";
    SmartPhoneType mobileList[size];

    input_mobile(size, mobileList, filename);


    return 0;
}

void input_mobile(int size, SmartPhoneType mobileList[], char filename[]){
    int i;

    FILE *mobile_data = fopen(filename, "w");

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

}
/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

int main(){
    printf("Hello World");
    return 0;
}
