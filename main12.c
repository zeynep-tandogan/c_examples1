#include <stdio.h>
void bubble_sort(int d[], int N)
{
    int i, j, tmp;
    for ( i=1 ; i < N ; i++ )
    {
        for (j=0 ; j < N-1 ; j++)
        {
            if ( d[j] > d[j+1] )
            {
                tmp = d[j];
                d[j] = d[j+1];
                d[j+1] = tmp;
            }
        }
    }
}
int main()
{
    int d[10] = {5, 8, 1, 3, 25, 11, 17, 2, 7, 9};
    int i;
    bubble_sort(d, 10);
    printf("sirali hali:\n");
    for (i = 0 ; i < 10 ; i++)
        printf("%d ", d[i]);
    printf("\n");
    while (1)
    {
        int aranan;
        printf("aranacak elemani giriniz:");
        scanf("%d", &aranan);
        int yer = ikili_ara(d, 10, aranan);
        if (yer == -1)
            printf("%d dizide yok\n", aranan);
        else
            printf("%d'nin yeri: %d\n", aranan, yer);
    }
    return 0;
}
int ikili_ara(int dizi[], int N, int aranan)
{
    int bas = 0;
    int son = N-1;
    int orta;
    while (bas <= son)
    {
        orta = (bas + son) / 2;
        if (dizi[orta] == aranan)
            return orta;
        else if (dizi[orta] > aranan)
            son = orta - 1;
        else
            bas = orta + 1;
    }
    return -1;
}
