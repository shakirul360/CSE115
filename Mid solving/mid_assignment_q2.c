#include <stdio.h>
#include <math.h>
void angle_measures(int init_degree, int step_degree, int final_degree);
int main(){
    int n, i, j;
    /* declare variables and pass them to the function from here */
    printf("Please enter three numbers: ");
    scanf("%d %d %d", &n, &i, &j);
    printf(" %d %d %d\n", n, i, j);
    angle_measures(n, i, j);
}



void angle_measures(int init_degree, int step_degree, int final_degree){
    double rad, sinx, cosx, rad_deg = 0.017453;
    int i;
    printf("|***********************************************|\n");
    printf("|    degree    |  sine value  |  cosine value   |\n");
    printf("|***********************************************|\n");

    for (i = init_degree; i <= final_degree; i += step_degree){
        rad = i * rad_deg;
        sinx = sin(rad);
        cosx = cos(rad);
        printf("|     %-5d    |      %5.3f        |     %5.3f  |\n", i, sinx, cosx);
        printf("|***********************************************|\n");

    }


}
