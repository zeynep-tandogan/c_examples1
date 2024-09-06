#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char genHavuz[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char hedefGen[]="Kalem";
char anneAta[]="KtueV", babaAta[]="palYj",kabile[6][6],yedek[5],anne[6],baba[6];
int kabileSaglik[5];
int olasilik,saglikKontrol,nesil=0,z,saglikSayac,rast,gen,rastgele,saglik,cocukSayisi;


void ciftlestir(int cocukSayisi)
{
    saglik=0;
    for(gen=0;gen<5;gen++)
    {
        rastgele=rand()%20+1;
        if(rastgele<10)
        {
            kabile[cocukSayisi][gen]=babaAta[gen];
        }
        else if(rastgele<19)
        {
            kabile[cocukSayisi][gen]=anneAta[gen];
        }
        else
        {
            kabile[cocukSayisi][gen]=genHavuz[rand()%54];
        }
        if(kabile[cocukSayisi][gen]==hedefGen[gen])
        {
            saglik++;
        }
        printf("%c",kabile[cocukSayisi][gen]);
    }
    kabileSaglik[cocukSayisi]=saglik;
}

int kontrol(){
	for (int x = 0;x<5;x++){
		if (kabileSaglik[x] == 5){
			return 0;
		}
	}
	return 1;
}

void sirala(){
	int temp;
	for (int x = 0; x < 5;x++)
    {
		for (int y = 0; y < 5;y++)
		{
			if (kabileSaglik[y] < kabileSaglik[x] )
			{
				temp = kabileSaglik[x];
				kabileSaglik[x] = kabileSaglik[y];
				kabileSaglik[y] = temp;
				strcpy(yedek,kabile[x]);
				strcpy(kabile[x],kabile[y]);
				strcpy(kabile[y],yedek);
			}
		}
	}
    rastgele=rand()%3;
    strcpy(anneAta,kabile[rastgele]);
    rastgele=rand()%3;
    strcpy(babaAta,kabile[rastgele]);
}

int main()
{
    srand(time(NULL));
    int cocukSayisi;
    for(cocukSayisi=0;cocukSayisi<5;cocukSayisi++)
    {
        ciftlestir(cocukSayisi);
    }
    printf("\n");
    sirala();
    nesil+=1;
    while (kontrol())
    {
        nesil++;
        for(cocukSayisi=0;cocukSayisi<5;cocukSayisi++)
        {
            ciftlestir(cocukSayisi);
            printf("  ");
        }
        sirala();
        //5 tane çocuk var bunların içinden 2 tanesini anne baba olarak seçmeliyim
    }
printf("%d nesil sonra Kalem genine rastlanılmıştır",nesil);


}
