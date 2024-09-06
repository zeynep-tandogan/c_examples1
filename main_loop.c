#include <stdio.h>
#include <stdlib.h>
void kumSaati(int sayi,char karakter)
{
    int i,j,k;
    {for(i=1;i<=sayi;i++)
    {
        for(k=0;k<=i-1;k++)
            printf(" ");
        for(j=0;j<=2*i-1;j++)
            printf("%c",karakter);
    }
    }

}


int main()
{
    int sayi;
    char karakter;
    printf("sayi girin:");
    scanf("%d",&sayi);
    fflush(stdin);
    printf("karakter giriniz:");
    scanf("%s",&karakter);
    kumSaati(sayi,karakter);

    return 0;
}
