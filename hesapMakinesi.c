#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> //true - false değeri için

int main(void)
{
    int secim, sayi1mod, sayi2mod, c = 26;
    float toplama, cikarma, carpma, bolme, karekok1, karekok2, mod, yuzdelik, sayi1, sayi2;
    bool i = true;

    while (i)
    {

        printf("Lutfen iki sayi icin yapmak istediginiz islemi seciniz. Programdan cikmak istiyorsaniz ctrl + z basiniz:\n");
        printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Karekok\n6.Mod alma\n7.Yuzdelik hesaplama\n");

        scanf("%d", &secim);

        if (secim >= 1 && secim <= 7)
        {
            switch (secim)
            {
            case 1:
                printf("Iki sayi giriniz:\n");
                scanf("%f%f", &sayi1, &sayi2);
                toplama = sayi1 + sayi2;
                printf("%f + %f = %f\n", sayi1, sayi2, toplama);
                break;

            case 2:
                printf("Iki sayi giriniz:\n");
                scanf("%f%f", &sayi1, &sayi2);
                cikarma = sayi1 - sayi2;
                printf("%f - %f = %f\n", sayi1, sayi2, cikarma);
                break;

            case 3:
                printf("Iki sayi giriniz:\n");
                scanf("%f%f", &sayi1, &sayi2);
                carpma = sayi1 * sayi2;
                printf("%f * %f = %f\n", sayi1, sayi2, carpma);
                break;

            case 4:
                printf("Iki sayi giriniz:\n");
                scanf("%f%f", &sayi1, &sayi2);
                bolme = sayi1 / sayi2;
                printf("%f / %f = %f\n", sayi1, sayi2, bolme);
                break;

            case 5:
                printf("Sayi giriniz:\n");
                scanf("%f", &sayi1);
                karekok1 = sqrt(sayi1);
                printf("Girilen %f nin karekoku: %f\n", sayi1, karekok1);
                break;

            case 6:
                printf("Iki sayi giriniz:\n");
                scanf("%d%d", &sayi1mod, &sayi2mod);
                mod = sayi1mod % sayi2mod;
                printf("%d %% %d = %f\n", sayi1, sayi2, mod);
                break;

            case 7:
                printf("Sayi giriniz:\n");
                scanf("%f%f", &sayi1, &sayi2);
                yuzdelik = sayi1 / 100;
                printf("yuzdelik: %f", yuzdelik);
                break;

            default:
                printf("Lutfen 1- 7 arasinda secim yapiniz.\n");
            }
        }
        else if (secim == c)
        {
            printf("Program basariyla sonlandirildi.\n");
            i = false;
        }
    }
}