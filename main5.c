#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    printf("a dizisinin elemanlarini giriniz:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    int toplam=0;
    for(int i=0;i<10;i++)
    {
       toplam+=a[i];
    }
    printf("dizinin ortalamasi: %.2f\n",toplam/10.0);
    printf("ortalamadan kucuk olanlar : ");
    for(int i=0;i<10;i++)
    {
        if(a[i]<toplam/10.0)
            printf("%d  ",a[i]);
    }



    return 0;
}
