#include <stdio.h>
#include <stdlib.h>

#include <colores.h>

int main() {
    system("chafa -f symbols -s 70x50 Caz2.jpg"); //PARA USAR CHAFA, EL USUARIO HA DE DESCARGARSE "sudo apt install chafa"
    printf("NOMBRE: Bardo.\n");
    system("chafa -f symbols -s 70x50 blood.jpg");

    printf("NOMBRE: Hunter.\n");
    return 0;
}
