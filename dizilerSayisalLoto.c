#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int rastgeleSayi;
    srand(time(NULL));
    int loto[49] = {0};

    /*

    for(int i = 0; i<49; i++)
    {
        rastgeleSayi = 1 + rand() % 49; //mod49 olmasının sebebi çok büyük sayılar döndürdüğü için 1-49 (dahil) sayılar alıyoruz.
        // +1 eklememizin sebebiyse aralığı [0,49) dan [1,50) ye çıkarıyor olmasıdır.
        printf("%d\n",rastgeleSayi);
    }

    */

    for (int i = 0; i < 6; i++)
    {
        rastgeleSayi = 1 + rand() % 49;

        while (loto[rastgeleSayi - 1] == 1)
        {
            rastgeleSayi = 1 + rand() % 49;
        }

        loto[rastgeleSayi - 1] = 1;
        printf("%d", rastgeleSayi);
        printf(" ");
    }

    return 0;
}