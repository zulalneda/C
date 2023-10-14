#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float sayi1, sayi2, sayi3;
    float toplamFormulu;
    float carpim;
    float ortalama;
    printf("Lutfen birbirinden farkli 3 adet sayi giriniz: \n");
    scanf("%f %f %f", & sayi1, &sayi2, &sayi3);

    toplamFormulu = sayi1 + sayi2 + sayi3; 
    printf("Toplam : %f \n", toplamFormulu);

    carpim = sayi1 * sayi2 * sayi3;
    printf("Carpim: %f \n", carpim);

    ortalama = toplamFormulu / 3;
    printf("Ortalama: %.3f \n",ortalama);
    
    
    if(sayi1 >sayi2 && sayi1 > sayi3)
    {
        if (sayi2 > sayi3)
        {
            printf("En kucuk sayi: %f \n",sayi3);
            printf("Ortanca sayi: %f\n", sayi2);
            printf("En buyuk sayi: %f \n",sayi1);
        }

        else 
        {
            printf("En kucuk sayi: %f \n",sayi2);
            printf("Ortanca sayi: %f\n", sayi3);
            printf("En buyuk sayi: %f \n",sayi1);
        }
    }

    if (sayi2 > sayi1 && sayi1 > sayi3)
    {
        if (sayi1 > sayi3)
        {
            printf("En kucuk sayi: %f\n",sayi3);
            printf("Ortanca sayi: %f\n", sayi1);
            printf("En buyuk sayi: %f\n", sayi2);
        }

        else
        {
            printf("En kucuk sayi: %f\n",sayi1);
            printf("Ortanca sayi: %f\n", sayi3);
            printf("En buyuk sayi: %f\n",sayi2);
        }
    }


    if (sayi3 > sayi1 && sayi3> sayi2)
    {
        if (sayi1 > sayi2)
        {
            printf("En kucuk sayi: %f\n",sayi2);
            printf("Ortanca sayi: %f\n", sayi1);
            printf("En buyuk sayi: %f\n", sayi3);
        }

        else
        {
            printf("En kucuk sayi: %f\n",sayi1);
            printf("Ortanca sayi: %f\n", sayi2);
            printf("En buyuk sayi: %f\n",sayi3);
        }
    }
    
    
    
    return 0;


}