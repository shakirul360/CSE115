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
    int user_count, log_flag, sign_flag;

    /* loading the users from the database using the function, which returns the user_count */
    user_count = load_database(users, database);


    print_users(users, database, user_count);
    log_flag = login(users, user_count, database);
    if (log_flag == 0){
        printf("Would you like to create an account?1 for yes 0 for no: ");
        scanf("%d", &sign_flag);
        if (sign_flag == 1)
            signup(users, &user_count, database);
    }

    fclose(database);

    return 0;
}

int login(user users[], int user_count, FILE *database){

    int i, log_flag = 0;
    user temp;

    printf("Enter your username: ");
    gets(temp.name);
    printf("Enter password: ");
    scanf("%d", &temp.pass);

    for (i = 0; i < user_count; i++){
        if (strcmp(temp.name, users[i].name) == 0){
            if (temp.pass == users[i].pass){
                printf("Successfully logged in!");
                log_flag = 1;
                break;
            }
        }
    }
    if (log_flag == 0)
        printf("Wrong username or password!\n");
    return log_flag;

}

void signup(user users[], int *user_count, FILE *database){

    printf("Please enter your desired username: ");
    fflush(stdin);
    gets(users[*user_count].name);
    printf("Please enter your password: ");
    scanf("%d", &users[*user_count].pass);
    fflush(stdin);

    fprintf(database,"\n%s", users[*user_count].name);
    fprintf(database,"\n%d", users[*user_count].pass);

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
