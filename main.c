#include <stdio.h>

int main(void) {
    int numeroProdotti;
    float prezzoUnitario;
    float sconto;
    printf("inserisci numero di prodotto: ");
    scanf("%d",&numeroProdotti);
    printf("inserisci numero di prezzo unitario: ");
    scanf("%f",&prezzoUnitario);
     float importoTotaleNonScontato= numeroProdotti * prezzoUnitario;
    printf("importoTotaleNonScontato = %f",importoTotaleNonScontato);
    if(importoTotaleNonScontato>10) {
         sconto=importoTotaleNonScontato*0.10;
    }
    else if(importoTotaleNonScontato>50) {
         sconto=importoTotaleNonScontato*0.20;

    }
    printf("sconto = %f",sconto);
    float importo=importoTotaleNonScontato-sconto;
    printf("importo = %f",importo);


    return 0;
}
