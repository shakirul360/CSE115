#include <stdio.h>


/*check data - 43 23 54 57 68 67 51 90 33 22 11 88 34 52 75 12 78 32 89 14 65 67 97 53 10 47 34 */

int main(){
    int speed, high_count, med_count, low_count;

    printf("speed of vehicles(in miles): ");
    while (scanf("%d", &speed) == 1){
        if (speed >= 90){
            high_count++;
            printf("car with %d speed is driving at a high speed.\n", speed);
        } else if (speed >= 50){
            med_count++;
            printf("car with %d speed is driving at a medium speed.\n", speed);
        } else if ( speed < 50){
            low_count++;
            printf("car with %d speed is driving at a low speed.\n", speed);
        }
    }
    printf("High speed cars: %d\n", high_count);
    printf("Medium speed cars: %d\n", med_count);
    printf("Low speed cars: %d\n", low_count);
    return 0;
}

