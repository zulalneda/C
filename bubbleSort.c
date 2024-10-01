#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void bubbleSort(int dizi[],int boyut);

int main()
{
    int dizi[MAX],boyut;

    printf("Kac boyutlu bir dizi istersiniz? \n");
    scanf("%d",&boyut);

    printf("Dizi elemanlarini giriniz: \n");
    for(int i = 0; i < boyut; i++)
    {
        scanf("%d",&dizi[i]);
    }

    bubbleSort(dizi,boyut);
}

void bubbleSort(int dizi[],int boyut)
{
    for(int i = 0; i < boyut; i++)
    {
        for(int j = 0; j < boyut - i - 1; j++)
        {
            if(dizi[j] > dizi[j + 1])
            {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    for(int k = 0; k < boyut; k++)
    {
        printf("%d ",dizi[k]);
    }
}