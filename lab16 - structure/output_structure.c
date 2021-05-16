/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

typedef struct {

    int id;
    char name[50];

} student_t;

void get_input(student_t *stu);

int main(){
    student_t stu;
    student_t arr[10];
    get_input(&arr[0]);
    get_input(&stu);

    printf("%d %s", stu.id, stu.name);
    printf("%d %s", arr[0].id, arr[0].name);
    return 0;
}

void get_input(student_t *stu){
    printf("enter the id: ");
    scanf("%d", &(*stu).id);
    printf("enter the name: ");
    scanf("%s", (*stu).name);
}
