#include <stdio.h>

int main(void)
{
    int satir,sutun,sayi;
    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d",&sayi);

    for(satir = 1; satir <= sayi; satir++)
    {
        for(sutun = sayi - satir; sutun >= 0; sutun--)
        {
            printf("*");
        }

        printf("\n");
    }

    
    for(satir = 1;satir <= sayi;satir++)
    {
        for(sutun = 1; sutun <= satir; sutun++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("%*c\n", sayi, ' '); // %*c, alan genişliğini değiştirir
    
    




    
}