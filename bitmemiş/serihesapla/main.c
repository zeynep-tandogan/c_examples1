#include <stdio.h>
#include <stdlib.h>
int SeriHesapla(int a,int b)
{
    int i;
    int toplamSonuc=0;
    int fakt;

    for(i=0;i<=b-1;i++)
    {
     int faktöriyel(int (i*a) )
     {

         fakt=1;
         if(i*a==0)
            return fakt;
         else return fakt=a*faktöriyel(i*a-1);

     }
     toplamSonuc=toplamSonuc+fakt;
    }
}

int main()
{
    int a,b,toplamSonuc;
  printf("a: ");
  scanf("%d",&a);
  printf("b: ");
  scanf("%d",&b);
  printf("serinin terimleri: ");
  printf("toplam sonuc: %d",toplamSonuc);
    return 0;
}
