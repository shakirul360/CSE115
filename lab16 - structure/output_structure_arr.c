/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

typedef struct {

    int id;
    char name[50];

} student_t;

void get_input(student_t arr[]);

int main(){
    student_t stu;
    student_t arr[2];
    get_input(arr);
    for (int i = 0; i < 2; i++){
       printf("%d %s", arr[i].id, arr[i].name);
    }

    return 0;
}

void get_input(student_t arr[]){
    for (int i = 0; i < 2; i++){
        printf("enter the id: ");
        scanf("%d", &arr[i].id);
        printf("enter the name: ");
        scanf("%s", arr[i].name);
    }

}
