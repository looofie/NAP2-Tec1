#include <stdio.h>
#include <stdlib.h> //Precisa para limpar o terminal pela funcao system()
//cabeçalho de funçoes
//função de escolha de opções
int escolha(int min, int max) {
    int op;
    do {
        printf("\nEscolha: ");
        scanf("%d", &op);
    } while (op < min || op > max);
    return op;
}

//================================intro=================================

void intro() {
    printf("Narração: É noite de domingo. Sua mãe acaba de te aprontar para dormir. Ainda sem sono, você pede a ela uma história.\n");
    printf("Mãe: Pronto, meu amor… Quer que eu conte aquela história do coelhinho ou invento algo novo hoje?\n");
    printf("Protagonista: Hum… acho que quero algo mais… assustador. Mas não muito, tá? Só pra dar um friozinho na barriga.\n");
    printf("Mãe: Assustador, é? Então acho que posso te contar algumas lendas que a vovó me contava quando eu era pequena. São histórias da nossa Amazônia… sobre a Iara, a Matinta Perera e Boiúna. Qual você quer ouvir primeiro?");
    escolhaLenda();
}

void escolhaLenda() {
printf("1. Iara\n");
printf("2. Matinta Perera\n");
printf("3. Boiúna\n");
int op = escolha(1, 3);
switch (op) {
    case 1: noDaIara1A(); break;
    case 2: noDaMatinta1A(); break;
    case 3: noDoBoiuna1A(); break;
    }
// ===============================lenda Iara============================

void noDaIara1A() {
    printf("Mãe: A Iara é uma sereia das águas doces, linda como o luar refletido no rio. Dizem que ela vive nas profundezas, com cabelos longos e negros, pele dourada pelo sol e olhos verdes como a mata.\n");
    printf("Mas cuidado… sua beleza é perigosa. Ela canta para encantar pescadores e viajantes, levando-os para o fundo do rio, de onde nunca mais voltam.\n");
    printf("Uma noite, um jovem pescador chamado Aruã estava sozinho no barco, quando ouviu uma melodia suave vindo da neblina sobre o rio…\n");
    printf("Se fosse você no lugar de Aruã, o que faria?\n");
    printf("1. Seguir o som.\n");
    printf("2. Ficar parado e ouvir.\n");
    printf("3. Fugir remando.\n");
    int op = escolha(1, 3)
    switch (op)
    {
    case 1: noDaIara2A(); break;
    case 2: noDaIara2B(); break;
    case 3: noDaIara2C(); break;    
    }
}





































}   
int main() {
    intro();
    return 0;
}