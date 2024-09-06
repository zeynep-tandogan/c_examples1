#include <stdio.h>
#include <stdlib.h>
int asaliBul(int s,char harf)
{
    int i,kontrol=0;
    switch(harf)
    {
    case 'b':
    {
        for(s;;s++)
        {
           for(i=2; i<s; i++)

                if(s%i==0)
                 {

                  kontrol=1;
                    break;}
                    if(kontrol==0)

                    return s;


        }}


        break;
    case 'k':
        printf(".");

        break;}


}
int main()
{
    int s;
    char harf;
    printf("2 den buyuk tam sayi girin: ");
    scanf("%d",&s);
    fflush(stdin);
    printf(" b ya da k giriniz: ");
    scanf("%c",&harf);
    printf("\n%d",asaliBul(s,harf));
    return 0;
}

