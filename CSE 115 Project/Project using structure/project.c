/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#include <string.h>
#define DATA_SIZE 100
#define USERNAME_SIZE 100

typedef struct{

    char name[USERNAME_SIZE];
    int pass;

} user;

void signup(user users[], int *user_count, FILE *database);
int load_database(user users[], FILE *database);
int login(user users[], int user_count, FILE *database);
void print_users(user users[], FILE *database, int user_count);

int main(){
    FILE *database = fopen("database.txt", "a+");

    user users[100];
    int user_count, log_flag, sign_flag, select;

    /* loading the users from the database using the function, which returns the user_count */
    user_count = load_database(users, database);

     printf("%40c", ' ');
    printf("Welcome to thoughtbook!%20c\n", ' ');
    printf("%30c___________________________________________\n", ' ');
    printf("%30c|1)    Login     | 2)      Sign up        |\n", ' ');
    printf("%30c___________________________________________\n", ' ');
    printf("%30c", ' ');
    scanf("%d", &select);

    if (select == 1){
        log_flag = login(users, user_count, database);
        if (log_flag == 0){
            printf("Would you like to create an account?1 for yes 0 for no: ");
            scanf("%d", &sign_flag);
            if (sign_flag == 1)
                signup(users, &user_count, database);
        }
    } else if (select == 2){
        signup(users, &user_count, database);
    }


    fclose(database);

    return 0;
}

int login(user users[], int user_count, FILE *database){

    int i, log_flag = 0;
    user temp;
    printf("%30cEnter your credentials to log in to ThoughtBook!\n", ' ');
    fflush(stdin);
    printf("%30cEnter your username: ", ' ');
    gets(temp.name);
    printf("%30cEnter password: ", ' ');
    scanf("%d", &temp.pass);

    for (i = 0; i < user_count; i++){
        if (strcmp(temp.name, users[i].name) == 0){
            if (temp.pass == users[i].pass){
                printf("%30cSuccessfully logged in!", ' ');
                log_flag = 1;
                break;
            }
        }
    }
    if (log_flag == 0)
        printf("%30cWrong username or password!\n", ' ');
    return log_flag;

}

void signup(user users[], int *user_count, FILE *database){

    char filename[100] = "./User_thoughts/";

    printf("%30cPlease enter your desired username: ", ' ');
    fflush(stdin);
    gets(users[*user_count].name);
    for (int i = 0; i < *user_count; i++){
        if (strcmp(users[i].name, users[*user_count].name) == 0){
            printf("%30cUsername already exists! Please enter another username.\n", ' ');
            printf("%30c", ' ');
            fflush(stdin);
            gets(users[*user_count].name);
        }
    }
    printf("%30cPlease enter your password: ", ' ');
    scanf("%d", &users[*user_count].pass);
    fflush(stdin);

    fprintf(database,"\n%s", users[*user_count].name);
    fprintf(database,"\n%d", users[*user_count].pass);

    /* Creating the file string to open the user's personal thoughts file */
    strcat(filename, users[*user_count].name);
    strcat(filename, ".txt");
    fopen(filename,"w");

    *user_count = *user_count + 1;


}

int load_database(user users[], FILE *database){

    int i = 0;

    while ((fscanf(database, "%s", users[i].name)) == 1){
        fscanf(database, "%d", &users[i].pass);
        i++;
    }
    return i;

}

void print_users(user users[], FILE *database, int user_count){
    int i;
    char username[USERNAME_SIZE];
    int pass;

    printf("printing from structure array: \n");
    for (i = 0; i < user_count; i++){
        printf("%s %d\n", users[i].name, users[i].pass);
    }

}
