#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define sayilarinKiyasi(sayi3,sayi4) ((sayi3 > sayi4) ? "Ilk girilen sayi ikinciden daha buyuktur." : "Ikinci girilen sayi ilkinden daha buyuktur.")
#define saatiOgren(karakter) ((karakter == 'E' || karakter == 'e') ? __TIME__ : "Sordugunuz sorudan fetocu gibi algiladim sizi. Feto agziyla sorulan sorulara cevap vermiyorum.")
#define sayilarinToplami(sayi1, sayi2) (sayi1 + sayi2)
#define kupunuAl(sayi) (pow(sayi,3))
#define kareAl(x) ((x) * (x))

void sayiKarsilastirma()
{
    int sayi1,sayi2;
    printf("Lutfen sirasiyla iki sayi giriniz: \n");
    scanf("%d %d",&sayi1,&sayi2);

    if(sayi1 > sayi2)
    {
         printf("Ilk girilen sayi ikinci girilen sayidan daha buyuktur.\n");
    }

    else
    {
         printf("Ikinci girilen sayi ilk girilen sayidan daha buyuktur.\n");
    }
}
int main()
{
    sayiKarsilastirma();

    //int sayi3,sayi4;
    printf("%s\n", sayilarinKiyasi(9,8)); //%s dememizin sebebi string ifade döndürmemizdir.

    char karakterGir;
    printf("Saati ogrenmek istiyor musunuz? (e/E) \n");
    scanf(" %c",&karakterGir);

    if(saatiOgren(karakterGir))
    {
        printf("%s\n",saatiOgren(karakterGir));
    }

    else
    {
        printf("%s\n",saatiOgren(karakterGir));
    }

    printf("%f\n",sayilarinToplami(4,5.9));
    printf("%f\n",kupunuAl(7));
    printf("%d\n",kareAl(5));

}