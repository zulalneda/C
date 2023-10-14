//boy-kilo-cinsiyete göre işe alım
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float boy;
    float kilo;
    char cinsiyet;

    printf("Lutfen cinsiyetinizi giriniz: ");
    scanf(" %c", &cinsiyet);

    if (cinsiyet == 'k' || cinsiyet == 'K')
    {
        printf("Lutfen once boyunuzu metre cinsinden giriniz: ");
        scanf("%f", &boy);
        if (boy >= 1.65 && boy <= 1.80)
        {
            printf("Boyunuz uygun. Simdi de kilonuzu kg cinsinden giriniz: ");
            scanf("%f", &kilo);
            if (kilo >= 60 && kilo <= 80)
            {
                printf("Tebrikler! Is icin uygunsunuz.");
            }
            else
            {
                printf("Is icin uygun degilsiniz.");
            }
        }
        else
        {
            printf("Is icin uygun degilsiniz.");
        }
    }

    else if (cinsiyet == 'e' || cinsiyet == 'E')
    {
        printf("Lutfen once boyunuzu metre cinsinden giriniz: ");
        scanf("%f", &boy);
        if (boy >= 1.7 && boy <= 1.9)
        {
            printf("Boyunuz uygun. Simdi de kilonuzu kg cinsinden giriniz: ");
            scanf("%f", &kilo);
            if (kilo >= 75 && kilo <= 95)
            {
                printf("Tebrikler! Is icin uygunsunuz.");
            }
            else
            {
                printf("Is icin uygun degilsiniz.");
            }
        }
        else
        {
            printf("Is icin uygun degilsiniz.");
        }
    }
}