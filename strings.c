#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[1000];
   printf("cumleyi giriniz: ");
gets(cumle);
int i=0;

while(cumle[i]!='\0')
{
    if(i==0)
    printf("%c ",cumle[i]);
    if(cumle[i]==' ')
        printf("%c ",cumle[i+1]);i++;
}
    return 0;
}
