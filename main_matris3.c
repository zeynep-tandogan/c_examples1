#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   /*0_7 aras� random say�lar sat�r i�in ve s�tun i�in
     sat�rdabul ve s�t�nbul diye iki fonksiyon yap
     yeni say�y� fonksiyonlara g�nder
     varsa say� de�i�sin
      yoksa sat�r ve s�t�n diye dizilere ve kalenin yeriniata

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


      /*8 lik dizi olustur sat�r[8] sutun[8]
      sat�r� kend� aras�nda kar��last�r ayn� varm� d�ye
      dongu i�inde ayn� varsa tekrar atas�n hepsi farkl�ysa d�nguden c�ks�n
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
