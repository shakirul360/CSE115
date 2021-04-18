#include<stdio.h>


int main(){
    int burger, pizza, fries, water;
    float bp, pp, fp, wp, sum, vat, total;



    printf("                       === LIST OF PRODUCTS ===                       "); //70
    printf("\n");
    printf("%20s ____________________________\n", "");
    printf("%20s |%s", "", "Product");
    printf("%6s|", "");
    printf("       Price|\n");

    printf("%20s ____________________________\n", "");
    printf("%20s |%s", "", "Burger");
    printf("%7s|", "");
    printf("       180tk|\n");

    printf("%20s ____________________________\n", "");
    printf("%20s |%s", "", "Pizza");
    printf("%8s|", "");
    printf("       650tk|\n");

    printf("%20s ____________________________\n", "");
    printf("%20s |%s", "", "Fries");
    printf("%8s|", "");
    printf("        60tk|\n");

    printf("%20s ____________________________\n", "");
    printf("%20s |%s", "", "Water");
    printf("%8s|", "");
    printf("        15tk|\n");
    printf("%20s ____________________________\n", "");


    printf("please enter the number of burger, pizza, fries and water :> ");
    scanf("%d %d %d %d", &burger, &pizza, &fries, &water);
    printf("\n");
    printf("=== Order ===\n");

    printf("\n");
    printf("Burger: %d\n", burger);
    printf("Pizza : %d\n", pizza);
    printf("Fries : %d\n", fries);
    printf("Water : %d\n", water);
    printf("\n");

    bp = burger  * 180;
    pp = pizza * 650;
    fp = fries * 60;
    wp = water * 15;
    sum = bp + pp + fp + wp;
    vat = sum * 0.15;
    total = sum + vat;


    printf("                     === RECIEPT ===                       ");
    printf("\n");
    printf("\t________________________________________\n");
    printf("\t|Product     |  Quantity  |       Price|\n");

    printf("\t________________________________________\n");
    printf("\t|Burger      |     %d     |     %.2ftk|\n",burger, bp);

    printf("\t________________________________________\n");
    printf("\t|Pizza       |     %d     |     %.2ftk|\n",pizza, pp);

    printf("\t________________________________________\n");
    printf("\t|Fries       |     %d     |     %.2ftk|\n",fries, fp);

    printf("\t________________________________________\n");
    printf("\t|Water       |     %d     |      %.2ftk|\n",water, wp);

    printf("\t________________________________________\n");
    printf("\t|VAT(15%)     |                   %.2f|\n",vat);

    printf("\t________________________________________\n");
    printf("\t|Total       |                  %.2f|\n",total);
    printf("\t________________________________________\n");


    return 0;
}
