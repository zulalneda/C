#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamSayi = 6; //4 byte
    double buyukYerKaplayanKesirliSayi = 7.2 ; //8 byte
    short int tamsayi; //2 byte
    long int tamsayi2; //4byte
    char karakter = 'K'; //1 byte   //karakter yazdırınca '' kullanılır ""KULLANILMAZ!
    char karakterDizisi[10] = "Yakalamak"; //10 byte   Yazdırmak istediğimiz dizideki karakter sayısından 1 fazlasını koymalıyız. Sonuncu \0 olur.
    float kesirliSayi = 3.9; //4 byte

    char karakterDizisiOrnegi[10] = {'Y','a','k','a','l','a','m','a','k'};
    printf("%s\n",karakterDizisiOrnegi);

    printf("%c RAM'de %zu byte kadar yer kaplar.\n",karakter,sizeof(char)); // karakter bastırmak için %c
    printf("%s RAM'de %zu byte kadar yer kaplar.\n",karakterDizisi,sizeof(karakterDizisi));  //karakter dizisi bastırmak için %s
    printf("%.6d RAM'de %zu byte kadar yer kaplar.\n",tamSayi,sizeof(int));   //. ile koyulan sayıdan 1 eksik kadar soluna "0" yazdırır.
    printf("%.1f RAM'de %zu byte kadar yer kaplar.\n",buyukYerKaplayanKesirliSayi,sizeof(float)); // % işaretinden sonra . ile koyulan sayı virgülden sonra kaç basamak gösterilmesini istediğimizi gösterir
    printf("%f RAM'de %zu byte kadar yer kaplar.\n",kesirliSayi,sizeof(float));
    return 0;
}