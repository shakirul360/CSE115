#include<stdio.h>

int main(){
    float speed = 2.99792e+8;
    float grav = 6.67E-11;
    float elect = 1.602176e-19;
    float mo_mass = 1e-003;
    float euler = 02.72;
    float golden = 0001.618;

    printf("\t*** CONSTANT OF PHYSICS AND MATHEMATICS ***\n");
    printf("\t-------------------------------------------\n");
    printf("\t|Constant                   |");
    printf("        Value|\n");

    printf("\t-------------------------------------------\n");
    printf("\t|Speed of Light             ");
    printf("| %.5e|\n", speed);

    printf("\t-------------------------------------------\n");
    printf("\t|Gravitational Constant     ");
    printf("|    %.2E|\n", grav);

    printf("\t-------------------------------------------\n");
    printf("\t|Electron Volt              ");
    printf("| %.5e|\n", elect);

    printf("\t-------------------------------------------\n");
    printf("\t|Molar Mass constant        ");
    printf("|%0e|\n", mo_mass);

    printf("\t-------------------------------------------\n");
    printf("\t|Euler Number               ");
    printf("|        %05.2f|\n", euler);

    printf("\t-------------------------------------------\n");
    printf("\t|Golden Ratio               ");
    printf("|     %08.3f|\n", golden);
    printf("\t-------------------------------------------\n");

    return 0;
}
