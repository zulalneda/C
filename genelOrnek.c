//AU SORU
#include <stdio.h>

int main()
{
    int saat = 0;
    int dakika = 0;
    int genelDakika = 0;

    printf("Saati giriniz:");
    scanf("%d",&saat);
    printf("Dakikayi giriniz:");
    scanf("%d",&dakika);

    genelDakika = (saat * 60) + dakika;

    if(genelDakika<= 1305 && genelDakika >= 1150)
    {
        printf("En yakin kalkis 21:45 Varis 23:58");
    }

    else if (genelDakika<=1150 && genelDakika >= 945)
    {
        printf("En yakin kalkis 19:10 Varis 21:20");
    }

    else if (genelDakika<=945 && genelDakika >= 850)
    {
        printf("En yakin kalkis 15:45 Varis 17:55");
    }

    else if (genelDakika<=850 && genelDakika >= 765)
    {
        printf("En yakin kalkis 14:10 Varis 14:17");
    }

    else if (genelDakika<=765 && genelDakika >= 679)
    {
        printf("En yakin kalkis 12:47 Varis 15:10");
    }

    else if (genelDakika<=679 && genelDakika >= 583)
    {
        printf("En yakin kalkis 11:19 Varis 1:31");
    }

    else if (genelDakika<=583 && genelDakika >= 490)
    {
        printf("En yakin kalkis 9:43 Varis 11:52");
    }

    else if (genelDakika<=490)
    {
        printf("En yakin kalkis 8:10 Varis 10:16");
    }

    
}