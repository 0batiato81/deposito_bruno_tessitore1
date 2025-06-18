#include <stdio.h>

#define MAX_NUMERI 50

int main() {
    int numeri[MAX_NUMERI];
    int quanti, i, valoreDaCercare, contatore = 0;

    // 1) Chiede all'utente quanti numeri vuole inserire (massimo 50)
    printf("Quanti numeri vuoi inserire? (max %d): ", MAX_NUMERI);
    scanf("%d", &quanti);

    // Controlla che il numero sia valido
    if (quanti < 1 || quanti > MAX_NUMERI) {
        printf("Numero non valido. Devi inserire un numero tra 1 e %d.\n", MAX_NUMERI);
        return 1;
    }

    // 3) Chiede all'utente di inserire i numeri uno alla volta
    for (i = 0; i < quanti; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // 4) Chiede all'utente di inserire un valore da cercare nell'array
    printf("Inserisci il valore da cercare: ");
    scanf("%d", &valoreDaCercare);

    // 5) Conta quante volte il valore appare nell'array
    for (i = 0; i < quanti; i++) {
        if (numeri[i] == valoreDaCercare) {
            contatore++;
        }
    }

    // Stampa il risultato
    printf("Il valore %d appare %d volta%s nell'array.\n", valoreDaCercare, contatore, contatore == 1 ? "" : "e");

    return 0;
}
