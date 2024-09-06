#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float kenar3(int b,int c,int alfa)
{
 int cosa=cos(alfa*M_PI/180);
    float a;
    a=sqrt(b*b+c*c-2*b*c*cosa);
    return round(a);
}


int main()
{
    int k1,k2;
    float aci;
   printf("iki kenar uzunlugunu giriniz: ");
   scanf("%d %d",&k1,&k2);
   printf("aciyi giriniz: ");
   scanf("%f",aci);
   printf("%f",kenar3(k1,k2,aci));


    return 0;
}




