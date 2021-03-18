#include<stdio.h>

void draw_figure(void);
void draw_triangle(void);
void draw_rectangle(void);
void draw_intersect(void);
void draw_base(void);
//double get_average(int a, int b, int c);
void get_average(int a, int b, int c);

int main(){
    int a, b, c;
    double result;

    draw_figure();
    scanf("%d %d %d", &a, &b, &c);
    //result = get_average(a,b,c);
    //printf("the average of %d, %d, %d is %.2f", a, b, c, result);
    get_average(a,b,c);
    return 0;
}

void draw_figure(void){
    draw_triangle();
    draw_rectangle();
    draw_intersect();
}

void draw_triangle(void){
    //printf("   *\n");
    //printf("  *  *\n");
    //printf(" *    *\n");
    //printf("********\n");
    draw_intersect();
    draw_base();
}

void draw_rectangle(void){
    printf(" ******\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf(" ******\n");
}

void draw_intersect(void){
    printf("   *\n");
    printf("  *  *\n");
    printf(" *    *\n");

}

void draw_base(void){
    printf("********\n");
}

void get_average(a, b, c){
    double sum, avg;

    sum = a + b + c;
    avg = sum / 3;
    printf(" the average of %d, %d, %d is %.2f", a, b, c, avg);
}
