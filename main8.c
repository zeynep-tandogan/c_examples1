#include <stdio.h>
#include <stdlib.h>
void yildiz( int s, int sayilar[]);


int main()
{
    int s;
   int sayilar[6]={};
    printf("sayilari giriniz:\n");
    for(int i=0;i<6;i++)
    {
       scanf("%d",&s);
       sayilar[i]=s;
    }
    printf("\n\nSAYÝLAR VE HÝSTOGRAMLAR\n\n");
      yildiz(s,sayilar);
    return 0;
}
 void yildiz(int s,int sayilar[])
 {
     for(int i=0;i<=5;i++)
 {
     printf("%d  ",sayilar[i]);
     for(int j=0;j<sayilar[i];j++)
        printf("*");
     printf("\n\n");
 }

 }


