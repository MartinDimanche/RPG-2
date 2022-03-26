#include <stdio.h> //Permet l'entré et sortie (écrire un message à l'écran/afficher un message)
#include <stdlib.h> //Ajoute des bibliothèques supplémentaires permettant notamment l'allocation dynamique
//Test5//
void testDisplay();

int main()
{
    printf("Hello\n");
    testDisplay();
    printf("Ce message est envoye depuis un raspberry pi 3\n");
    printf("Celui là, il est envoye depuis vscode sur windows !\n");
    return 0;
}
