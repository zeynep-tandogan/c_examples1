#include <stdio.h> Selection Sort
int main() {
int d[10] = {6,7,3,1,8,4,5,9,10,2};
int i,j, en_kucuk_sira;
for (i = 0 ; i <= 9 ; i++)
printf("%d ", d[i]);
printf("\n\n");
for ( i = 0 ; i <= 8 ; i++) {
en_kucuk_sira = i;
for (j = i+1 ; j <= 9 ; j++)
if (d[j] < d[en_kucuk_sira])
en_kucuk_sira = j;
int tmp = d[i];
d[i] = d[en_kucuk_sira] ;
d[en_kucuk_sira] = tmp;
printf("i = %d => ", i);
for (j = 0 ; j <= 9 ; j++)
printf("%d ", d[j]);
printf("\n");
}
return 0;
}
