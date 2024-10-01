#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main()
{
    char isim[MAX];
    char meslek[MAX];

    puts("Lutfen sirasiyla tam isminizi ve mesleginizi giriniz:");
    scanf("%99[^\n]",isim);
    getchar();
    scanf("%99[^\n]",meslek);
    getchar();
    printf("%s\n%s\n",isim,meslek);
}