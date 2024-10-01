#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int toplam(int sayi1, int sayi2, int sayi3);
int ortalama(int sayi1, int sayi2, int sayi3);

int main()
{
    // Elemanları Sıralama

    int x;
    int dizi[5] = {3, 2, 4, 1, 5};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (dizi[i] > dizi[j])
            {
                x = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = x;
            }
        }
    }

    for (int k = 0; k < 5; k++)
    {
        printf("%d \n", dizi[k]);
    }

    // En büyük ve en küçük elemanı bulma

    int dizi2[7] = {1057,20,3099,40,5000,60,700};
    int buyuk = dizi2[0];
    int kucuk = dizi2[0];

    for(int i = 1; i < 7; i++)
    {
        if(dizi2[i] > buyuk)
        {
            buyuk = dizi2[i];
        }

        if(dizi2[i] < kucuk)
        {
            kucuk = dizi2[i];
        }

    }

    printf("En buyuk eleman: %d \n",buyuk);
    printf("En kucuk eleman: %d \n",kucuk);

    //sayıların toplamını ve ortalamasını bulan program:

    int a,b,c;
    printf("Lutfen toplamak ve ortalamasini bulmak istediginiz 3 sayiyi giriniz: \n");
    scanf("%d%d%d",&a,&b,&c);

    printf("%d ", toplam(a,b,c));
     printf("%d ", ortalama(a,b,c));  

    

}

int toplam(int sayi1, int sayi2, int sayi3)
{
    int toplam1, ortalama1;

    toplam1 = sayi1 + sayi2 + sayi3;

    //ortalama1 = toplam1 / 3;

    return toplam1 ;
}

int ortalama(int sayi1, int sayi2, int sayi3)
{
    int ortalama1;

    ortalama1 = toplam(sayi1,sayi2,sayi3) / 3;

    return ortalama1;
}