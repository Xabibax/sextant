//
// Created by xavie on 01/04/2020.
//

#include "tp0.h"
#include "Point.h"

// 1. Exercices en C et C++
// 1.1 Le prix de la patate
void tomatoPrice() {
    printf("Tapez le prix HT d'un kilo de tomates (entier entre 0 et 100) :");
    fflush(stdout);
    float tomatoHTPrice;
    scanf_s("%f", &tomatoHTPrice);
    printf("Le prix HT d'un kilo de tomates est de : %f\n", tomatoHTPrice);
    fflush(stdout);

    printf("Tapez le nombre de kilo de tomates (entier entre 0 et 100) :");
    fflush(stdout);
    float tomatoKg;
    scanf_s("%f", &tomatoKg);
    printf("Le nombre de kilo de tomates est de : %f\n", tomatoKg);
    fflush(stdout);

    printf("Tapez le taux de TVA (entier entre 0 et 100) :");
    fflush(stdout);
    float tva;
    scanf_s("%f", &tva);
    printf("Le taux de TVA est de : %f\n", tva);
    fflush(stdout);

    float ttc = tomatoHTPrice * tomatoKg * (1+ tva/100);
    printf("Le prix TTC des marchandises est de : %f Simflouzes\n", ttc);
    fflush(stdout);
}

// 1.2 Le triangle inversé
void reversedTriangle() {
    printf("Saisissez un entier :");
    fflush(stdout);
    int n;
    scanf_s("%d", &n);
    printf("La hauteur du triangle est de : %d\n", n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf(" ");
        }
        for (int k = i; k < n; ++k) {
            printf("*");
        }
        printf("\n");
        fflush(stdout);
    }
}


// 1.3 Cache cache
#define size 10
void hideAndSeek() {
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Saisissez l'entier %d / %d :\n", (i+1), size);
        fflush(stdout);
        scanf_s("%d", &arr[i]);
    }
    printf("Saisissez un entier :");
    fflush(stdout);
    int v;
    bool found = false;
    scanf_s("%d", &v);
    for (int i : arr)
        if (i == v) {
            found = true;
            break;
        }
    found ? printf("V se trouve dans le tableau") : printf("V ne se trouve pas dans le tableau");
    fflush(stdout);
}

// 1.4 La classe point
void pointClass() {
    Point p1 = Point(1.5, 1.5);
    p1.affiche();
    p1.deplace(1.0,1.0);
    p1.affiche();
    p1.milieu(p1, Point(5.0,5.0)).affiche();
}