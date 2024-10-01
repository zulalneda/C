#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char isim[] = {"Zulal Neda Ozmen"};
    //printf("%s\n",isim);
    //printf("%d\n",strlen(isim));

    char cumle[] = "Ama siz anneleri tarafindan size emanet edilen cocuklari her bakimdan yetersiz gordugunuz bir kadinin annelik etmesine kasisiniz ama";
    //printf("%s",cumle);
    int uzunluk = strlen(cumle);

    for(int i = 0; i < strlen(cumle) - 1; i++)
    {
        printf("%c",cumle[i]);
    }

    puts("");

    for(int i = strlen(cumle) - 1; i >= 0; i--)
    {
        printf("%c",cumle[i]);
    }

    puts("");

    char yakisikliGuvenlik[] = {"Ah sana vah sana arada yazarim ama ismini kalbimden silmistim oysa"};

    for(int j = 0; j < strlen(yakisikliGuvenlik) - 1; j++)
    {
        printf("%c",yakisikliGuvenlik[j]);
    }

    puts("");

    for(int k = strlen(yakisikliGuvenlik) - 1; k >= 0; k--)
    {
        printf("%c",yakisikliGuvenlik[k]);
    }

    puts("");

    
}