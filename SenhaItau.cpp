#include <stdio.h>


int main() {
    int senha[] = {4, 2, 5, 1, 8, 2};
    int grupos[5][2] = {{0, 1}, {2, 9}, {3, 7}, {4, 5}, {6, 8}};
    int certo, g, numero;


    do {
        certo = 1;


        for (int x = 0; x < 6; x++) {
            printf("\nGrupos:\n");
            printf("1: 0 ou 1\n");
            printf("2: 2 ou 9\n");
            printf("3: 3 ou 7\n");
            printf("4: 4 ou 5\n");
            printf("5: 6 ou 8\n");


            printf("Escolha o grupo do digito %d: ", x + 1);
            scanf("%d", &g);


            if (g < 1 || g > 5) {
                certo = 0;
                break;
            }


            numero = senha[x];


            if (numero != grupos[g - 1][0] && numero != grupos[g - 1][1]) {
                certo = 0;
                break;
            }
        }


        if (!certo) {
            printf("\nSENHA INCORRETA. TENTE NOVAMENTE.\n");
        }
    } while (certo == 0);


     printf("\nSENHA CORRETA!\n");


    return 0;
}
