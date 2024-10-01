#include <stdio.h>

float dortIslem(int *deger1 ,int *deger2 ,int secim);

int main()
{
    int sayi1, sayi2;
    int islem;
    printf("Lutfen isleme sokmak istediginiz sayilari giriniz:\n");
    scanf("%d %d",&sayi1,&sayi2);
    printf("Lutfen yapmak istediginiz islemi seciniz: (1. Toplama / 2. Cikarma / 3. Carpma / 4. Bolme)\n");
    scanf("%d",&islem);

    printf("%f\n",dortIslem(&sayi1,&sayi2,islem));

    return 0;

}

float dortIslem(int *deger1 ,int *deger2 ,int secim)
{
    if(secim == 1)
    {
        int toplam = *deger1 + *deger2;
        
        return toplam;
    }

    else if(secim == 2)
    {
        int cikarma = *deger1 - *deger2;

        return cikarma;
    }

    else if(secim == 3)
    {
        int carpma = (*deger1) * (*deger2);

        return carpma;
    }

    else if(secim == 4)
    {
        int bolme = *deger1 / *deger2;

        return bolme;
    }

    else
    {
        printf("Lutfen 1 - 4 arasinda bir secim yapiniz.\n");
        return 1;
    }
}
