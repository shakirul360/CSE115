#include <stdio.h>
#include <math.h>
struct BarcelonaPlayer
{
char name[20];
int age;
char country[20];
char position[20];
double salary;
double rating;
};

void highestPaidPlayer(struct BarcelonaPlayer *pl, int size);
void findPlayers(struct BarcelonaPlayer *pl, int size);

int main()
{
    int n=3;
    struct BarcelonaPlayer p[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter Player %d Name, Age, Country, Position, Salary and Rating:\n",i+1);
        gets(p[i].name);
        scanf("%d",&p[i].age);
        fflush(stdin);
        gets(p[i].country);
        gets(p[i].position);
        scanf("%lf",&p[i].salary);
        scanf("%lf",&p[i].rating);
        fflush(stdin);
    }
    highestPaidPlayer(p, n);
    findPlayers(p, n);

    return 0;
}

void highestPaidPlayer(struct BarcelonaPlayer *pl, int size){
    double slr = pl[0].salary;
    int index=0;
    for(int i=1; i<size; i++)
    {
       if(slr<pl[i].salary){
        slr=pl[i].salary;
        index=i;
       }
    }

    printf("The highest paid player is %s ",pl[index].name);
}

void findPlayers(struct BarcelonaPlayer *pl, int size){

    char *country="Argentina";
    for(int i=0; i<size; i++)
    {
       if(strcmp(country, pl[i].country)==0){
        printf("%s is from Argentina",pl[i].name);
       }
    }
}
