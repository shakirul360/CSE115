#include <stdio.h>
void messi(int num);
int main()
{
    int a[3][3],b[3][3],c[3][3],row,col;
    printf("enter the first matrix:");
    for (row=0;row<3;row++)
        {
             for (col=0;col<3;col++)
             {
                  scanf("%d",&a[row][col]);
             }
        }
       printf("enter second matrix:");
        for (row=0;row<3;row++)
        {
            for (col=0;col<3;col++)
            {
                scanf("%d",&b[row][col]);
            }

        }

  printf(" the first matrix is:");
    for (row=0;row<3;row++)
        {
             for (col=0;col<3;col++)
             {
                  printf("%d\t", a[row][col]);
             }
             printf(" \n ");
        }
 printf("enter second matrix:");
        for (row=0;row<3;row++)
        {
            for (col=0;col<3;col++)
            {
                printf("%d\t",b[row][col]);
            }
         printf(" \n ");
        }

        for (row=0;row<3;row++)
        {
             for (col=0;col<3;col++)
              {
                  c[row][col]=a[row][col]+b[row][col];
              }

             }
    printf("the sum matrix is:");
            for (row=0;row<3;row++)
        {
            for (col=0;col<3;col++)
            {
                printf("%d\t",c[row][col]);
            }
         printf(" \n ");
    }}
