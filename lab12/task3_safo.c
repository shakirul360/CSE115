#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter number of rows: \n");
    scanf("%d",&m);
    printf("Enter number of columns: \n");
    scanf("%d",&n);
    int number[m][n];
    printf("Enter %d integers: \n",m*n);
    for (int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            scanf("%d", &number[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            printf("%d ",number[i][j]);
        }printf("\n");
    }


    printf("\n\nTranspose: \n");
    int trns[n][m];

    for (int i = 0; i < n; i++)
    {
        for(int j =0; j < m; j++)
        {
           trns[i][j] = number[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for(int j =0; j < m; j++)
        {
            printf("%d ",trns[i][j]);
        }
        printf("\n");
    }
    return 0;
}
