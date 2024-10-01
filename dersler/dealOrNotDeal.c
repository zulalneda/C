#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void secilenler(char devam, int yeniKutu[]);

int main()
{
    srand(time(NULL));
    int kutu[24] = {1,2,5,10,25,50,100,200,300,400,500,750,2500,5000,10000,25000,50000,100000,150000,200000,250000,500000,500000,500000};

    int secim = rand() % 24;
    int yeniKutu[23];
    int yeniKutu2[17];
    int yeniKutu3[11];

    /*
    printf("%d\n",kutu[secim]);
    printf("****************************************************************\n");
    */

    for(int i = 0; i < secim; i++)
    {
        yeniKutu[i] = kutu[i];
    }

    for(int i = secim; i < 23; i++)
    {
        yeniKutu[i] = kutu[i + 1];
    }

    /*
    for(int i = 0; i < 23; i++)
    {
        printf("%d\n",yeniKutu[i]);
    }
    */

   char devam;
   printf("İlk 6 kutuyu acmak ister misiniz? (e / E)\n");
   scanf(" %c",&devam);

   secilenler(devam,yeniKutu);


}


void secilenler(char devam, int yeniKutu[])
{
    int toplam = 0;
    int bankaninTeklifi = 0;
    int yeniKutu2[23];
    if(devam == 'e' || devam == 'E')
    {
        for(int i = 0; i < 6; i++)
        {
            int kalanlar = 1 + rand() % (23 - i);

            for(int j = 0; j < kalanlar; j++)
            {
                yeniKutu2[j] = yeniKutu[j];
            }

            for(int k = kalanlar; k < (23 - i); k++)
            {
                yeniKutu2[k] = yeniKutu[k + 1];
            }
        }

        printf("Kalan kutular: \n");
        for(int z = 0; z < 17; z++)
        {
            toplam += yeniKutu2[z];
            printf("%d\n",yeniKutu2[z]);
        }
    }

    bankaninTeklifi = toplam / 10;

    printf("Bankanin teklifi: %d. Devam etmek istiyor musunuz?",bankaninTeklifi);
}
