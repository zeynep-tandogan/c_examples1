#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ilkBenzersiz(int dizi[],int eleman );
int main()
{
    int eleman;
    srand(time(NULL));
    printf("dizi kac elemanli olsun: ");
    scanf("%d",&eleman);
    int dizi[eleman];
    printf("olusan dizi: \n");
    for(int i=0; i<eleman; i++)
    {
        dizi[i]=rand()%50+1;
        printf("%d, ",dizi[i]);
    }

    printf("\ndizinin ilk benzersiz elemani :%d ",ilkBenzersiz(dizi,eleman));

    return 0;
}
int ilkBenzersiz( int dizi[],int eleman )
{
    int benzersiz;
    for(int i=0; i<eleman; i++)
    {
        int sayac =0;
        for(int j=i+1; j<eleman; j++ && j!=i)
        {
            if(dizi[i]==dizi[j])
                sayac=1;
        }
        if (sayac==0)
        {
            benzersiz =dizi[i];
            return benzersiz;
        }
    }

}
