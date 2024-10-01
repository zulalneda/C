#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int dizi[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int dizi2[3][4] = {{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    int diziToplam[3][4];

    for(int i = 0; i < 3; i++)
    {
        for(int k = 0; k < 4; k++)
        {
            diziToplam[i][k] = dizi[i][k] + dizi2[i][k];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int k = 0; k < 4; k++)
        {
            printf("Toplam = %d\n",diziToplam[i][k]);
        }
    }


    int dizi3[3][4];
    int dizi4[3][4];
    int toplam2[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Lutfen 1. matrisin %d. satirinin %d. elemanini giriniz: \n", i + 1, j + 1);
            scanf("%d", &dizi3[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Lutfen 2. matrisin %d. satirinin %d. elemanini giriniz: \n", i + 1, j + 1);
            scanf("%d", &dizi4[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            toplam2[i][j] = dizi3[i][j] + dizi4[i][j];
        }
    }

    system("CLS");

    printf("1. ve 2. matrislerin toplami: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n", toplam2[i][j]);
        }
    }
}