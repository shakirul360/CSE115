/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#define DATA_SIZE 100
#define USERNAME_SIZE 100
#include <stdio.h>
#include <string.h>
void login(char usernmames[DATA_SIZE][USERNAME_SIZE], int pass_key[], int  *data_count);
int signup(char usernmames[DATA_SIZE][USERNAME_SIZE], int pass_key[], int  *data_count);

int main(){
    int select, data_count = 1, sign_conf, i = 0;
    char usernames[DATA_SIZE][USERNAME_SIZE], temp[USERNAME_SIZE];
    int pass_key[DATA_SIZE];


    FILE *users, *passes;

    users = fopen("usernames.txt", "r");
    passes = fopen("passwords.txt", "r");

    int status = fgets(users, "%s", temp);
    while ( status == 1){
        printf("%s", temp);
        strcpy(usernames[i], temp);
        i++;
        status = fgets(users, "%s", temp);
    }
    for (i = 0; usernames[i]; i++){
        printf("%s", usernames[i]);
    }

    printf("Welcome to thoughtbook!\n");
    printf("|_____________________|\n");
    printf("|1) Login | 2)Sign up |\n");
    printf("|_____________________|\n");
    scanf("%d", &select);

    if (select == 1){
       login(usernames, pass_key, &data_count);
    }
    else{
        sign_conf = signup(usernames, pass_key, &data_count);
        if (sign_conf == 1){
            login(usernames, pass_key, &data_count);
       }
    }
    return 0;
}

void login(char usernames[DATA_SIZE][USERNAME_SIZE], int pass_key[], int *data_count){
    char user[USERNAME_SIZE]; /* stores username */
    int pass, i, log_flag = 0;

    printf("Enter username: ");
    scanf("%s", user);
    puts(user);
    printf("Enter password: ");
    scanf("%d", &pass);

    for (i = 0; i < *data_count; i++){
        if (strcmp(usernames[i], user) == 0){
            if (pass_key[i] == pass){
                log_flag = 1;
                break;
            }
        }
    }
    if (log_flag == 0){
        printf("Wrong username or password!");
    } else if (log_flag == 1){
        printf("Successfully logged in!\n");
    }
}

int signup(char usernames[DATA_SIZE][USERNAME_SIZE], int pass_key[], int  *data_count){
    char user[USERNAME_SIZE];
    int pass, i, flag = 0;
    printf("%5cCreate an account!\n", ' ');
    printf("Enter a username: ");
    scanf("%s", user);
    for (i = 0; i < *data_count; i++){
        if (strcmp(user, usernames[i]) == 0){
            printf("Username already exists! Use a unique username.\n");
            printf("Enter a username: ");
            scanf("%s", user);
        }
    }
    printf("Enter a password for your account: \n");
    scanf("%d", &pass);

    strcpy(usernames[*data_count], user);
    pass_key[*data_count] = pass;
    *data_count += 1;

    flag = 1;
    return flag;



}

