#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char muzikGrubu[] = "Bangtan Sonyeondan";
    char ulke[] = {"Guney Kore"};

    strcpy(muzikGrubu,ulke); // strcpy, sağdakini soldakine aktarır.
    printf("%s",muzikGrubu); 
    puts("");

    strncpy(muzikGrubu,ulke,5); // ortadaki degerin en sonda girilen sayı kadarki degerini en bastaki degere atar.
    printf("%s",muzikGrubu);

    
}