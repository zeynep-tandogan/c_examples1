#include <stdio.h>
#include <stdlib.h>
float puan_hesapla(char *d,char *c)
{

    int soru_sayisi;
for(int i=0;d[i]!='\0';i++)
    soru_sayisi=i;

float dogru=0;
for(int j=0;j<soru_sayisi;j++)
{
    if(d[soru_sayisi]==c[soru_sayisi])
        dogru++;
}
float puan=((float)dogru/(float)soru_sayisi)*100.0;
return puan;

}

int main()
{
    float puan;
    char dogru[30];
    char cevap[30];
    printf("dogru cevaplari giriniz:\n");
    fgets(dogru,30,stdin);
    printf("ogrenci cevaplarini giriniz:\n");
    fgets(cevap,30,stdin);
    puan=puan_hesapla(dogru,cevap);
    printf("ogrencinin aldigi puan: %f",puan);


    return 0;
}
