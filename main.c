#include <stdio.h>
#include <stdlib.h> //Precisa para limpar o terminal pela funcao system()


int main(){
    int menuOpc;
    int mostraMenu = 1;
                
    while(mostraMenu){
        system("cls");
        printf("[ JOGO INCRIVEL SEM NOME AINDA ]\n---------------------------------\n");
        printf("1. Comecar\n2. Continuar\n3. Reiniciar\n4. Sair\n");
        printf("---------------------------------\nDigite o numero correspondente: ");
        scanf("%d", &menuOpc);

        if(menuOpc == 4){
            mostraMenu = 0;
        }
    }
}