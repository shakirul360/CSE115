/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
void letter_grade(int points, char *gradep, int *just_missedp);

#include <stdio.h>

int main(){
    int points, just_missed, i;
    char grade;



    for (i = 49; i <= 100; i++){
        letter_grade(i, &grade, &just_missed);
        printf("points = %d   grade = %c     just missed = %d\n", i, grade, just_missed);
    }

    return 0;
}

void letter_grade(int points, char *gradep, int *just_missedp){
    if ((points >= 90) && (points <= 100))
        *gradep = 'A';
    else if ((points >= 80) && (points <= 89))
        *gradep = 'B';
    else if ((points >= 70) && (points <= 79))
        *gradep = 'C';
    else if ((points >= 60) && (points <= 69))
        *gradep = 'D';
    else
        *gradep = 'F';

    if ((points + 1) % 10 == 0 && points != 99)
        *just_missedp = 1;
    else
        *just_missedp = 0;

}
