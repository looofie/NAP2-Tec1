#include <stdio.h>
#include <stdlib.h> //Precisa para limpar o terminal pela funcao system()
//cabeçalho de funçoes
void escolhaLenda();
void noDaIara1A();
void noDaIara2A();
void noDaIara2B();
void noDaIara2C();

void noDaIara3A();
void noDaIara3B();
void noDaIara3C();

void noDaIara4A();
void noDaIara4B();
void noDaIara4C();

void noDaIara5A();
void noDaIara5B();
void noDaIara5C();

void finalPositivo();
void finalNegativo1();
void finalNegativo2();





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
    printf("Assustador, é? Então acho que posso te contar algumas lendas que a vovó me contava quando eu era pequena. São histórias da nossa Amazônia… sobre a Iara, a Matinta Perera e Boiúna. Qual você quer ouvir primeiro?");
    escolhaLenda();
}

void escolhaLenda() {
printf("1. Iara\n");
printf("2. Matinta Perera\n");
printf("3. Boiúna\n");
int op = escolha(1, 3);
switch (op) {
    case 1: noDaIara1A(); break;
    //case 2: noDaMatinta1A(); break;
    //case 3: noDoBoiuna1A(); break;
    }
}
// ===============================lenda Iara============================

void noDaIara1A() {
    printf("A Iara é uma sereia das águas doces, linda como o luar refletido no rio. Dizem que ela vive nas profundezas, com cabelos longos e negros, pele dourada pelo sol e olhos verdes como a mata.\n");
    printf("Mas cuidado… sua beleza é perigosa. Ela canta para encantar pescadores e viajantes, levando-os para o fundo do rio, de onde nunca mais voltam.\n");
    printf("Uma noite, um jovem pescador chamado Aruã estava sozinho no barco, quando ouviu uma melodia suave vindo da neblina sobre o rio…\n");
    printf("Se fosse você no lugar de Aruã, o que faria?\n");
    printf("1. Seguir o som.\n");
    printf("2. Ficar parado e ouvir.\n");
    printf("3. Fugir remando.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: noDaIara2A(); break;
    case 2: noDaIara2B(); break;
    case 3: noDaIara2C(); break;    
    }
}


void noDaIara2A() {
    printf("Aruã rema em direção à voz. A neblina se abre e ele vê a Iara, sorrindo. Os olhos dela brilham como esmeraldas. Uma leveza toma conta de seu corpo, como se a água o chamasse pelo nome e o barco já não fosse chão, mas um obstáculo entre ele e aquilo que deseja.\n");
    printf("1. Mergulhar para se aproximar.\n");
    printf("2. Fechar os olhos e tentar resistir.\n");
    printf("3. Gritar para espantar a sereia.\n");
    int op = escolha(1, 3);
    switch (op)
    {

    case 1: printf("Aruã se inclina, sentindo o casco balançar. A canção se adensa, quente e doce, como se dissesse que o mergulho é retorno e descanso. Um clarão verde lampeja adiante, convidando-o a ir mais fundo.");
    noDaIara3A(); break;

    case 2: printf("Ele aperta os olhos e agarra o remo, buscando peso no próprio corpo. O canto não some, muda de lugar e então, mesmo sem olhar, Aruã percebe que algo cintila sob o casco, como se um punhado de luzes douradas pulasse no fundo.");
    noDaIara3B(); break;

    case 3: printf("Aruã enche o peito e solta um grito rasgado, batendo o remo na borda do casco. O som estala no ar e racha a bruma. O grito racha a bruma e faz ondas curtas tremerem ao redor do barco. A canção se desfaz, mas retorna fina, leve, em sussurros que correm com a brisa e repetem o nome dele..");
    noDaIara3C(); break;    
    }
    
}


void noDaIara2B() {
    printf("Aruã permanece imóvel, atento a cada som. A melodia se aproxima, ganhando detalhes, e então ele nota um reflexo trêmulo na superfície da água: a forma não é humana, mas algo que o observa de baixo, paciente.\n");
    printf("1. Rezar e remar para trás.\n");
    printf("2. Jogar uma rede na água.\n");
    printf("3. Tocar um tambor para afastar o espírito.\n");

    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Sem virar o rosto para a água, Aruã cruza os dedos no peito, sussurra uma reza curta e começa a remar de costas, sem mostrar a nuca, recua em braçadas curtas. A canção afina até virar um fio que quase se parte, e é nesse silêncio frágil que um sopro frio toca o rosto dele e sussurra seu nome.");
    noDaIara3C(); break;

    case 2: printf("Aruã lança a rede com um giro firme, deixando-a abrir como um véu sobre o espelho escuro. A rede abre como um véu e afunda macia. Por um instante, nada então a linha estremece, puxa, arranha a palma. Quando Aruã recolhe, as malhas voltam rasgadas e um brilho verde se move lá adiante.");
    noDaIara3A(); break;

    case 3: printf("Aruã pega o pequeno tambor e marca um ritmo curto e grave, que bate no peito e corre pela superfície da água. O ritmo grave corre pela pele do rio. A melodia falha e se cala, mas a água permanece inquieta, riscada por lampejos dourados que dançam sob o casco.");
    noDaIara3B(); break;
    }
}
void noDaIara2C() {
    printf("Aruã finca o remo e dispara. A cada braçada, porém, a canção cresce, como se não estivesse à frente, mas no encalço dele, soprando-lhe na nuca e confundindo sua direção.\n");
    printf("1. Continuar remando até a margem.\n");
    printf("2. Pular na água para nadar mais rápido.\n");
    printf("3. Fechar os ouvidos e cantar alto.\n");
    int op = escolha(1, 3);
    switch (op)
    {

    case 1: printf("Ele fixa o olhar na linha escura das árvores e não perde o compasso. Os braços ardem, o casco corta a água com pressa. O canto, atrás, se afina como se passasse por dentro do casco, quando Aruã olha de relance, percebe pontos de luz girando sob ele.");
    noDaIara3B(); break;

    case 2: printf("Cego de urgência, a ideia de abandonar o barco parece, por um segundo, a única saída. O corpo se inclina, os dedos tocam a borda fria e a canção muda de tom vira promessa enquanto, adiante, a bruma se abre.");
    noDaIara3A(); break;

    case 3: printf("Aruã aperta as mãos contra as orelhas e solta sua própria cantiga, firme e fora do encanto, marcando o ritmo com o remo. A voz dele cria um trilho, um som-casulo onde a melodia estranha não entra. A canção da Iara se desfaz em volta, mas não some de todo, volta pelas frestas do vento, em palavras quebradas que se juntam no nome dele.");
    noDaIara3C(); break;    
    }
}

void noDaIara3A() {
    printf("A melodia não era mais apenas um som, meu bem, ela cresceu e se tornou a própria pulsação do rio. A água vibrava com a canção. A neblina, antes cinzenta, agora parecia tecida com fios de prata, e no meio dela, a Iara surgiu novamente, ainda mais perto. Seus lábios se moviam, formando palavras que Aruã não entendia, mas seu coração sim. Elas prometiam um lugar sem tristeza, um tesouro escondido só para ele, tudo o que ele sempre sonhou em segredo.\n");
    printf("1. Responder ao chamado com um aceno.\n");
    printf("2. Virar o barco para a margem oposta.\n");
    printf("3. Atirar uma pedra na água para quebrar o encanto.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Com o coração batendo descompassado, Aruã ergue a mão, um gesto lento, quase em sonho. O sorriso da Iara se abre como uma flor rara na correnteza. E então, ele sente: um toque gelado e liso roçando seu tornozelo, subindo pela perna, como se o próprio rio, com dedos de água, quisesse puxá-lo para um abraço.");
    noDaIara4A(); break;
    case 2: printf("Num lampejo de medo, ele joga todo o peso do corpo no remo, tentando virar o barco para a margem oposta. Mas a melodia... ah, a melodia já não estava mais do lado de fora. Ela se infiltrou em sua mente, doce e persistente, como se fosse seu próprio pensamento. Cada braçada parecia mais lenta, mais pesada, como se ele remasse contra um rio de mel\n");
    noDaIara4B(); break;
    case 3: printf("Com a mão trêmula, ele pega uma pedra do fundo do barco e a atira na água. O som seco quebra o silêncio por um instante. A superfície se agita, as ondas se espalham, e lá embaixo, sob o casco, uma sombra enorme desliza, lenta e majestosa, como se o verdadeiro guardião do rio estivesse ali, avaliando aquele pequeno intruso.\n");
    noDaIara4C(); break;
    }
}

void noDaIara3B() {
    printf("Enquanto Aruã tenta se afastar daquele canto perigoso, algo chama sua atenção. Bem debaixo do barco, no leito escuro do rio, um brilho dourado pulsa suavemente. Não era um brilho qualquer, parecia que um baú de tesouros de um rei antigo tinha se aberto lá no fundo, espalhando moedas, joias e colares que dançavam com a correnteza, convidando-o a mergulhar e pegar tudo para si.\n");
    printf("1. Mergulhar para pegar o que brilha.\n");
    printf("2. Ignorar e continuar remando.\n");
    printf("3. Usar o remo para mexer a água e ver o que é.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("A cobiça foi mais forte que o medo. Aruã se inclina sobre a borda do barco, e a água gelada envolve seus dedos na tentativa de pegar uma das moedas. No mesmo instante, algo liso e frio roça seu pé, mas não foi um toque acidental. Foi firme, como uma mão que o segurava ali");
    noDaIara4A(); break;
    case 2: printf("Ele balança a cabeça, tentando afastar a tentação daquele tesouro. Tenta se concentrar no ritmo do remo, na força dos braços, mas a melodia da Iara, que parecia ter diminuído, agora retorna com força total, pulsando dentro da sua cabeça e abafando todos os outros sons do mundo");
    noDaIara4B(); break;
    case 3: printf("Desconfiado, Aruã usa a ponta do remo para tocar o fundo e agitar a areia. O remo corta a água e, num piscar de olhos, todo aquele brilho dourado desaparece como fumaça. E no lugar onde estava o tesouro, uma sombra imensa e silenciosa passa sob o barco, tão grande que por um segundo escureceu a noite.");
    noDaIara4C(); break;
    }
}

void noDaIara3C() {
    printf("O canto parou, mas o silêncio que ficou era ainda mais assustador. Uma brisa leve e fria soprou contra o rosto de Aruã, e junto com ela, veio um sussurro que parecia vir de todos os lados e de lugar nenhum ao mesmo tempo. A voz, suave e quase humana, repetia seu nome... 'Aruã... Aruã...\n");
    printf("1. Responder ao sussurro.\n");
    printf("2. Ignorar e remar.\n");
    printf("3. Usar o remo para mexer a água e ver o que é.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Quem está aí?', ele pergunta, e a resposta ecoa não em palavras, mas em um toque. Algo frio e esguio toca seu tornozelo, como se a própria água tivesse mãos e estivesse chamando por ele.");
    noDaIara4A(); break;
    case 2: printf("Assustado, ele pega um pano de dentro do barco e amarra na cabeça, cobrindo os ouvidos. O som do vento abafa o sussurro, mas a melodia traiçoeira da Iara reaparece, desta vez dentro de sua mente, insistente e impossível de ignorar.");
    noDaIara4B(); break;
    case 3: printf("Ele usa o remo como um leme, girando o barco lentamente, tentando encontrar de onde vem a voz. Mas a voz parece acompanhá-lo. É então que ele percebe a sombra enorme sob o casco, girando junto com ele, como um guardião paciente esperando sua decisão.");
    noDaIara4C(); break;
}

// ================= QUARTA CAMADA =================
void noDaIara4A() {
    printf("Aquilo que roçou o tornozelo de Aruã não era um peixe. Era frio como o lodo do fundo do rio e liso como uma pedra polida pela correnteza. O toque se repetiu, mas desta vez com mais firmeza, envolvendo a perna dele num abraço gelado que parecia querer puxá-lo para baixo, para o coração escuro daquelas águas...\n");
    printf("1. Chutar para se soltar.\n");
    printf("2. Segurar firme no banco e não se mover.\n");
    printf("3. Olhar para a água para ver o que é.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Num reflexo de puro pavor, Aruã chuta com força, sentindo o toque se desfazer. O alívio dura apenas um segundo. Pois quando ele levanta o olhar, a Iara está lá, parada à frente do barco, tão perto que ele consegue ver as gotas de água escorrendo dos longos cabelos negros dela, como se fossem pequenos diamantes líquidos.");
    noDaIara5A(); break;
    case 2: printf("Ele se agarra à madeira do barco com toda a força que tem, cravando os dedos, recusando-se a ceder. Mas não é ele quem precisa se mover. A correnteza ao redor do barco começa a girar, primeiro devagar, depois cada vez mais rápido, formando um redemoinho furioso que puxa o pequeno casco para o seu centro, como se o rio quisesse engoli-lo");
    noDaIara5B(); break;
    case 3: printf("Vencido pela curiosidade, ele se inclina e mergulha o rosto na água, tentando enxergar o que o segura. E então, tudo para. O toque some, o rio se acalma de repente, a água fica límpida como um espelho. A neblina se abre, revelando um caminho estreito e sereno à sua frente, como um convite silencioso para a salvação... ou para uma armadilha...");
    noDaIara5C(); break;    
    }
}

void noDaIara4B() {
    printf("A canção invade a mente de Aruã, tornando-se impossível ignorar...\n");
    printf("1. Cantar outra música.\n");
    printf("2. Tapar os ouvidos e fechar os olhos.\n");
    printf("3. Pular na água.\n");
    int op = escolha(1, 3);
    if (op == 1) noDaIara5A();
    else if (op == 2) noDaIara5B();
    else noDaIara5C();
}

void noDaIara4C() {
    printf("Uma sombra gigante passa sob o barco de Aruã...\n");
    printf("1. Ficar imóvel.\n");
    printf("2. Remar rápido para longe.\n");
    printf("3. Bater o remo na água.\n");
    int op = escolha(1, 3);
    if (op == 1) noDaIara5A();
    else if (op == 2) noDaIara5B();
    else noDaIara5C();
}

// ================= QUINTA CAMADA (Finais) =================
void noDaIara5A() {
    printf("A Iara aparece diante dele, belíssima e mortal. Última escolha!\n");
    printf("1. Estender a mão para ela.\n");
    printf("2. Fugir remando.\n");
    printf("3. Fechar os olhos e rezar.\n");
    int op = escolha(1, 3);
    if (op == 1) finalNegativo1();
    else if (op == 2) finalPositivo();
    else finalNegativo2();
}

void noDaIara5B() {
    printf("Um redemoinho ameaça engolir o barco de Aruã. Última escolha!\n");
    printf("1. Remar contra a corrente.\n");
    printf("2. Deixar-se levar.\n");
    printf("3. Tentar agarrar um galho.\n");
    int op = escolha(1, 3);
    if (op == 1) finalPositivo();
    else if (op == 2) finalNegativo1();
    else finalNegativo2();
}

void noDaIara5C() {
    printf("O rio fica silencioso e um caminho estreito aparece. Última escolha!\n");
    printf("1. Seguir o caminho.\n");
    printf("2. Ficar parado.\n");
    printf("3. Voltar pelo mesmo trajeto.\n");
    int op = escolha(1, 3);
    if (op == 1) finalPositivo();
    else if (op == 2) finalNegativo2();
    else finalNegativo1();
}




































}   
int main() {
    intro();
    return 0;
}