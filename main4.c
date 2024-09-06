#include <stdio.h>
#include <stdlib.h>
int en_kucuk_bul(int a[],int b);

int main()
{
    int b;
    printf("dizinin boyutunu girin: ");
    scanf("%d",&b);
    int a[b];
    printf("elemanlari girin: \n");
    for(int i=0;i<b;i++)
        scanf("%d",&a[i]);
    printf("bu dizinin en kucuk elemani: %d",en_kucuk_bul(a,b));



    return 0;
}

int en_kucuk_bul(int a[],int b)
{
   int enKucuk=a[0];
   for(int i=0;i<b;i++)
   {
       if(a[i]<enKucuk)
        enKucuk=a[i];

   }
   return enKucuk;
}



