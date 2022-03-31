#include <stdio.h> //Permet l'entré et sortie (écrire un message à l'écran/afficher un message)
#include <stdlib.h> //Ajoute des bibliothèques supplémentaires permettant notamment l'allocation dynamique

#include "player.h"

int main()
{
    int multiplier = 5;
    scanf("%d", &multiplier);
    multiplier = blip(multiplier);
    printf("multiplier = %d", multiplier);
    return 0;
}

int blip(int multiplier)
{
    return multiplier*3;
}
