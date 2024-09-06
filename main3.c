#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c[12],a[6],b[6];
   printf("c dizisinin elemanlarini girin: \n");
    for(int i=0;i<=11;i++)
    {
        scanf("%f",&c[i]);
    }
    for(int j=0;j<=11;j+=2 )
    {
        c[j]=a[j/2];
        c[j+1]=b[j/2];

    }
     printf("\n\n");
    printf("a dizisinin elemanlarini : ");

for(int k=0;k<=5;k++)
    {
        printf("%f",a[k]);

    }
     printf("\n\n");
    printf("b dizisinin elemanlari: ");

for(int k=0;k<=5;k++)
    {
        printf("%f  ",b[k]);
    }


    return 0;
}
