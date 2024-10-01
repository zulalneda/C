#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sifre[80] = {};
    char sifreDogrulama[80] = {};
    int yanlis;
    int i;

    while (1)
    {
        i = 0;
        yanlis = 0;
        printf("Lutfen sifrenizi giriniz: \n");
        scanf("%s ", sifre);

        printf("Lutfen sifrenizi tekrar giriniz: \n");
        scanf("%s ", sifreDogrulama);

        while (!(sifre[i] == '\0' && sifreDogrulama[i] == '\0'))
        {
            if (sifre[i] != sifreDogrulama[i])
            {
                printf("Sifreniz hatali. Lutfen tekrar deneyiniz!");
                yanlis = 1;
                break;
            }
            else
            {
                i++;
            }
        }
        if (yanlis == 0)
        {
            printf("Sifrelerin her ikisi birbirleriyle eslesti. \n");
            break;
        }
    }
}