#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 int matris[10][10];
 srand(time(NULL));

    int enKucuk =1000;

int z,k;
printf("matrisiniz:\n");

for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            matris[i][j]=rand()%100+1;
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
     int yer;
     int yer1,a;

    for( z=0;z<9;z++)
    {
        for( k=0;k<9;k++)
        {
            if(matris[z][k]+matris[z][k+1]+matris[z+1][k]+matris[z+1][k+1]<enKucuk)
            {
                a=matris[z][k]+matris[z][k+1]+matris[z+1][k]+matris[z+1][k+1];

                enKucuk=a;
                 yer=z;
                 yer1=k;
            }
        }
     }
    printf("evin yapilabilecegi yer:%d_%d, %d_%d, %d_%d, %d_%d",yer,yer1,yer,yer1+1,yer+1,yer1,yer+1,yer1+1);
    printf("\nverimlilik degeri:%d",a);



    return 0;
}
