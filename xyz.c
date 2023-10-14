#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sayi1, sayi2;
    int secim;

    while (1)
    {
        printf("Lutfen 2 sayi giriniz:\n");
        if (scanf("%f %f", &sayi1, &sayi2) != 2)
        {
            printf("Gecersiz giris. Lutfen sayi girin.\n");
            fflush(stdin); 
            continue;
        }

        printf("Lutfen yapmak istediginiz islemi seciniz:\n 1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Karekok\n6.Kuvvet\n Programdan cikmak istiyorsaniz -1 yaziniz.\n");
        if (scanf("%d", &secim) != 1)
        {
            printf("Gecersiz giris. Lutfen bir sayi girin.\n");
            fflush(stdin); 
            continue;
        }

        if (secim == -1)
        {
            printf("Cikis yaptiniz.\n");
            break;
        }

        switch (secim)
        {
        case 1:
            printf("Toplama: %f\n", sayi1 + sayi2);
            break;

        case 2:
            printf("Cikartma: %f\n", sayi1 - sayi2);
            break;

        case 3:
            printf("Carpma: %f\n", sayi1 * sayi2);
            break;

        case 4:
            if (sayi2 != 0)
            {
                printf("Bolme: %f\n", sayi1 / sayi2);
            }
            else
            {
                printf("Bolme sifira bolunemez.\n");
            }
            break;

        case 5:
            printf("%f'nin karekoku = %f\n", sayi1, sqrt(sayi1));
            printf("%f'nin karekoku = %f\n", sayi2, sqrt(sayi2));
            break;

        case 6:
            printf("%f'nin %f ussu= %f\n", sayi1, sayi2, pow(sayi1, sayi2));
            break;

        default:
            printf("Lutfen 1-6 arasinda bir secim yapiniz.\n");
        }
    }

    return 0;
}
