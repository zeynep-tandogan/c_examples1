#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c[10],a[10],b[10];

    printf("a dizisinin elemanlarini giriniz:\n");
    for(int i=0;i<10;i++)
    scanf("%f",&c[i]);
    float toplam=0.0;
    for(int i=0;i<10;i++)
    {
       toplam+=c[i];
    }
    printf("dizinin ortalamasi: %.2f\n",toplam/10.0);
    printf("\n\na dizisinin elemanlari(ortalamadan kucuk olanlar) : ");
    int k=0;
    for(int i=0;i<10;i++)
    {
       if(c[i]<toplam/10.0)
            {c[i]=a[k];
            k++;
            printf("%.2f  ",c[i]);
            }
    }
     printf("\n\nb dizisinin elemanlari(ortalamadan buyuk olanlar) : ");

    for(int i=0;i<10;i++)
    {

        if(c[i]>toplam/10.0)
            {c[i]=b[k];
            k++;
            printf("%.2f  ",c[i]);}
    }//bir sýkýntý var ama


    return 0;
}
