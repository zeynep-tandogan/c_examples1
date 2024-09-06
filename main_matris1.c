#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,k,z,enkucuk;
    printf("dizinin sirasiz hali \n");
    int matris[3][4];
    srand(time(NULL));
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            matris[i][j]=rand()%50;
            printf("%d\t",matris[i][j]);

        }
        printf("\n");
    }
    printf("\ndizinin satirlarinin sirali hali\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=j+1; k<3; k++)
            {
                enkucuk=matris[i][j];
                if(matris[i][k]<enkucuk)
                {
                    int degisken=matris[i][k];
                    matris[i][j]=degisken;
                    matris[i][k]=enkucuk;

                }
            }
            printf("%d \t",matris[i][j]);
        }
        printf("\n");

    }
    printf("matrisin sirali hali\n");
    {int matris[12];
        int temp,deg;
    for(i=0; i<11; i++)
    {
        for(j=i+1; j<12; j++)
        {
            if (matris[j]<matris[i])
            {
                  temp=matris[i];
                 deg=matris[j];
                 matris[j]=temp;
                 matris[i]=deg;
            }
        }
    }
j=0;
    for(i=0; i<4; i++)
    {
        for(j;; j++)
        {
            printf("%d ",matris[j]);
        }
        printf("\n");
        j=j+3;

    }}

    return 0;
}
