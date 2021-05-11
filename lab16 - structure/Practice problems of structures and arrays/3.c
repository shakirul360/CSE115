/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#include <stdio.h>
#define NAME_SIZE 10
#define ARR_SIZE 5
typedef struct{
    char name[NAME_SIZE];
    float rating;
    int totalfans;
} Movie_Stars_t;

int main(){
    Movie_Stars_t stars[ARR_SIZE], temp;
    strcpy(stars[0].name, "Leeon");
    stars[0].rating = 0.0;
    stars[0].totalfans = 0;

    strcpy(stars[1].name, "Messi");
    stars[1].rating = 0.0;
    stars[1].totalfans = 0;

    strcpy(stars[2].name, "Ronaldo");
    stars[2].rating = 0.0;
    stars[2].totalfans = 0;

    strcpy(stars[3].name, "Leasan");
    stars[3].rating = 0.0;
    stars[3].totalfans = 0;

    strcpy(stars[4].name, "Hazard");
    stars[4].rating = 0.0;
    stars[4].totalfans = 0;


    int n = 5, i, j;

    for (i = 0; i < n; i++){
        printf("Enter Review: ");
        scanf("%s %f", temp.name, &temp.rating);
        for (j = 0; j < ARR_SIZE; j++){
            if (strcmp(temp.name, stars[j].name) == 0){
                stars[j].rating += temp.rating;
                stars[j].totalfans += 1;
                break;
            }
        }
    }
    for (i = 0; i < ARR_SIZE; i++){
        if (stars[i].totalfans == 0)
            continue;
        stars[i].rating = stars[i].rating / stars[i].totalfans;
    }

    for (i = 0; i < ARR_SIZE; i++){
        printf("%s %.2f %d\n",stars[i].name, stars[i].rating, stars[i].totalfans);
    }
    return 0;
}
