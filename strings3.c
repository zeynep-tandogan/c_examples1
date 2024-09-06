#include <stdio.h>
#include <stdlib.h>
int main()
{
    char kelime[100];
    int kontrol;
    int karakter_sayisi;
    printf("dizgiyi giriniz: ");
    fgets(kelime,100,stdin);
    for (int i=0;kelime[i]!='\0';i++)
    {
        karakter_sayisi=i;
    }

    for(int i=0;i<karakter_sayisi-1;i++)
    {
        if(kelime[i]=='a'||kelime[i]=='ý'||kelime[i]=='o'||kelime[i]=='u')
        {
            for(i+1;i+1<karakter_sayisi;i+1)
                if(kelime[i+1]=='e'||kelime[i+1]=='i'||kelime[i+1]=='ö'||kelime[i+1]=='ü')
            {
                kontrol=0;
                break;
            }
            else kontrol=1;
        }
        else if(kelime[i]=='e'||kelime[i]=='i'||kelime[i]=='ö'||kelime[i]=='ü')
        {
            for(i+1;i+1<karakter_sayisi;i+1)
                if(kelime[i+1]=='a'||kelime[i+1]=='ý'||kelime[i+1]=='o'||kelime[i+1]=='u')
            {
                kontrol=0;
                break;
            }
            else kontrol=1;
        }
    }
    if (kontrol)
        printf("buyuk unlu uyuma uyar.");
    else printf("buyuk unlu uyumuna uymaz.");

    return 0;
}
