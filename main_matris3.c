#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   /*0_7 arası random sayılar satır için ve sütun için
     satırdabul ve sütünbul diye iki fonksiyon yap
     yeni sayıyı fonksiyonlara gönder
     varsa sayı değişsin
      yoksa satır ve sütün diye dizilere ve kalenin yeriniata

      int satirbul( int satirlar[],int satir)
      {

      }

      srand(time(NULL));
      int satir,sutun;
      int satirlar[];
      int sutunlar[];
      for(int i=0;;i++)
      {
          satir=random()%8;
          sutun=random()%8;
          if (satirbul(satirlar[], satir))
          {


          }

      }


      /*8 lik dizi olustur satır[8] sutun[8]
      satırı kendş arasında karşılastır aynı varmı dıye
      dongu içinde aynı varsa tekrar atasın hepsi farklıysa dönguden cıksın
      */
       sranf(time(NULL));
       int satir[8];
       int sutun[8];
       for(int i=0;i=8;i++)
       {
           x:
           satir[i]=rand()%8;
           sutun[i]=rand()%8;
           for(int j=0;j<=i;j++)
           {
               if(satir[j]=satir[i])
               goto x:
                if(sutun[j]=sutun[i])
                    goto x:

           }

       }




    return 0;
}
