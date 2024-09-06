#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a[6],b[6],c[12];
    printf("a dizisinin elemanlarini girin: \n");
    for(int i=0;i<=5;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("b dizisinin elemanlarini girin: \n");
    for(int i=0;i<=5;i++)
    {
        scanf("%f",&b[i]);
    }
    printf("c dizisinin elemanlari: \n");
    for(int j=0;j<=11;j++)
    {
        c[j]=a[j];
        c[j+1]=b[j];
        printf("%.1f, %.1f, ",c[j],c[j+1]);
    }



    return 0;
}
