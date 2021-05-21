 /* Done by Shakirul Islam leeon
    student ID - 2111728642
    CSE 115.7, Instructor - FMA, MLE
    Final Project using structures, array and files.
*/

#include <stdio.h>
#include <string.h>
#define DATA_SIZE 100
#define USERNAME_SIZE 100

typedef struct{

    char name[USERNAME_SIZE];
    int pass;

} user;

void signup(user users[], int *user_count, FILE *database); /* Creates an account and a personal Thought file for the user */
int load_database(user users[], FILE *database);            /* loads up the username and passwords of the users from the database.txt file to a structure array and returns the user count */
void login(user users[], int user_count, FILE *database);   /* uses the inputted username and password to match with array's data to log the user in */
void print_users(user users[], int user_count);             /* prints the users and their information using the structure array, user. Only for admin purposes */
void create_thought(char filename[]);                       /* Creates thoughts of the logged in users and saves it to their personal Thought File */
void thought_print(char filename[]);                        /* prints the thoughts of the logged in user by reading the personal Thought file */

int main(){
    FILE *database = fopen("database.txt", "a+");

    user users[100];
    int user_count, log_flag, select;

    /* loading the users from the database using the function, which returns the user_count */
    user_count = load_database(users, database);

    //print_users(users, user_count); /*Can be used only for admin purposes to check the users for the application */

     printf("%40c", ' ');
    printf("Welcome to thoughtbook!%20c\n", ' ');
    printf("%30c___________________________________________\n", ' ');
    printf("%30c|1)    Login     | 2)      Sign up        |\n", ' ');
    printf("%30c___________________________________________\n", ' ');
    printf("%30c", ' ');
    scanf("%d", &select);

    if (select == 1){
        login(users, user_count, database);
    } else if (select == 2){
        signup(users, &user_count, database);
    }


    fclose(database);

    return 0;
}

void login(user users[], int user_count, FILE *database){
    char filename[100];
    int i, log_flag = 0, read_create_thought,  sign_flag;
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
                printf("%30cSuccessfully logged in!\n", ' ');
                log_flag = 1;
                break;
            }
        }
    }

    if (log_flag == 1){
        printf("%30cWould you like to create thoughts or read them?\n%30c1 for Create 2 for Read: ", ' ', ' ');
        scanf("%d", &read_create_thought);
        strcpy(filename, temp.name);
        strcat(filename, ".txt");
        if (read_create_thought == 1){
            create_thought(filename);
        } else if (read_create_thought == 2){
            thought_print(filename);
        }
    }

    else if (log_flag == 0){
        printf("%30cWrong username or password!\n", ' ');
        printf("%30cWould you like to create an account?1 for yes 0 for no: ", ' ');
            scanf("%d", &sign_flag);
            if (sign_flag == 1)
                signup(users, &user_count, database);
    }




}

void signup(user users[], int *user_count, FILE *database){

    char filename[100];

    printf("%30cPlease enter your desired username(must be one word): ", ' ');
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
    strcpy(filename, users[*user_count].name);
    strcat(filename, ".txt");
    fopen(filename,"w");

    *user_count = *user_count + 1;
    login(users, user_count, database);


}

int load_database(user users[], FILE *database){

    int i = 0;

    while ((fscanf(database, "%s", users[i].name)) == 1){
        fscanf(database, "%d", &users[i].pass);
        i++;
    }
    return i;

}

void print_users(user users[], int user_count){
    int i;
    char username[USERNAME_SIZE];
    int pass;

    printf("printing from structure array: \n");
    for (i = 0; i < user_count; i++){
        printf("%s %d\n", users[i].name, users[i].pass);
    }

}


void create_thought(char filename[]){
    int query;
    char line[200];
    FILE *thoughtlist = fopen(filename, "a");
    if(thoughtlist == NULL){
        printf("Can't load Thought File!\n");
        return;
    }
    fflush(stdin);
    printf("%30cWhat's on your mind?\n",' ');
    printf("%30c___________________________________________\n%30c", ' ', ' ');
    gets(line);

    fprintf(thoughtlist,"%s\n", line);
    printf("%30cYour thought has been successfully entered!\n", ' ');
    printf("%30c___________________________________________\n", ' ');

    fclose(thoughtlist);

    printf("%30cWould you like to read your thoughts?\n%30c1 for yes: ", ' ', ' ');
    scanf("%d", &query);
    if (query == 1){
       thought_print(filename);
    } else{
        printf("%30cThank you for using ThoughtBook!", ' ');
        fclose(filename);
    }
}


void thought_print(char filename[]){
    char line[200];
    FILE *thoughtlist = fopen(filename, "r");
    if(thoughtlist == NULL){
      printf("Error!");
      exit(1);
    }
    printf("%30cYour thoughts till now: \n", ' ');
    printf("%30c_______________________\n", ' ');
    char *status = fgets(line, 200, thoughtlist);
    while (status != NULL){
        printf("%30c", ' ');
        puts(line);
        printf("%30c___________________________________________\n", ' ');
        status = fgets(line, 200, thoughtlist);
    }
    fclose(thoughtlist);
}
