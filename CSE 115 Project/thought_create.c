/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
#define DATA_SIZE 100
#define USERNAME_SIZE 100

void login(char user_list[DATA_SIZE][USERNAME_SIZE], int pass_list[], int  *data_count);
int signup(char users[DATA_SIZE][USERNAME_SIZE], int pass_list[], int  *data_count, FILE *usernames, FILE *passes);
void thought_print(char filename[]);
void create_thought(char filename[]);

int main(){
    FILE *usernames, *passes;
    char user_list[DATA_SIZE][USERNAME_SIZE];
    int pass_list[DATA_SIZE], i = 0, data_count = 0, select, sign_conf;
    /* Load username and passwords from files */
    usernames = fopen("usernames.txt", "a+");
    passes = fopen("passwords.txt", "a+");
    if(usernames == NULL || passes == NULL){
        printf("Can't load database!\n");
        return 1;
    }

    while ((fscanf(usernames, "%s", &user_list[i])) == 1){
        fscanf(passes, "%d", &pass_list[i]);
        i++;
    }
    data_count = i;

//    for (i = 0; i < data_count; i++){
//        printf("%s ", users[i]);
//        printf("%d ", pass[i]);
//    }
    /* loading data code complete */
    printf("%40c", ' ');
    printf("Welcome to thoughtbook!%20c\n", ' ');
    printf("%30c___________________________________________\n", ' ');
    printf("%30c|1)    Login     | 2)      Sign up        |\n", ' ');
    printf("%30c___________________________________________\n", ' ');
    printf("%30c", ' ');
    scanf("%d", &select);

    if (select == 1){
       login(user_list, pass_list, &data_count);
    }
    else{
        sign_conf = signup(user_list, pass_list, &data_count, usernames, passes);
        if (sign_conf == 1){
            login(user_list, pass_list, &data_count);
       }
    }



    fclose(usernames);
    fclose(passes);
    return 0;
}

void login(char user_list[DATA_SIZE][USERNAME_SIZE], int pass_list[], int *data_count){
    char user[USERNAME_SIZE], filename[USERNAME_SIZE+4];/* stores username */
    int pass, i, log_flag = 0, read_create_select;
    printf("%48c Login\n", ' ');
    printf("%30c___________________________________________\n", ' ');
    printf("%30c", ' ');
    printf("Enter username: ");
    scanf("%s", user);
    printf("%30c", ' ');
    printf("Enter password: ");
    scanf("%d", &pass);
    printf("%30c", ' ');

    for (i = 0; i < *data_count; i++){
        if (strcmp(user_list[i], user) == 0){
            if (pass_list[i] == pass){
                log_flag = 1;
                break;
            }
        }
    }
    if (log_flag == 0){
        printf("Wrong username or password!");
    } else if (log_flag == 1){
        printf("Successfully logged in!\n\n");
        printf("%30cWould you  like to (1)read your thoughts or (2)create them? ", ' ');
        scanf("%d", &read_create_select);
        printf("%30c___________________________________________\n", ' ');
        strcpy(filename, user);
        strcat(filename, ".txt");
        if (read_create_select == 1){
            thought_print(filename);

        } else if (read_create_select == 2){
            create_thought(filename);
        }
    }
}

int signup(char user_list[DATA_SIZE][USERNAME_SIZE], int pass_list[], int  *data_count, FILE *usernames, FILE *passes){
    char user[USERNAME_SIZE], filename[USERNAME_SIZE+4];
    int pass, i;

    printf("%30cCreate an account!\n", ' ');
    printf("%30c", ' ');
    printf("Enter a username: ");
    scanf("%s", user);
    for (i = 0; i < *data_count; i++){
        if (strcmp(user, user_list[i]) == 0){
            printf("%30c", ' ');
            printf("Username already exists! Use a unique username.\n");
            printf("%30c", ' ');
            printf("Enter a username: ");
            scanf("%s", user);
        }
    }
    printf("%30c", ' ');
    printf("Enter a password for your account(Must be an integer): ");
    scanf("%d", &pass);

    fprintf(usernames,"\n%s", user);
    fprintf(passes,"\n%d", pass);

    strcpy(user_list[*data_count], user);
    pass_list[*data_count] = pass;
    *data_count += 1;


    strcpy(filename, user);
    strcat(filename, ".txt");
    FILE *new_user_file = fopen(filename, "w");

    return 1;

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
}

void create_thought(char filename[]){
    int query;
    char line[200];
    FILE *thoughtlist = fopen(filename, "a");
    if(thoughtlist == NULL){
        printf("Can't load Thought File!\n");
        return;
    }
    gets(line);
    printf("%30cWhat's on your mind?\n",' ');
    printf("%30c___________________________________________\n%30c", ' ', ' ');
    gets(line);

    fprintf(thoughtlist,"%s\n", line);
    printf("%30cYour thought has been successfully entered!\n", ' ');
    printf("%30c___________________________________________\n", ' ');

    fclose(thoughtlist);

    printf("%30cWould you like to read your thoughts?\n%30c", ' ', ' ');
    scanf("%d", &query);
    if (query == 1)
        thought_print(filename);
    else
        printf("%30cThank you for using ThoughtBook!", ' ');

}
