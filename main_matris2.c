#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sutunDegistir(int matris[10][5],int s1,int s2)
{
    int degisken;
    for(int i=0; i<10; i++)
    {
        degisken=matris[i][s1];
        matris[i][s1]=matris[i][s2];
        matris[i][s2]=degisken;
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%d\t",matris[i][j]);

        }
        printf("\n");
    }
}

int main(){
int s1,s2;
int matris[10][5];
srand(time(NULL));
printf("matrisiniz\n");
for(int i=0;i<5;i++)
{
   for(int j=0;j<10;j++)
   {
       matris[i][j]=rand()%50+1;
       printf("%d\t",matris[i][j]);
   }
   printf("\n");
}
printf("\ndegistirmek istediginiz sutunlari secin:");
scanf("%d",&s1);
scanf("%d",&s2);
sutunDegistir(matris,s1,s2);



    return 0;
}
