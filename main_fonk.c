#include <stdio.h>
#include <stdlib.h>

int bolen_sayi(int x)
{
    int i;
    int toplam=0;
    for(i=1;i<=x;i++)
    {
         if(x%i==0)

         toplam=toplam+i;
    }
    return toplam;

}
int ahbapbul(int sayi)
{
    int j;
    int sonuc;
    for(j=sayi-1;j>=0;j--)
    {
        if((bolen_sayi(j)/j)==(bolen_sayi(sayi)/sayi))
           return j;
        else
            return 0;
    }

}
int main(){

	int sayi;
	int bolenler;

	printf("Sayi girin:");
	scanf("%d",&sayi);

	printf("%d=> %d",sayi,ahbapbul(sayi));



	return 0;
}

