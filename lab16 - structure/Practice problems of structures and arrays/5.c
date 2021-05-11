/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>
typedef struct {

    char name[20];
    int age;
    char country[20];
    char Position[20];
    double Salary;
    double Rating;

} BarcelonaPlayer;

void highestPaidPlayer( BarcelonaPlayer *pl, int size);
void findPlayers( BarcelonaPlayer *pl, int size);
void printPlayers(BarcelonaPlayer *p1, int size);
BarcelonaPlayer get_input();


int main(){
    BarcelonaPlayer array[3];
    int size = 3, i;

    for (i = 0; i < size; i++){
        array[i] = get_input();
    }
    printf("\n");

    //printPlayers(array, size);
    highestPaidPlayer(array, size);
    findPlayers(array, size);

    return 0;
}


void highestPaidPlayer(BarcelonaPlayer *pl, int size){
    double highest_sal = pl[0].Salary;
    int highest_sal_idx = 0, i;

    for (i = 1; i < size; i++){
        if (pl[i].Salary > highest_sal){
            highest_sal = pl[i].Salary;
            highest_sal_idx = i;
        }
    }
    printf("The player with the highest salary is: %s, %d, %s, %s, %d, %lf\n",
            pl[highest_sal_idx].name, pl[highest_sal_idx].age, pl[highest_sal_idx].country, pl[highest_sal_idx].Position, pl[highest_sal_idx].Salary, pl[highest_sal_idx].Rating);
}


void findPlayers( BarcelonaPlayer *pl, int size){
    int i;
    printf("Players from argentina: ");
    for (i = 0; i < size; i++){
        if (strcmp(pl[i].country, "Argentina") == 0){
            printf("%s, %d, %s, %s, %d, %lf\n", pl[i].name, pl[i].age, pl[i].country, pl[i].Position, pl[i].Salary, pl[i].Rating);
        }
    }
}



BarcelonaPlayer get_input(){
    BarcelonaPlayer player;

    printf("Please enter the name of the player: ");
    gets(player.name);
    printf("Enter the age of %s: ", player.name);
    scanf("%d", &player.age);
    fflush(stdin);
    printf("%s's country: ", player.name);
    gets(player.country);
    printf("%s's Position: ", player.name);
    gets(player.Position);
    printf("%s's salary: ", player.name);
    scanf("%d", &player.Salary);
    printf("%s's rating: ", player.name);
    scanf("%lf", &player.Rating);
    fflush(stdin);

    return player;
}


void printPlayers(BarcelonaPlayer *p1, int size){
    int i;

    for (i = 0; i < size; i++){
        printf("%s, %d, %s, %s, %d, %lf\n", p1[i].name, p1[i].age, p1[i].country, p1[i].Position, p1[i].Salary, p1[i].Rating);
    }
}
