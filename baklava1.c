#include <stdio.h>

int main() {
    int n;
    printf("Baklava deseni icin yarim boyut giriniz (tek sayi): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Lutfen tek bir sayi giriniz.\n");
        return 1;
    }

    int space = n / 2;
    int stars = 1;

    // Üst kısım çizimi
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        for (int j = 0; j < space; j++) {
            printf(" ");
        }

        printf("\n");
        space--;
        stars += 2;
    }

    // Alt kısım çizimi
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        for (int j = 0; j < space; j++) {
            printf(" ");
        }

        printf("\n");
        space++;
        stars -= 2;
    }

    return 0;
}
