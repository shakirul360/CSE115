
/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#include <stdio.h>
#include <string.h>
#define NAME_SIZE 50
#define GAMELIST_SIZE 5

/* structure definitions */

typedef struct{
    int gamenum;
    char fav_games[GAMELIST_SIZE][NAME_SIZE];
} Gamer;

typedef struct{

    char game_name[NAME_SIZE];
    int count;

} game_count;


void sort(game_count gamelist[], int gamelist_pointer);

int main(){
    Gamer players[5];
    game_count gamelist[20];

    int i, j, x, gamelist_pointer = 0, flag = 0;

    /* taking input of the players and their data and checking if the game exists in gamelist structure array*/

    for (i = 0; i < 5; i++){
        printf("Player number %d\n", i + 1);
        printf("Enter the number of games: ");
        scanf("%d", &players[i].gamenum);
        for (j = 0; j < players[i].gamenum; j++){
            fflush(stdin);
            printf("Enter game number %d: ", j + 1);
            gets(players[i].fav_games[j]);

            /*checking to see if the game already exists in gamelist. */
            for (x = 0; x < 20; x++){
                if (strcmp(gamelist[x].game_name, players[i].fav_games[j]) == 0){
                    flag = 1;
                    gamelist[x].count += 1;
                    break;
                }
            }
            if (flag == 0){
                    strcpy(gamelist[gamelist_pointer].game_name, players[i].fav_games[j]);
                    gamelist[gamelist_pointer].count = 1;
                    gamelist_pointer += 1;

            }
            flag = 0;

        }
        printf("\n");

    }
    /* sorting the gamelist in descending order */

    sort(gamelist, gamelist_pointer);

    /* printing gamelist array name and count */

    for (i = 0; i < gamelist_pointer; i++){
        printf("%s %d\n", gamelist[i].game_name, gamelist[i].count);
    }


    return 0;
}


void sort(game_count gamelist[], int gamelist_pointer){
    int i, j, temp_count;
    char tempname[NAME_SIZE];

    for (i = 0; i < gamelist_pointer - 1; i++){
        int highest_idx = i;

        for(j = i + 1; j < gamelist_pointer; j++){
            if (gamelist[i].count < gamelist[j].count)
                highest_idx = j;
        }
        strcpy(tempname, gamelist[i].game_name);
        strcpy(gamelist[i].game_name, gamelist[highest_idx].game_name);
        strcpy(gamelist[highest_idx].game_name, tempname);
        temp_count = gamelist[i].count;
        gamelist[i].count = gamelist[highest_idx].count;
        gamelist[highest_idx].count = temp_count;
    }

}

