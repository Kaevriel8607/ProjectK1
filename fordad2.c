#include <stdio.h>
#include <math.h>
#include <ctype.h> // toupper için

int toplam(int verisayisi, int veri[]) {
    int toplam = 0;
    for (int i = 0; i < verisayisi; i++) {
        toplam += veri[i]; // düzeltme: =+ yerine +=
    }
    return toplam;
}

double standartsapma(int verisayisi, int veri[]) {
    double fark;
    double kareleri;
    double kareleritopami = 0; // tanımlandı ama başlatılmamıştı
    double ortalama = toplam(verisayisi, veri) / (double)verisayisi; // her seferinde hesaplamasın

    for (int i = 0; i < verisayisi; i++) { // <= yerine < olmalı
        fark = veri[i] - ortalama; // ortalamadan fark alınmalı
        kareleri = fark * fark;
        kareleritopami += kareleri;
    }

    return kareleritopami; // return eksikti
}

int main(void) {
    int verisayisi;
    char operation;
    double sonuc;

    printf("\nPlease enter the number of datas: ");
    scanf("%d", &verisayisi);

    int veri[verisayisi]; // VLA kullanımı burada geçerli

    printf("\nPlease enter your datas one by one:\n");
    for (int i = 0; i < verisayisi; i++) {
        scanf("%d", &veri[i]);
    }

    printf("\nPlease type the operation you'll use (arithmetic mean = a, standard deviation = s ): ");
    getchar(); // '\n' karakterini temizlemek için
    scanf("%c", &operation);

    operation = toupper(operation); // Toupper değil toupper

    switch (operation) {
        case 'A':
            sonuc = toplam(verisayisi, veri) / (double)verisayisi;
            printf("\nResult: %lf\n", sonuc);
            break; // eksikti

        case 'S':
            sonuc = sqrt(standartsapma(verisayisi, veri) / (verisayisi - 1)); // standart sapma formülü
            printf("\nResult: %lf\n", sonuc);
            break; // eksikti

        default:
            printf("\nInvalid operation selected.\n");
            break;
    }

    return 0;
}
