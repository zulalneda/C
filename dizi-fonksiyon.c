#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int enBuyukSayi(int sayilar[]);

int main()
{
    int sayilar[10];

    printf("%d", enBuyukSayi(sayilar));
}

int enBuyukSayi(int sayilar[])
{

    int enBuyukSayi = sayilar[0];

    for (int i = 0; i < 10; i++)
    {
        printf("Lutfen birbirinden farkli 10 tane dogal sayi giriniz: \n");
        scanf("%d", &sayilar[i]);

        if (sayilar[i] < 0)
        {
            printf("Lutfen dogal sayi giriniz.\n");
            return 1;
        }
    }

    for (int j = 1; j < 10; j++)
    {
        if (sayilar[j] > enBuyukSayi)
        {
            enBuyukSayi = sayilar[j];
        }
    }

    return enBuyukSayi;
}

// #include <stdio.h>

// int enBuyukSayi(int sayilar[10]);

// int main() {
//     int sayilar[10];

//     for (int i = 0; i < 10; i++) {
//         printf("Lutfen birbirinden farkli 10 tane dogal sayi giriniz: \n");
//         scanf("%d", &sayilar[i]);

//         if (sayilar[i] < 0) {
//             printf("Lutfen dogal sayi giriniz.\n");
//             return 1;
//         }
//     }

//     printf("En buyuk sayi: %d\n", enBuyukSayi(sayilar));

//     return 0;
// }

// int enBuyukSayi(int sayilar[10]) {
//     int enBuyukSayi = sayilar[0];

//     for (int j = 1; j < 10; j++) {
//         if (sayilar[j] > enBuyukSayi) {
//             enBuyukSayi = sayilar[j];
//         }
//     }

//     return enBuyukSayi;
// }
