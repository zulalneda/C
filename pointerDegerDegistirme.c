#include <stdio.h>

void degiskenDegistirme(int *deger, int *deger2);

int main()
{
    int sayi,sayi2;
    printf("Lutfen iki sayi giriniz:\n");
    scanf("%d %d",&sayi,&sayi2);
    degiskenDegistirme(&sayi,&sayi2);

    return 0;
}

void degiskenDegistirme(int *deger, int *deger2)
{
    printf("1. sayi = %d, 2. sayi = %d\n",*deger,*deger2);
    int temp = *deger2;
    *deger2 = *deger;
    *deger = temp;

    printf("Yeni 1. sayi = %d, yeni 2. sayi = %d\n",*deger,*deger2);
}