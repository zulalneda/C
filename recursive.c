#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int recursiveFunc(int sayi)
{
    if(sayi <= 1)
    {
        return 1;
    }

    else
    {
        return sayi *= recursiveFunc(sayi - 1);
    }
}

int kendisineKadarToplama(int deger)
{
    if(deger <= 1)
    {
        return 1;
    }

    else
    {
        return deger += kendisineKadarToplama(deger - 1); 
    }
}

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz: \n");
    scanf("%d",&sayi);
    sayi = recursiveFunc(sayi);
    printf("%d\n",sayi);

    int deger;
    printf("Lutfen bir deger giriniz: \n");
    scanf("%d",&deger);
    deger = kendisineKadarToplama(deger - 1);
    printf("%d\n",deger);

}