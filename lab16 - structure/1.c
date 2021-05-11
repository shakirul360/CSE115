/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/
#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} point;

point take_input();
int distance(point a, point b);


int main(){
    int res;
    point p,q;

    p = take_input();
    printf("P.x = %d\nP.y = %d\n", p.x, p.y);
    q = take_input();

    res = distance(p, q);
    printf("The Manhattan distance between two points is %d\n", res);
    return 0;
}

point take_input(){
    point r;
    printf("Please enter X and Y value of the point: ");
    scanf("%d %d", &r.x, &r.y);

    return r;
}

int distance(point a, point b){
    int dist;

    dist = abs((a.x - b.x)) + abs((a.y - b.y));
    return dist;

}
