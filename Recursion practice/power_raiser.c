/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int power_raiser(int base, int power);

int main(){
    int base, power;
    int res;
    printf("Enter the base and power: ");
    scanf("%d %d", &base, &power);
    res = power_raiser(base, power);
    printf("The result is %d\n", res);

    return 0;
}

int power_raiser(int base, int power){
    int ans;

    if (power == 1)
        ans = base;
    else
        ans = base * power_raiser(base, power - 1);

    return ans;

}
