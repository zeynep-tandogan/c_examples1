#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int b,a[50];
    printf("dizinin eleman sayisini giriniz(en fazla 50): ");
    do
        scanf("%d",&b);
    while(b>50);
    printf("otomatik olusturulan dizi: ");
    srand(time(NULL));
    for(int i=0; i<b; i++)
    {
        a[i]=rand()%100+1;
        printf("%d, ",a[i]);
    }
    printf("\ndizinin siralanmis hali: ");
    for(int i=0; i<b; i++)
    {
        int enKucuk=a[i];
        for(int j=i+1; j<b; j++)
        {

            if(a[j]<enKucuk)
                {enKucuk=a[j];
                int gecici=a[i];
                a[i]=a[j];
                a[j]=gecici;}

        }

    }
for(int i=0; i<b; i++)
{
    printf("%d ",a[i]);
}

    return 0;
}
