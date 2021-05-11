/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
typedef struct{
    double length;
    double width;
} Shape;

int findArea(Shape R);
int findPerimeter(Shape R);


int main(){
    Shape rectangle;
    int area, perimeter;

    printf("Enter the length and width of rectangle: ");
    scanf("%lf %lf", &rectangle.length, &rectangle.width);

    area = findArea(rectangle);
    perimeter = findPerimeter(rectangle);
    printf("Area = %d\nPerimeter = %d\n", area, perimeter);

    return 0;
}

int findArea(Shape R){
    int area = R.length * R.width;
    return area;
}

int findPerimeter(Shape R){
    int perimeter = R.length * 2 + R.width * 2;;

    return perimeter;
}
