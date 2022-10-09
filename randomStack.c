#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int randStack[SIZE],i;

void rastgeleStack(){
    for (i = 0; i < SIZE; i++)
        randStack[i] = rand() % 1000 + 1;
}

void yazdir(){
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEleman numarasi %d::%d", i+1, randStack[i]);
    }
}

int bul(int veri){
    int karsilastirma = 0;
    int index = -1;

    for (i = 0;  i<SIZE ; i++) {
        karsilastirma++;
        if(veri == randStack[i]){
            index = i;
            break;
        }
    }
    printf("\n\nToplam karsilastirma sayisi: %d",karsilastirma);
    return index;
}

int main(void){
    rastgeleStack();
    yazdir();

    int konum = bul(62);

    if(konum != -1)
        printf("\n\nAranan eleman bulundu. Konum: %d",konum+1);
    else
        printf("\n\nAranan eleman bulunamadi.");
}
