#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

    printf("Tapez le prix HT d'un kilo de tomates (entier entre 0 et 100) :");
    fflush(stdout);
    float tomatoHTPrice;
    scanf("%f", &tomatoHTPrice);
    printf("Le prix HT d'un kilo de tomates est de : %f\n", tomatoHTPrice);
    fflush(stdout);

    printf("Tapez le nombre de kilo de tomates (entier entre 0 et 100) :");
    fflush(stdout);
    float tomatoKg;
    scanf("%f", &tomatoKg);
    printf("Le nombre de kilo de tomates est de : %f\n", tomatoKg);
    fflush(stdout);

    printf("Tapez le taux de TVA (entier entre 0 et 100) :");
    fflush(stdout);
    float tva;
    scanf("%f", &tva);
    printf("Le taux de TVA est de : %f\n", tva);
    fflush(stdout);

    float ttc = tomatoHTPrice * tomatoKg * (1+ tva/100);
    printf("Le prix TTC des marchandises est de : %f Simflouzes\n", ttc);
    fflush(stdout);

    return 0;
}
