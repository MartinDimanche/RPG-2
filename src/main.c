#include <stdio.h> //Permet l'entré et sortie (écrire un message à l'écran/afficher un message)
#include <stdlib.h> //Ajoute des bibliothèques supplémentaires permettant notamment l'allocation dynamique

#include "RPG.h"

int main()
{
    RPG_Run();
    return 0;
}

//g++ src/*.c -o RPG