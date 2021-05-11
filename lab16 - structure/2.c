/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#define SIZE 20
#include <stdio.h>

typedef struct{
    char name[SIZE];
    int id;
    double CGPA;
} Student_t;

Student_t take_input();
Student_t cgpa_comparer(Student_t a, Student_t b);

int main(){
    Student_t a,b, highest;
    a = take_input();
    b = take_input();

    highest = cgpa_comparer(a, b);
    printf("The Student with the highest CGPA is:\n");
    printf("%s, %d, %lf", highest.name, highest.id, highest.CGPA);
    return 0;
}

Student_t take_input(){
    Student_t stu;

    printf("Enter the Name, ID and CGPA of the student: ");
    scanf("%s%d%lf", stu.name, &stu.id, &stu.CGPA);

    return stu;
}

Student_t cgpa_comparer(Student_t a, Student_t b){
    if (a.CGPA > b.CGPA)
        return a;
    else
        return b;
}
