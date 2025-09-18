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
void noFinalPositivoIara();
void noFinalNegativo1Iara();
void noFinalNegativo2Iara();
void noTransicaoIara();
void noCenaFinalIara();

void noDaMatinta1B();
void noDaMatinta2A();
void noDaMatinta2B();
void noDaMatinta2C();
void noDaMatinta3A();
void noDaMatinta3B();
void noDaMatinta3C();
void noDaMatinta4A();
void noDaMatinta4B();
void noDaMatinta4C();
void noDaMatinta5A();
void noDaMatinta5B();
void noDaMatinta5C();
void noFinalPositivoMatinta();
void noFinalNegativo1Matinta();
void noFinalNegativo2Matinta();
void noTransicaoMatinta();
void noCenaFinalMatinta();

void noDoBoiuna1C();
void noDoBoiuna2A();
void noDoBoiuna2B();
void noDoBoiuna2C();
void noDoBoiuna3A();
void noDoBoiuna3B();
void noDoBoiuna3C();
void noDoBoiuna4A();
void noDoBoiuna4B();
void noDoBoiuna4C();
void noDoBoiuna5A();
void noDoBoiuna5B();
void noDoBoiuna5C();
void noFinalPositivoBoiuna();
void noFinalNegativo1Boiuna();
void noFinalNegativo2Boiuna();
void noTransicaoFinal();
void noCenaFinalBoiuna();

void noFinalBom();
void noFinalRuim();
void noFinalNeutro();





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
    printf("Assustador, é? Então acho que posso te contar algumas lendas que a vovó me contava quando eu era pequena. São histórias da nossa Amazônia… sobre a Iara, a Matinta Perera e Boiúna. Qual você quer ouvir primeiro?\n");
    escolhaLenda();
}

void escolhaLenda() {
printf("1. Iara\n");
printf("2. Matinta Perera\n");
printf("3. Boiúna\n");
int op = escolha(1, 3);
switch (op) {
    case 1: noDaIara1A(); break;
    case 2: noDaMatinta1B(); break;
    case 3: noDoBoiuna1C(); break;
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

    case 1: printf("Aruã se inclina, sentindo o casco balançar. A canção se adensa, quente e doce, como se dissesse que o mergulho é retorno e descanso. Um clarão verde lampeja adiante, convidando-o a ir mais fundo.\n");
    noDaIara3A(); break;

    case 2: printf("Ele aperta os olhos e agarra o remo, buscando peso no próprio corpo. O canto não some, muda de lugar e então, mesmo sem olhar, Aruã percebe que algo cintila sob o casco, como se um punhado de luzes douradas pulasse no fundo.\n");
    noDaIara3B(); break;

    case 3: printf("Aruã enche o peito e solta um grito rasgado, batendo o remo na borda do casco. O som estala no ar e racha a bruma. O grito racha a bruma e faz ondas curtas tremerem ao redor do barco. A canção se desfaz, mas retorna fina, leve, em sussurros que correm com a brisa e repetem o nome dele...\n");
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
    case 1: printf("Sem virar o rosto para a água, Aruã cruza os dedos no peito, sussurra uma reza curta e começa a remar de costas, sem mostrar a nuca, recua em braçadas curtas. A canção afina até virar um fio que quase se parte, e é nesse silêncio frágil que um sopro frio toca o rosto dele e sussurra seu nome.\n");
    noDaIara3C(); break;

    case 2: printf("Aruã lança a rede com um giro firme, deixando-a abrir como um véu sobre o espelho escuro. A rede abre como um véu e afunda macia. Por um instante, nada então a linha estremece, puxa, arranha a palma. Quando Aruã recolhe, as malhas voltam rasgadas e um brilho verde se move lá adiante.\n");
    noDaIara3A(); break;

    case 3: printf("Aruã pega o pequeno tambor e marca um ritmo curto e grave, que bate no peito e corre pela superfície da água. O ritmo grave corre pela pele do rio. A melodia falha e se cala, mas a água permanece inquieta, riscada por lampejos dourados que dançam sob o casco.\n");
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

    case 1: printf("Ele fixa o olhar na linha escura das árvores e não perde o compasso. Os braços ardem, o casco corta a água com pressa. O canto, atrás, se afina como se passasse por dentro do casco, quando Aruã olha de relance, percebe pontos de luz girando sob ele.\n");
    noDaIara3B(); break;

    case 2: printf("Cego de urgência, a ideia de abandonar o barco parece, por um segundo, a única saída. O corpo se inclina, os dedos tocam a borda fria e a canção muda de tom vira promessa enquanto, adiante, a bruma se abre.\n");
    noDaIara3A(); break;

    case 3: printf("Aruã aperta as mãos contra as orelhas e solta sua própria cantiga, firme e fora do encanto, marcando o ritmo com o remo. A voz dele cria um trilho, um som-casulo onde a melodia estranha não entra. A canção da Iara se desfaz em volta, mas não some de todo, volta pelas frestas do vento, em palavras quebradas que se juntam no nome dele.\n");
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
    case 1: printf("Com o coração batendo descompassado, Aruã ergue a mão, um gesto lento, quase em sonho. O sorriso da Iara se abre como uma flor rara na correnteza. E então, ele sente: um toque gelado e liso roçando seu tornozelo, subindo pela perna, como se o próprio rio, com dedos de água, quisesse puxá-lo para um abraço.\n");
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
    case 1: printf("A cobiça foi mais forte que o medo. Aruã se inclina sobre a borda do barco, e a água gelada envolve seus dedos na tentativa de pegar uma das moedas. No mesmo instante, algo liso e frio roça seu pé, mas não foi um toque acidental. Foi firme, como uma mão que o segurava ali\n");
    noDaIara4A(); break;
    case 2: printf("Ele balança a cabeça, tentando afastar a tentação daquele tesouro. Tenta se concentrar no ritmo do remo, na força dos braços, mas a melodia da Iara, que parecia ter diminuído, agora retorna com força total, pulsando dentro da sua cabeça e abafando todos os outros sons do mundo\n");
    noDaIara4B(); break;
    case 3: printf("Desconfiado, Aruã usa a ponta do remo para tocar o fundo e agitar a areia. O remo corta a água e, num piscar de olhos, todo aquele brilho dourado desaparece como fumaça. E no lugar onde estava o tesouro, uma sombra imensa e silenciosa passa sob o barco, tão grande que por um segundo escureceu a noite.\n");
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
    case 1: printf("Quem está aí?', ele pergunta, e a resposta ecoa não em palavras, mas em um toque. Algo frio e esguio toca seu tornozelo, como se a própria água tivesse mãos e estivesse chamando por ele.\n");
    noDaIara4A(); break;
    case 2: printf("Assustado, ele pega um pano de dentro do barco e amarra na cabeça, cobrindo os ouvidos. O som do vento abafa o sussurro, mas a melodia traiçoeira da Iara reaparece, desta vez dentro de sua mente, insistente e impossível de ignorar.\n");
    noDaIara4B(); break;
    case 3: printf("Ele usa o remo como um leme, girando o barco lentamente, tentando encontrar de onde vem a voz. Mas a voz parece acompanhá-lo. É então que ele percebe a sombra enorme sob o casco, girando junto com ele, como um guardião paciente esperando sua decisão.\n");
    noDaIara4C(); break;
    }
}


void noDaIara4A() {
    printf("Aquilo que roçou o tornozelo de Aruã não era um peixe. Era frio como o lodo do fundo do rio e liso como uma pedra polida pela correnteza. O toque se repetiu, mas desta vez com mais firmeza, envolvendo a perna dele num abraço gelado que parecia querer puxá-lo para baixo, para o coração escuro daquelas águas.\n");
    printf("1. Chutar para se soltar.\n");
    printf("2. Segurar firme no banco e não se mover.\n");
    printf("3. Olhar para a água para ver o que é.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Num reflexo de puro pavor, Aruã chuta com força, sentindo o toque se desfazer. O alívio dura apenas um segundo. Pois quando ele levanta o olhar, a Iara está lá, parada à frente do barco, tão perto que ele consegue ver as gotas de água escorrendo dos longos cabelos negros dela, como se fossem pequenos diamantes líquidos.\n");
    noDaIara5A(); break;
    case 2: printf("Ele se agarra à madeira do barco com toda a força que tem, cravando os dedos, recusando-se a ceder. Mas não é ele quem precisa se mover. A correnteza ao redor do barco começa a girar, primeiro devagar, depois cada vez mais rápido, formando um redemoinho furioso que puxa o pequeno casco para o seu centro, como se o rio quisesse engoli-lo.\n");
    noDaIara5B(); break;
    case 3: printf("Vencido pela curiosidade, ele se inclina e mergulha o rosto na água, tentando enxergar o que o segura. E então, tudo para. O toque some, o rio se acalma de repente, a água fica límpida como um espelho. A neblina se abre, revelando um caminho estreito e sereno à sua frente, como um convite silencioso para a salvação... ou para uma armadilha...\n");
    noDaIara5C(); break;    
    }
}

void noDaIara4B() {
    printf("A melodia já não vinha de fora, meu amor. Ela estava dentro da mente de Aruã, entrelaçada aos seus próprios pensamentos. Não havia como fugir, pois para onde ele olhava, o que ele pensava, a canção estava lá, doce e terrível, prometendo segredos e afogando sua vontade em notas suaves.\n");
    printf("1. Cantar outra música para se distrair.\n");
    printf("2. Tapar os ouvidos e fechar os olhos.\n");
    printf("3. Pular na água para acabar com a pressão.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Desesperado, ele busca em sua memória a canção mais antiga que conhece, uma cantiga de ninar que sua avó lhe ensinou. A voz dele, trêmula no início, rompe o feitiço por um instante, como um raio de sol na neblina. Mas o silêncio é quebrado pelo sorriso da Iara, que surge à sua frente, como se achasse graça da sua pequena rebeldia.\n");
    noDaIara5A(); break;
    case 2: printf("Ele aperta as mãos contra os ouvidos e fecha os olhos com força, buscando o escuro, o silêncio. Mas o som já estava dentro dele. Na escuridão, sem ver nada, ele sente o barco balançar e girar sem controle, puxado por uma força invisível que o arrasta para o meio do redemoinho.\n");
    noDaIara5B(); break;
    case 3: printf("A pressão da voz em seus ouvidos é insuportável, como se sua cabeça fosse se partir. Num ato de loucura, ele pula na água, buscando o choque gelado para quebrar o encanto. A pressão some, a música cessa. Mas o rio, de repente, fica silencioso demais, pesado, como se prendesse a respiração, aguardando o momento certo para o bote final.\n");
    noDaIara5C(); break;
    }
}

    
void noDaIara4C() {
    printf("A sombra que passou sob o barco era maior que qualquer peixe que ele já tinha visto. Não fazia barulho, não agitava a água. Deslizava lenta e silenciosa, uma mancha de escuridão profunda na água já escura do rio. Aruã não conseguia ver o que era, mas sentia, com um arrepio na espinha, que estava sendo observado por algo muito, muito antigo.\n");
    printf("1. Ficar imóvel até a sombra sumir\n");
    printf("2. Remar rápido para longe.\n");
    printf("3. Bater o remo na água para espantar.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Ele prende a respiração, transforma seu corpo em estátua, rezando para que a criatura não o note. A sombra passa, lenta, e desaparece nas profundezas. Quando Aruã finalmente solta o ar, a Iara está diante dele, os olhos verdes fixos nos seus, como se a sombra fosse apenas a guardiã que anunciava a chegada da rainha.\n");
    noDaIara5A(); break;
    case 2: printf("O pânico toma conta. Ele rema com a força de dez homens, sem direção, apenas para longe daquela presença. A pressa e o medo agitam a água, e é o seu próprio desespero que alimenta a correnteza, fazendo o rio girar e um redemoinho começar a se formar bem debaixo dele.\n");
    noDaIara5B(); break;
    case 3: printf("Ele bate com a pá do remo na superfície, uma, duas, três vezes. O som ecoa pela noite como um trovão assustado. A sombra para. E então, um silêncio total cai sobre o rio. A água para de se mover, o vento para de soprar. Um silêncio pesado e sobrenatural, como se o próprio rio estivesse chocado com sua audácia.\n");
    noDaIara5C(); break;
    }
}


// ================= QUINTA CAMADA (Finais) =================
void noDaIara5A() {
    printf("E então, ela surgiu à sua frente, tão próxima que o mundo inteiro pareceu desaparecer. Aruã via as pequenas gotas escorrendo dos fios de cabelo dela, cada uma um universo de brilho. Os olhos verdes da Iara não eram mais apenas um convite, eram um universo inteiro de promessas e perigos. Ele sentiu no fundo da alma que aquele era o momento decisivo, a última escolha entre a terra firme e o abraço eterno do rio.\n");
    printf("1. Estender a mão para ela.\n");
    printf("2. Virar o barco e fugir\n");
    printf("3. Fechar os olhos e rezar.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("O encanto foi mais forte. Lentamente, como em um sonho do qual não queria acordar, Aruã estendeu a mão. No instante em que seus dedos tocaram a pele fria e lisa da Iara, o mundo ao seu redor se dissolveu. O barco, o céu, as árvores... tudo se desfez em um turbilhão de água e luz verde, e a única coisa que restou foi a canção.\n");
    noFinalNegativo1Iara(); break;
    case 2: printf("Num último ato de coragem, ele se lembrou de sua casa, do cheiro da fumaça subindo da aldeia. Ele virou as costas para a beleza mortal da Iara e fincou o remo na água com toda a força que lhe restava. O barco deu um solavanco, e a correnteza, como se finalmente o libertasse, o empurrou para longe do canto e daquele olhar hipnotizante.\n");
    noFinalPositivoIara(); break;
    case 3: printf("Ele fechou os olhos, buscando uma força que não era sua, sussurrando uma prece que quase se perdeu no ar. Mas a escuridão que ele encontrou atrás das pálpebras não trouxe paz. Era uma escuridão que o envolveu por completo, e ele sentiu a água fria subir pelos seus pés, joelhos e cintura, até cobrir tudo, levando-o para o silêncio.\n");
    noFinalNegativo2Iara(); break;
    }
}


void noDaIara5B() {
    printf("A água, antes calma, agora era um monstro faminto. Ela começou a girar ao redor do barco, cada vez mais rápido e forte, formando um redemoinho profundo que puxava tudo para o seu centro escuro e barulhento. O pequeno barco de Aruã era como uma folha seca no meio da tempestade.\n");
    printf("1. Remar contra a corrente\n");
    printf("2. Deixar-se levar pelo redemoinho.\n");
    printf("3. Tentar agarrar um galho na margem.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Aruã gritou, um som de puro esforço e teimosia. Ele remou contra o giro, sentindo os músculos dos braços queimarem a cada braçada. Por um momento, pareceu inútil. Mas então, centímetro por centímetro, ele sentiu o barco resistir, romper a força do giro e finalmente alcançar as águas calmas da margem, ofegante e a salvo.\n");
    noFinalPositivoIara(); break;
    case 2: printf("O medo e o cansaço o venceram. Ele largou o remo e se encolheu no fundo do barco. O giro o engoliu, rápido e violento. E enquanto o mundo girava e a água o cobria, a canção da Iara voltou, não mais como um convite, mas como a melodia final que o envolveu para sempre.\n");
    noFinalNegativo1Iara(); break;
    case 3: printf("Num último esforço desesperado, ele viu um galho de árvore pendendo sobre a água e se esticou para agarrá-lo. Seus dedos tocaram a madeira, sentiram a esperança... mas o galho, velho e fraco, quebrou com um estalo seco. Sem apoio, ele foi puxado para o fundo do redemoinho sem chance de lutar.\n");
    noFinalNegativo2Iara(); break;
    }
}


void noDaIara5C() {
    printf("Tão subitamente quanto começou, o perigo pareceu passar. A canção parou, o rio ficou completamente mudo, e a neblina se abriu como uma cortina no teatro, revelando um caminho estreito e seguro de água calma que levava direto para a margem. Era uma paz estranha, boa demais para ser verdade.\n");
    printf("1. Seguir pelo caminho aberto.\n");
    printf("2. Ficar parado e esperar.\n");
    printf("3. Voltar pelo mesmo trajeto.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Desconfiado, mas sem outra opção, ele apontou o barco para aquele caminho. O barco deslizou suavemente, como se mãos invisíveis o guiassem para a segurança. Ao pisar na terra firme, ele olhou para trás e ouviu o canto recomeçar, mas agora era apenas um eco distante, uma lembrança de um perigo vencido.\n");
    noFinalPositivoIara(); break;
    case 2: printf("Ele não confiou naquela calmaria. Ficou parado, o coração batendo forte, esperando a próxima armadilha. Mas o perigo não veio de um som, veio do silêncio. Um puxão violento e repentino sob o barco o virou de uma só vez, arrastando-o para o fundo antes mesmo que ele pudesse gritar.\n");
    noFinalNegativo2Iara(); break;
    case 3: printf("Ele decidiu que era mais seguro voltar pelo caminho que já conhecia. Mas mal deu a primeira remada e a neblina se fechou novamente, densa e fria. A melodia retornou, muito mais próxima, quase sussurrada em seu ouvido. Antes que pudesse reagir, mãos geladas agarraram seus tornozelos e o arrastaram para as profundezas escuras.\n");
    noFinalNegativo1Iara(); break;
    }
}


void noFinalPositivoIara() {
    printf("Aruã remou com a força que só o medo e a vontade de viver conseguem dar. O barco cortou as águas e finalmente encalhou na lama da margem. Ele se jogou na terra, sentindo o chão firme e seguro debaixo do corpo, o cheiro de folha molhada, o som dos grilos... sons de casa. Ofegante, ele olhou para trás e viu a neblina se fechar sobre o rio, escondendo a Iara e seu canto. Ele não sentiu raiva, nem ódio, mas um respeito profundo e um medo saudável.\n");
    printf("Mãe: Ele voltou para casa, meu amor. E nunca mais olhou para o rio da mesma forma. Aprendeu naquela noite que a verdadeira coragem não é seguir qualquer impulso ou se provar para o desconhecido. A coragem de verdade, às vezes, é saber a hora de dizer 'não', de virar as costas para um chamado que parece bonito, mas que no fundo é perigoso. A Iara continua no rio, mas ele aprendeu que a prudência e a força de vontade podem vencer até o canto mais sedutor\n");
    printf("Fim de jogo - Final Positivo!\n");
    noCenaFinalIara();
}


void noFinalNegativo1Iara() {
    printf("Aruã cedeu ao chamado. No instante em que ele se entregou, o mundo ao redor se tornou água, e a canção o envolveu por completo. Na manhã seguinte, a aldeia sentiu sua falta. Dias depois, encontraram sua canoa vazia, boiando à deriva, presa em alguns galhos na beira do rio. A vila nunca mais o viu.\n");
    printf("Mãe: A história dele, meu bem, virou um aviso sussurrado nas noites de lua cheia. Um lembrete de que a curiosidade sem limites pode levar à perda. Dizem os mais antigos que, em noites de muito silêncio, quem chega perto do rio pode ouvir, bem baixinho, junto com a melodia da Iara, um canto triste de homem, um lamento de alguém que se perdeu para sempre. É uma lenda que nos lembra que nem todo convite bonito deve ser aceito e que algumas portas, uma vez abertas, nunca mais podem ser fechadas.\n");
    printf("Fim de jogo, Final Negativo 1 - O Abraço do Encanto\n");
    noCenaFinalIara();
}


void noFinalNegativo2Iara() {
    printf("Aruã tentou lutar, ele realmente tentou, mas no momento decisivo, ele parou. Ficou paralisado entre o medo de fugir e o desejo de resistir. E o rio, não espera por ninguém. A correnteza, que não perdoa a dúvida, o levou. Nem para o fundo, nem para a margem, apenas o carregou para um destino que ninguém jamais conheceu. O rio guardou seu segredo.\n");
    printf("Mãe: Essa parte da história ensina a lição talvez mais dura de todas: que a indecisão diante do perigo pode ser tão fatal quanto a imprudência. Aruã não escolheu o encanto, mas também não escolheu a segurança a tempo. E o seu destino nos lembra que, às vezes, não fazer uma escolha já é deixar que o perigo escolha por você.\n");
    printf("Fim de jogo, Final Negativo 2 - O Preço da Hesitação\n");
    noCenaFinalIara();
}


void noCenaFinalIara() {
    printf("E essa, meu amor, é a história de Aruã e do canto da Iara. É uma lenda que a vovó me contava, não para me dar medo, mas para me ensinar a ouvir com o coração e a olhar para além das aparências.\n");
    printf("A Iara é um aviso, sabe? Um aviso de que nem tudo que é belo é seguro. O perigo raramente se mostra feio e assustador; muitas vezes ele vem com um sorriso, com uma promessa de tesouro ou com uma melodia tão doce que nos faz esquecer o caminho de casa.\n");
    printf("Aruã aprendeu, de um jeito ou de outro, que a curiosidade pode ser uma armadilha e que a prudência é o que nos mantém a salvo. Alguns dizem que, até hoje, nas noites de lua cheia, a canção dela ainda ecoa pelo rio, chamando os incautos, os distraídos. E quem ouve, precisa fazer a escolha que ele fez. Precisa decidir, lá no fundo da alma, se vai seguir o encanto ou resistir à tentação, se agarrando firme ao próprio barco para poder voltar para casa.\n");
    noTransicaoIara();
}


void noTransicaoIara() {
    printf("E então, quer ouvir agora sobre a Matinta Perera, Boiúna ou quer ir dormir?\n");
    int op = escolha(1, 3);
    switch (op) {
        case 1: noDaMatinta1B(); break;
        case 2: noDoBoiuna1C(); break;
        case 3: printf("Boa noite, meu amor. Sonhe com os anjos e com as lendas da nossa terra. Te amo muito.");
        printf("Fim de jogo - Até a próxima história!\n");
        printf("Obrigado por jogar Lendas da Amazônia!\n");
        break;
    }
}


//==============================lenda Matinta===========================

void noDaMatinta1B() {
    printf("Então vamos para a história da Matinta Perêra... Dizem que ela não é exatamente uma pessoa, nem exatamente um bicho. É um espírito antigo da floresta, uma velha feiticeira que durante o dia pode ser qualquer vizinha sua, mas que à noite se transforma. Ela voa sobre as casas, assobiando um som fino e arrepiante, pedindo fumo ou café. E ai de quem nega...\n");
    printf("A nossa história começa com um homem chamado Bento. Ele era um homem teimoso, que não acreditava muito nessas conversas de assombração. Certa noite, quando o único som era o dos grilos, ele ouviu, bem perto da sua janela, um assobio agudo, que parecia cortar o vento...\n");
    printf("O som arrepiava até os ossos. A decisão de Bento naquela noite mudaria tudo..\n");
    printf("1. Abrir a janela para ver quem é.\n");
    printf("2. Ficar em silêncio, fingindo que não ouviu.\n");
    printf("3. Pegar um pouco de fumo e deixar na porta.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Movido pela teimosia, Bento decide confrontar o som. Ele se levanta, sentindo a madeira fria do chão sob os pés, e caminha decidido até a janela, pronto para encarar o que quer que estivesse lá fora.\n");
    noDaMatinta2A(); break;
    case 2: printf("O medo foi mais forte. Bento se encolheu, puxando o lençol sobre a cabeça, tentando transformar o próprio corpo em uma estátua. Ele esperava que, com o silêncio, o assobio simplesmente fosse embora.\n");
    noDaMatinta2B(); break;
    case 3: printf("Lembrando-se das histórias dos antigos, Bento escolheu o caminho da prudência. Sem fazer barulho, ele procurou seu fumo de rolo, entendendo que aquela não era uma visita comum, e sim um pedido que era melhor atender.\n");
    noDaMatinta2C(); break;    
    }
}


void noDaMatinta2A() {
    printf("Cheio de coragem ou de teimosia, Bento se levantou e foi até a janela de madeira. Com um empurrão, ele a abriu. O ar frio da noite entrou de vez, e junto com ele, o silêncio. O assobio parou. Mas bem ali, parada sob o sereno, estava uma velha muito encurvada, com o rosto todo enrugado e olhos que pareciam duas brasas acesas na escuridão, encarando-o fixamente.\n");
    printf("Encarando aqueles olhos de brasa, Bento sentiu um gelo na espinha. O próximo movimento dele era crucial.\n");
    printf("1. Perguntar o que ela quer.\n");
    printf("2. Fechar a janela na cara dela.\n");
    printf("3. Jogar um copo d'água para assustá-la.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Engolindo em seco, Bento decide usar a educação. Com a voz um pouco trêmula, ele se inclina para fora e quebra o silêncio, dirigindo-se diretamente à figura misteriosa.\n");
    noDaMatinta3A(); break;
    case 2: printf("O pânico tomou conta. Num movimento brusco e impensado, Bento bateu a janela com toda a força, o som da madeira ecoando na noite. Ele achou que o barulho resolveria o problema, mas só piorou.\n");
    noDaMatinta3B(); break;
    case 3: printf("Irritado, Bento agiu sem pensar. Ele pegou o copo d'água que estava ao lado da rede e o arremessou na direção da velha. A água se espalhou no ar, mas antes que a atingisse, algo muito estranho aconteceu.\n");
    noDaMatinta3C(); break;
    }
}


void noDaMatinta2B() {
    printf("Bento se encolheu na rede, cobrindo a cabeça com o lençol, o coração batendo forte. Ele decidiu ignorar. Mas o assobio não foi embora. Pelo contrário, parecia que ele atravessava a madeira da parede, ficando cada vez mais perto, mais insistente, bem ao lado do seu ouvido, como se a criatura estivesse ali, dentro do quarto com ele.\n");
    printf("O som dentro do quarto era insuportável. Escondido, ele precisava fazer alguma coisa...\n");
    printf("1. Espiar pela fresta da parede.\n");
    printf("2. Rezar baixinho pedindo proteção.\n");
    printf("3. Gritar 'Vá embora!'\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("A curiosidade foi mais forte que o medo. Com o coração na boca, ele afastou um pouco o lençol e procurou uma fresta na madeira da parede, apenas um pequeno buraco para ver o que estava acontecendo lá fora.\n");
    noDaMatinta3C(); break;
    case 2: printf("Bento fechou os olhos com força e começou a sussurrar uma prece antiga que sua avó lhe ensinou. Ele se apegou às palavras sagradas, esperando que elas pudessem criar um escudo contra o mal que estava lá fora.\n");
    noDaMatinta3A(); break;
    case 3: printf("De repente, a paciência de Bento acabou. De debaixo do lençol, ele encheu os pulmões e gritou com toda a sua força, uma ordem carregada de pavor e raiva, na esperança de expulsar a criatura.\n");
    noDaMatinta3B(); break;
    }
}


void noDaMatinta2C() {
    printf("Bento, lembrando das histórias de sua avó, decidiu não arriscar. Ele se levantou em silêncio, pegou um punhado do seu melhor fumo de rolo e foi até a porta. Ele abriu só uma frestinha, o suficiente para colocar o fumo em cima de uma pedra ao lado da soleira, e fechou a porta devagar, sem fazer barulho. O assobio parou no mesmo instante.\n");
    printf("O silêncio do lado de fora era pesado, cheio de expectativa. O que ele faria agora?\n");
    printf("1. Espiar pela janela para ver o que acontece.\n");
    printf("2. Voltar para a rede e tentar dormir.\n");
    printf("3. Abrir a porta de novo para ver se ela já foi.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Feito o gesto de paz, a curiosidade falou mais alto. Ele correu para a janela, se escondendo atrás da cortina, para ver quem ou o quê viria buscar a oferenda que ele deixou.\n");
    noDaMatinta3C(); break;
    case 2: printf("Confiando que tinha feito a coisa certa, Bento decidiu não se envolver mais. Ele voltou para sua rede, deitou-se e tentou acalmar o coração, esperando que a noite finalmente lhe trouxesse paz.\n");
    noDaMatinta3A(); break;
    case 3: printf("A impaciência o dominou. Querendo ter certeza de que o perigo tinha passado, ele levou a mão à maçaneta novamente, cometendo a imprudência de quebrar o ritual e perturbar o silêncio.\n");
    noDaMatinta3B(); break;
    }
}


void noDaMatinta3A() {
    printf("No silêncio que se formou, uma voz rouca e baixa, que parecia o raspar de folhas secas, atravessou a noite e chegou até Bento. 'Fumo... um trago de fumo...', a voz pedia. Não era um grito, era um lamento, um pedido que parecia carregar o cansaço de muitos e muitos anos.\n");
    printf("1. Dar o fumo para ela.\n");
    printf("2. Dizer que não tem nada.\n");
    printf("3. Ficar em silêncio, sem responder.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Com as mãos trêmulas, Bento pega o fumo e o oferece. A mão enrugada da velha surge da escuridão e pega a oferenda com uma rapidez surpreendente, antes de recuar para as sombras.\n");
    noDaMatinta4A(); break;
    case 2: printf("Mentindo por medo, Bento grita para a noite que não tem fumo ali. A voz dele soa fraca, e a resposta que vem não é em palavras, mas em um assobio que recomeça, mais alto e irritado do que antes.\n");
    noDaMatinta4B(); break;
    case 3: printf("Bento fica paralisado, incapaz de falar. O silêncio se estica, pesado e tenso. A velha do lado de fora parece interpretar a quietude como uma recusa, e ele sente a presença dela se movendo, circulando a casa.\n");
    noDaMatinta4C(); break;
    }
}
    

void noDaMatinta3B() {
    printf("A atitude de Bento foi como uma ofensa. No momento em que ele terminou, um vento forte e repentino sacudiu a casa. As telhas tremeram, as portas bateram e o assobio, que antes era fino, se transformou em uma gargalhada terrível e aguda que parecia vir de cima, do telhado, como se um pássaro gigante estivesse pousado ali.\n");
    printf("1. Se esconder debaixo da cama.\n");
    printf("2. Abrir a porta e enfrentá-la.\n");
    printf("3. Pedir desculpas em voz alta.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("O barulho no telhado é aterrorizante. Bento se joga no chão e desliza para debaixo da rede, o lugar mais escuro do quarto, encolhendo-se enquanto o assobio e a risada parecem zombar dele.\n");
    noDaMatinta4B(); break;
    case 2: printf("Um acesso de coragem misturada com desespero toma conta de Bento. Ele corre até a porta e a abre de uma vez, pronto para gritar, mas encontra apenas a noite vazia e o vento uivando.\n");
    noDaMatinta4C(); break;
    case 3: printf("Percebendo o erro grave que cometeu, Bento grita para o teto, com a voz embargada de pânico: 'Me desculpe! Por favor, me desculpe!'. Ele espera que seu arrependimento seja o suficiente para acalmar a fúria.\n");
    noDaMatinta4A(); break;
    }
}


void noDaMatinta3C() {
    printf("Quando Bento olhou pela fresta, ele não viu a velha. Ele viu a trouxa de fumo sumir da pedra como se uma mão invisível a pegasse. E então, uma sombra densa e escura se formou no chão. A sombra cresceu, tomou a forma de um pássaro enorme, de asas pesadas, que subiu aos céus e desapareceu na escuridão, sem fazer nenhum som.\n");
    printf("1. Sair para investigar.\n");
    printf("2. Trancar tudo e rezar.\n");
    printf("3. Ficar observando o céu.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Impulsionado por uma curiosidade imprudente, Bento abre a porta e corre para fora, olhando para o local onde a sombra subiu. Ele não vê nada além das estrelas, mas sente um arrepio, como se ainda estivesse sendo observado de cima.\n");
    noDaMatinta4C(); break;
    case 2: printf("Aquilo foi o suficiente. Bento corre e passa o ferrolho na porta e nas janelas, sentando-se num canto escuro. Ele entende que lidou com algo que não é deste mundo e busca conforto na única proteção que conhece.\n");
    noDaMatinta4A(); break;
    case 3: printf("Ele permanece na janela, os olhos fixos na escuridão do céu, tentando encontrar qualquer sinal do pássaro. A noite parece quieta, mas o silêncio agora é ameaçador, e o assobio retorna, distante, como um eco na sua mente.\n");
    noDaMatinta4B(); break;
    }
}


void noDaMatinta4A() {
    printf("Depois que Bento disso, a noite voltou ao normal. O vento parou, o assobio sumiu. Um silêncio profundo e pacífico tomou conta do lugar. Na manhã seguinte, Bento encontrou, no lugar onde deixou o fumo, uma única pena preta, brilhante e perfeita, como um agradecimento.\n");
    printf("1. Pegar a pena e guardar.\n");
    printf("2. Deixar a pena onde está.\n");
    printf("3. Queimar a pena.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Bento se aproxima com cuidado e pega a pena preta. Ela é macia e estranhamente quente ao toque. Ele a leva para dentro e a guarda em uma pequena caixa de madeira, como um amuleto ou um troféu silencioso.\n");
    noDaMatinta5A(); break;
    case 2: printf("Com medo de que a pena pudesse ter algum feitiço, Bento decide não tocar nela. Ele a deixa ali, como um sinal de que a troca acabou e que ele não quer mais nada daquela entidade, nem o bem, nem o mal.\n");
    noDaMatinta5B(); break;
    case 3: printf("Num ato final de desafio, Bento pega a pena, acende um fósforo e a queima. A pena se desfaz em uma fumaça escura com um cheiro estranho, e ele sente que, com aquele gesto, quebrou o pacto de paz que havia sido oferecido.\n");
    noDaMatinta5C(); break;
    }
}


void noDaMatinta4B() {
    printf("A recusa de Bento trouxe consequências. O assobio não parou mais. Ele entrou na sua cabeça, dia e noite, mesmo sob o sol quente, ele ouvia o som agudo. Ele não dormia, não comia direito. Vivia atormentado, olhando para as sombras, sempre com a sensação de que aqueles olhos de brasa o observavam de longe.\n");
    printf("1. Mudar-se da casa.\n");
    printf("2. Tentar fazer uma oferenda de paz.\n");
    printf("3. Pedir ajuda a um pajé.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Incapaz de suportar mais, Bento decide abandonar tudo. Ele arruma suas poucas coisas em uma trouxa e deixa para trás a casa onde nasceu, na esperança de que a distância possa silenciar o assobio que o persegue.\n");
    noDaMatinta5C(); break;
    case 2: printf("Arrependido, ele prepara a melhor oferenda que pode: fumo de rolo, um pouco de cachaça e café fresco. Ele deixa tudo do lado de fora à noite, um pedido mudo de perdão pela sua falha inicial.\n");
    noDaMatinta5A(); break;
    case 3: printf("Desesperado, Bento viaja até uma aldeia vizinha para procurar o velho pajé. Ele conta sua história, esperando que a sabedoria do ancião possa lhe dar uma solução para quebrar a maldição.\n");
    noDaMatinta5B(); break;
    }
}


void noDaMatinta4C() {
    printf("A curiosidade de Bento o levou para fora, para a escuridão. Ele não encontrou ninguém. Mas a partir daquela noite, ele começou a ver coisas. Um vulto que passava rápido no canto do olho, a sombra de um pássaro onde não havia pássaro nenhum. Ele sentia que não estava mais sozinho, que algo o acompanhava, sempre à espreita.\n");
    printf("1. Tentar seguir o vulto.\n");
    printf("2. Deixar uma oferenda para o que quer que seja.\n");
    printf("3. Ignorar e tentar viver normalmente.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Bento se cansa de ter medo. Na próxima vez que vê o vulto, ele corre em sua direção, entrando na mata escura, gritando, tentando encurralar a sombra que sempre parece estar um passo à sua frente.\n");
    noDaMatinta5C(); break;
    case 2: printf("Ele entende que a presença quer algo. Sem saber se é a Matinta ou outro espírito, ele deixa fumo e café na soleira da porta todas as noites, esperando que o gesto de respeito acalme a criatura.\n");
    noDaMatinta5B(); break;
    case 3: printf("Ele decide que não vai enlouquecer. Tenta ignorar as sombras, os vultos. Continua seu trabalho na roça, sua pescaria, fingindo que nada está errado, enquanto a presença ao seu redor parece ficar cada vez mais ousada.\n");
    noDaMatinta5A(); break;
    }
}


void noDaMatinta5A() {
    printf("Bento entendeu que precisava mostrar respeito. Fez um pacto silencioso. Ele nunca mais foi perturbado pelo assobio. Na verdade, as coisas na sua vida começaram a dar certo, a roça ficou mais farta, a pesca, mais abundante. Ele aprendeu a conviver com o mistério daquela presença.\n");
    noFinalPositivoMatinta();
}


void noDaMatinta5B() {
    printf("Bento tentou seguir em frente, seja pedindo ajuda ou simplesmente ignorando os assobios. Mas a Matinta não esquece. O tormento diminuiu, mas nunca desapareceu por completo. De vez em quando, numa noite muito silenciosa, ele ainda ouvia o assobio bem longe, como um lembrete de uma dívida que ele nunca pagou. Ele vivia com uma paz frágil, sempre com medo que ela voltasse.\n");
    noFinalNegativo2Matinta();
}


void noDaMatinta5C() {
    printf("A teimosia de Bento foi maior que seu bom senso. Uma afronta ao espírito, ele cometeu o desrespeito final. O assobio se tornou ensurdecedor e constante. Dizem que ele enlouqueceu, falando sozinho e brigando com as sombras, até o dia em que desapareceu na mata, e tudo que encontraram foi o chapéu dele caído perto de uma gameleira antiga.\n");
    noFinalNegativo1Matinta();
}


void noFinalPositivoMatinta() {
    printf("Bento aprendeu a lição. Ele passou a respeitar os mistérios da noite e a ensinar os mais novos a sempre serem generosos. Ele se tornou um guardião daquela história, lembrando a todos que um pouco de fumo e respeito podem garantir a paz e a proteção da floresta\n");
    noCenaFinalMatinta();
}


void noFinalNegativo1Matinta() {
    printf("Bento se perdeu para o seu próprio medo e desrespeito. A história dele virou um aviso para as crianças teimosas, um exemplo de como a arrogância diante do desconhecido pode levar um homem à loucura e ao esquecimento. Dizem que, às vezes, junto com o assobio da Matinta, se ouve na mata o lamento de um homem perdido na escuridão.\n");
    noCenaFinalMatinta();
}


void noFinalNegativo2Matinta() {
    printf("Bento conseguiu viver, mas nunca em paz de verdade. Ele carregou para sempre o peso da sua escolha, vivendo com a sombra de uma ameaça que poderia voltar a qualquer momento. A história dele nos ensina que ignorar um problema não o faz desaparecer, apenas o adia, e que a paz comprada com o medo não é paz de verdade.\n");
    noCenaFinalMatinta();
}


void noCenaFinalMatinta() {
    printf("Mãe: A Matinta, meu amor, é mais que uma assombração. Ela é um teste. Ela testa a nossa generosidade, o nosso respeito pelo que é mais velho, pelo que não entendemos. Ela nos lembra que vivemos cercados de mistérios e que a melhor forma de lidar com eles não é com a força ou com a teimosia, mas com a sabedoria e a humildade. E, claro, a nunca negar um pouco de café ou fumo para uma visita noturna.\n");
    noTransicaoMatinta();
}


void noTransicaoMatinta() {
    printf("Você foi muito corajosa ouvindo a história da Matinta... Agora, só falta uma lenda para fechar nossa noite. A mais antiga e poderosa de todas. A lenda da Boiúna, a Cobra-Grande que dorme no fundo do rio e que, quando acorda, tem força para criar ondas que podem virar o mundo.\n");
    printf("Ainda tem coragem para a última história?");
    printf("1. Sim, conta a da Boiúna.\n");
    printf("2. Não, já chega de susto por hoje.\n");
    int op = escolha(1, 2);
    switch (op) {
        case 1: noDoBoiuna1C(); break;
        case 2: noFinalNeutro(); break;
    }
}


void noDaBoiuna1C() {
    printf("Então escute com atenção... A Boiúna não é como as outras lendas. Ela não canta, nem pede nada. Ela é a própria força do rio. Uma cobra tão imensa que seu corpo adormecido está enrolado sob a nossa cidade, de um bairro ao outro. Os mais velhos contam que o dia em que a Boiúna sair de seu repouso, Belém desmoronará e será tragada pelas águas da Baía do Guajará...\n");
    printf("E havia um menino chamado Matheus, que ouvia essa história e ria. Ele achava que era só conversa para assustar os medrosos. Para provar sua coragem, numa tarde em que a maré estava cheia e calma, ele pegou sua pequena canoa e remou sozinho para o meio da baía, bem onde diziam ser o local de repouso da cabeça da cobra gigante.\n");
    printf("A água estava parada como um espelho escuro. O desafio de Matheus ao silêncio da baía estava prestes a ter uma resposta...\n");
    printf("1. Gritar o nome da Boiúna para desafiá-la.\n");
    printf("2. Bater o remo na água para provocar.\n");
    printf("3. Ficar em silêncio, apenas observando.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Cheio de si, Matheus encheu os pulmões e gritou o nome da cobra para o horizonte. A voz dele ecoou e se perdeu, e por um instante, a única resposta foi o silêncio. Um silêncio pesado, que veio antes da primeira ondulação.\n");
    noDoBoiuna2A(); break;
    case 2: printf("Com um sorriso debochado, Matheus bateu com a pá do remo na superfície da água, uma, duas, três vezes. O som seco se espalhou, e a vibração que voltou não parecia ser apenas do eco, mas algo que tremeu debaixo d'água\n");
    noDoBoiuna2B(); break;
    case 3: printf("Ele parou de remar e deixou a canoa à deriva, observando tudo com um ar de superioridade. Foi na quietude, enquanto olhava para o seu próprio reflexo, que ele notou algo mais no fundo: dois brilhos fracos, que pulsavam lentamente.\n");
    noDoBoiuna2C(); break;
    }
}


void noDoBoiuna2A() {
    printf("Do nada, uma única onda, grande e lisa, se formou no meio da baía e veio na direção de Matheus. Não havia vento, nem outros barcos. A onda balançou a canoa com força, quase a virando, e depois sumiu, deixando a água lisa como antes. Era um aviso.\n");
    printf("1. Rir e continuar o desafio.\n");
    printf("2. Remar rápido para a margem.\n");
    printf("3. Rezar pedindo proteção.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Matheus solta uma gargalhada, achando que a onda foi só uma coincidência. Ele se sente ainda mais corajoso e decide levar o desafio adiante, provocando ainda mais a criatura adormecida.\n");
    noDoBoiuna3B(); break;
    case 2: printf("O aviso foi o suficiente. O medo gela a espinha de Matheus, que vira a canoa bruscamente e rema com toda a força em direção à terra firme, esperando ter sido apenas um susto.\n");
    noDoBoiuna3A(); break;
    case 3: printf("Com o coração na boca, Matheus junta as mãos e sussurra a prece que sua avó lhe ensinou. Ele fica imóvel, esperando que sua fé seja o bastante para acalmar a fúria do rio.\n");
    noDoBoiuna3C(); break;
    }
}


void noDoBoiuna2B() {
    printf("Logo depois das batidas do remo, a canoa inteira tremeu. Não foi um balanço de água, foi uma trepidação que veio de baixo, como se ele estivesse em cima de um animal gigante que se espreguiçou. O tremor durou poucos segundos, mas foi o suficiente para o sorriso de Matheus desaparecer.\n");
    printf("1. Ficar completamente imóvel.\n");
    printf("2. Gritar, assustado.\n");
    printf("3. Remar para longe do epicentro.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("O instinto de Matheus diz para ele não se mover. Ele prende a respiração, agarrando as bordas da canoa, esperando que a criatura pense que ele é apenas um tronco flutuando e volte a dormir.\n");
    noDoBoiuna3C(); break;
    case 2: printf("O susto é tão grande que um grito escapa da garganta de Matheus. O som de seu pavor ecoa pela baía silenciosa, e a resposta que vem do fundo do rio não é nada boa.\n");
    noDoBoiuna3B(); break;
    case 3: printf("Ele reage rápido, fincando o remo na água e impulsionando a canoa para longe do ponto onde sentiu o tremor, tentando escapar da presença que se move sob ele.\n");
    noDoBoiuna3A(); break;
    }
}


void noDoBoiuna2C() {
    printf("Aqueles dois pontos de luz no fundo da baía começaram a brilhar mais forte. Eram grandes, redondos, e Matheus entendeu com um calafrio na alma: não eram reflexos, eram olhos. Olhos imensos que o encaravam das profundezas, e que, lentamente, começaram a subir em sua direção.\n");
    printf("1. Jogar a âncora para não sair do lugar.\n");
    printf("2. Remar desesperadamente para qualquer direção.\n");
    printf("3. Fechar os olhos para não ver.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Num ato de desafio inexplicável, Matheus decide que não vai fugir. Ele joga a pequena âncora na água, como se quisesse fincar sua posição e encarar de frente os olhos que sobem.\n");
    noDoBoiuna3B(); break;
    case 2: printf("O pânico toma conta. Matheus não pensa, apenas rema, com braçadas desordenadas e cheias de pavor, para qualquer lugar que seja longe daqueles olhos luminosos.\n");
    noDoBoiuna3A(); break;
    case 3: printf("Incapaz de encarar o terror, Matheus aperta os olhos com força, como uma criança pequena que se esconde no escuro. Ele prefere não ver a criatura que está vindo em sua direção.\n");
    noDoBoiuna3C(); break;
    }
}


void noDoBoiuna3A() {
    printf("Quando Matheus tentou fugir, percebeu algo assustador: a correnteza estava contra ele, não importava para onde remasse. Era como se toda a água da baía o estivesse puxando para o centro. Sua canoa, antes sob seu controle, agora era um brinquedo em um redemoinho invisível.\n");
    printf("1. Largar o remo e se agarrar à canoa.\n");
    printf("2. Continuar remando com toda a força.\n");
    printf("3. Pular na água para tentar nadar.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Percebendo que lutar é inútil, ele solta o remo e se agarra com toda a força às bordas da canoa, entregando-se à força da água e esperando pelo pior.\n");
    noDoBoiuna4B(); break;
    case 2: printf("Matheus se recusa a desistir. Com os músculos queimando, ele rema contra a correnteza impossível, numa batalha de teimosia contra a força do próprio rio.\n");
    noDoBoiuna4A(); break;
    case 3: printf("Num ato de desespero, ele acha que seu corpo será mais forte que o barco. Abandona a canoa e mergulha na água escura, sentindo imediatamente o abraço gelado da correnteza.\n");
    noDoBoiuna4C(); break; 
    }
}


void noDoBoiuna3B() {
    printf("Um cheiro forte de lodo e pântano subiu do fundo da água, um cheiro tão intenso que fez os olhos de Matheus arderem. A água ao redor da canoa começou a borbulhar, como se algo imenso estivesse respirando lá embaixo, soltando o ar podre de séculos de sono.\n");
    printf("1. Tapar o nariz e rezar.\n");
    printf("2. Remar na direção das bolhas para ver o que é.\n");
    printf("3. Gritar por socorro.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("cheiro é insuportável. Ele usa um pedaço da camisa para cobrir o rosto e fecha os olhos, murmurando uma prece, enquanto a água ao seu redor continua a ferver.\n");
    noDoBoiuna4A(); break;
    case 2: printf("curiosidade perigosa de Matheus fala mais alto. Ele aponta a canoa para o centro do borbulhar, querendo ver com os próprios olhos a criatura que causa aquilo.\n");
    noDoBoiuna4C(); break;
    case 3: printf("Ele entende que está em perigo mortal. Vira-se para a cidade distante e grita por ajuda, mas sua voz parece pequena e insignificante diante do poder que desperta do fundo.\n");
    noDoBoiuna4B(); break; 
    }
}


void noDoBoiuna3C() {
    printf("O tremor voltou, mas desta vez muito mais forte. Matheus sentiu a vibração subir pela canoa e entrar em seu corpo. Ele olhou para a cidade e viu o impensável: os prédios na orla tremiam. Ele ouviu um barulho baixo e distante, como um trovão vindo da terra. A profecia estava começando por causa dele.\n");
    printf("1. Remar na direção da cidade para avisar.\n");
    printf("2. Pular na água e nadar para a ilha mais próxima.\n");
    printf("3. Ficar paralisado de medo.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("O terror pelo que está acontecendo com a cidade supera seu próprio medo. Num ato heroico e talvez inútil, ele vira a canoa e rema na direção da orla, gritando para as pessoas correrem.\n");
    noDoBoiuna4B(); break;
    case 2: printf("Pensando apenas em se salvar, ele abandona a canoa e a cidade à própria sorte. Mergulha e nada em direção à Ilha do Combu, do outro lado da baía, longe do epicentro do tremor.\n");
    noDoBoiuna4C(); break;
    case 3: printf("A cena é demais para ele. Matheus fica imóvel na canoa, os olhos arregalados, vendo a cidade tremer, incapaz de remar, de gritar, de fazer qualquer coisa.\n");
    noDoBoiuna4A(); break; 
    }
}


void noDoBoiuna4A() {
    printf("A água ao lado da canoa se abriu e algo emergiu, liso e escuro. Era uma escama. Uma única escama, maior que a canoa inteira. Ela brilhava com a luz do entardecer, coberta de limo e lodo. Era a prova viva de que a criatura sob ele era real e de um tamanho que mente nenhuma podia imaginar.\n");
    printf("1. Tocar na escama.\n");
    printf("2. Bater na escama com o remo.\n");
    printf("3. Afastar-se remando lentamente.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Movido por um fascínio assombrado, ele estica a mão trêmula e toca a superfície lisa e fria da escama. Ele sente uma energia antiga, um poder que vibra sob seus dedos.\n");
    noDoBoiuna5C(); break;
    case 2: printf("Num último ato de rebeldia, Matheus levanta o remo e o bate com força contra a escama. O som é oco e surdo, como bater em uma montanha, e a reação da criatura é imediata e furiosa.\n");
    noDoBoiuna5B(); break;
    case 3: printf("Mostrando um respeito que não teve até agora, ele usa o remo para se afastar devagar, sem movimentos bruscos, tentando não perturbar ainda mais o gigante que acabou de se mostrar.\n");
    noDoBoiuna5A(); break;
    }
}


void noDoBoiuna4B() {
    printf("Enquanto a correnteza o puxava, Matheus viu as luzes da cidade piscarem e se apagarem. O tremor na terra fez com que um pedaço do barranco do Ver-o-Peso desmoronasse na água, criando um barulho assustador. As pessoas na orla começaram a correr. A profecia não era uma história, era um fato, e ele estava no centro de tudo.\n");
    printf("1. Gritar um pedido de perdão à Boiúna.\n");
    printf("2. Tentar virar o barco e lutar contra a correnteza.\n");
    printf("3. Aceitar o destino e parar de lutar.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Finalmente entendendo a dimensão de seu erro, Matheus grita para as águas escuras, um pedido de perdão desesperado, esperando que a criatura possa ouvir e ter piedade da cidade.\n");
    noDoBoiuna5A(); break;
    case 2: printf("Ele se recusa a ser a causa do fim. Com uma força que vem do desespero, ele tenta virar a canoa, uma última tentativa de lutar contra o destino que ele mesmo provocou.\n");
    noDoBoiuna5C(); break;
    case 3: printf("Ele larga o remo e olha para a cidade que desmorona. Uma calma terrível toma conta dele. Ele entende que é tarde demais e aceita seu papel no fim de tudo.\n");
    noDoBoiuna5B(); break; 
    }
}


void noDoBoiuna4C() {
    printf("No momento em que Matheus pulou na água, o mundo dele virou caos. A correnteza o pegou, mas não era uma correnteza de rio. Ele sentiu um corpo imenso e musculoso se enrolando ao redor dele, puxando-o para baixo. Não era um abraço de maldade, era um abraço de poder, como uma montanha que se move e não percebe a formiga em seu caminho.\n");
    printf("1. Lutar para se soltar.\n");
    printf("2. Relaxar o corpo e não lutar.\n");
    printf("3. Tentar nadar para a superfície.\n");
    int op = escolha(1, 3);
    switch (op)
    {
    case 1: printf("Ele se debate com pânico, chutando e socando o corpo gigantesco. Mas seus golpes são como a chuva batendo numa rocha, inúteis. Sua luta apenas irrita a criatura.\n");
    noDoBoiuna5B(); break;
    case 2: printf("Lembrando de uma história antiga, ele relaxa completamente, deixando o ar sair dos pulmões. Ele não luta contra o abraço, e a serpente, sentindo a ausência de ameaça, o leva para as profundezas.\n");
    noDoBoiuna5C(); break;
    case 3: printf("Com o fôlego acabando, ele usa suas últimas forças para tentar nadar para cima, lutando contra a força colossal que o puxa para baixo, em busca de uma nesga de ar e de vida.\n");
    noDoBoiuna5A(); break; 
    }
}


void noDoBoiuna5A() {
    printf("Para a sorte de Matheus funcionou. Lentamente, a correnteza diminuiu, os tremores pararam e a presença assustadora pareceu voltar a dormir. Matheus, tremendo e encharcado, conseguiu remar de volta. Ele chegou na margem e viu o caos: parte da orla tinha cedido, as pessoas choravam, assustadas. A cidade não caiu, mas sentiu o aviso.\n");
    noFinalPositivoBoiuna();
}


void noDoBoiuna5B() {
    printf("O último ato de desafio de Matheus foi o estopim. A Boiúna despertou por completo. Uma onda gigantesca, maior que qualquer prédio, se ergueu da baía. A última coisa que Matheus viu foi a crista da onda engolindo as luzes da cidade, e o som ensurdecedor da profecia se cumprindo. Ele não foi apenas uma vítima da lenda, ele foi a causa do fim.\n");
    noFinalNegativo1Boiuna();
}


void noDoBoiuna5C() {
    printf("Ao ser puxado para o fundo, Matheus não se afogou. Ele parou em uma espécie de gruta de ar, ao lado do olho gigantesco e adormecido da Boiúna. Ele percebeu que não podia sair e nem envelhecer. Foi condenado a ser o eterno guardião do sono da serpente, vendo o mundo passar lá em cima, sabendo que qualquer perturbação poderia acordá-la e destruir tudo.\n");
    noFinalNegativo2Boiuna();
}


void noFinalPositivoBoiuna() {
    printf("Matheus voltou para casa, não mais como um menino teimoso, mas como o portador de um segredo terrível. Ninguém acreditou em sua história, o chamaram de louco. Mas ele passou o resto da vida olhando para a baía com respeito e medo, sabendo o quão perto sua cidade esteve de desaparecer.\n");
    noCenaFinalBoiuna();
}


void noFinalNegativo1Boiuna() {
    printf("Não sobrou ninguém para contar a história de Matheus. A cidade de Belém virou uma lenda ela mesma, um reino submerso guardado pela grande serpente. A história dele se tornou o último aviso, a prova de que algumas lendas nunca devem ser desafiadas\n");
    noCenaFinalBoiuna();
}


void noFinalNegativo2Boiuna() {
    printf("Matheus nunca mais foi visto. Alguns dizem que ele foi devorado, outros que fugiu. Mas os pajés mais antigos sabem a verdade: que ele se tornou parte da lenda. Um espírito preso ao lado da Boiúuna, condenado a vigiar seu sono e proteger o mundo da fúria que ele mesmo quase despertou.\n");
    noCenaFinalBoiuna();
}


void noCenaFinalBoiuna() {
    printf("Mãe: A Boiúna, meu amor, nos ensina sobre o respeito pelas forças que não podemos controlar. Ela é a natureza em sua forma mais poderosa. A história de Matheus é um lembrete de que a arrogância e o desrespeito podem ter consequências terríveis, não apenas para nós, mas para todos ao nosso redor. E que sob a calma aparência de nossas águas, dorme um poder que deve, para sempre, ser deixado em paz.\n");
}


void noTransicaoFinal() {
    printf("(A mãe faz uma longa pausa. O quarto fica em silêncio, preenchido apenas pelo som suave dos grilos lá fora. A jornada pelas lendas terminou.)\n");
    printf("E essa, meu bem, foi a última. A Iara, a Matinta e a Boiúna... todas as grandes lendas que a noite nos trouxe. Cada uma com seu perigo, cada uma com sua lição.\n");
    printf("Mas a parte mais importante não foram as histórias que eu contei. Foi o caminho que você escolheu para o Aruã, para o Bento e para o Matheus. As suas decisões de coragem, de medo, de respeito ou de teimosia.\n");
    printf("(Ela se aproxima da sua cama, e o tom de voz dela muda, tornando-se mais sério e um pouco misterioso, como se fosse revelar um último segredo.)\n");
    printf("Essas escolhas ecoam para além das histórias, sabe? Elas moldam a noite ao nosso redor. Que tipo de noite a sua jornada nos trouxe…?\n");
}


void noFinalBom() {
    printf("Pronto, meu amor... as histórias acabaram. Você ouviu todas, enfrentou os perigos com coragem e, mais importante, com sabedoria. Você mostrou respeito.\n");
    printf("(A mãe se levanta e vai até a janela do quarto, olhando para a noite lá fora.)\n");
    printf("As lendas da nossa terra não são feitas só para dar medo. Elas são testes, são lições. E você, meu bem, aprendeu a lição mais importante de todas: que a verdadeira força não está em desafiar o desconhecido, mas em compreendê-lo e respeitá-lo. Você salvou o Aruã, mostrou generosidade à Matinta e teve humildade diante da Boiúna.\n");
    printf("(Ela se vira para você, com um sorriso orgulhoso.)\n");
    printf("As criaturas da mata e dos rios sentem quem tem o coração bom. Hoje, você não apenas ouviu histórias, você se tornou parte delas. Uma morada das lendas. Agora pode dormir, sabendo que os espíritos da Amazônia te olham com bons olhos. E que seus sonhos serão sempre protegidos por eles. Boa noite, minha criança.\n");
    printf("(A criança se sente segura e conectada com a magia da sua terra. Adormece com um sorriso, sentindo-se protegida.)\n");
}


void noFinalNeutro() {
    printf("É... as histórias da noite acabaram. Algumas escolhas foram sábias, outras... nem tanto. O importante é que você está aqui, na sua cama.\n");
    printf("(A mãe ajeita o seu lençol, mas o sorriso dela parece um pouco cansado, preocupado.)\n");
    printf("As lendas são assim mesmo, meu bem. Nem sempre a gente acerta. Às vezes, a gente foge do perigo, mas às vezes o medo ou a teimosia falam mais alto. O mundo lá fora é cheio de Iaras, Matintas e Boiúnas, e cada dia é uma escolha.\n");
    printf("(Ela para por um instante, como se estivesse ouvindo algo que só ela pode escutar.)\n");
    printf("O importante é nunca esquecer as lições que elas nos dão. A prudência é uma grande amiga. Agora feche os olhos e tente dormir... mas se ouvir algum assobio na janela, já sabe o que fazer, não é?\n");
    printf("(A mãe apaga a luz e sai. A criança se encolhe sob as cobertas. Não se sente em perigo, mas também não se sente completamente em paz. O silêncio do quarto parece pesado, e qualquer som lá fora agora soa como um sussurro de lenda.)\n");
}


void noFinalRuim() {
    printf("As histórias acabaram...\n");
    printf("(A mãe fala com a voz baixa, quase um sussurro. Ela não olha para você, mas para a janela, como se visse algo assustador lá fora.)\n");
    printf("Você... você fez escolhas difíceis, meu amor. Escolhas que alimentaram a escuridão. A Iara levou um rapaz, a Matinta atormentou um homem, a Boiúna... ah, a Boiúna quase nos levou junto. As lendas não são só histórias, elas são espíritos. E quando a gente erra com eles, eles não esquecem.\n");
    printf("(Um vento frio entra pela fresta da janela, trazendo um cheiro de água parada e lodo. A mãe se arrepia.)\n");
    printf("Aqui em Belém, existe um lugar chamado Igarapé das Almas. Dizem que é para lá que os espíritos perdidos vão, aqueles que foram levados pelas lendas. As almas que a Iara afogou, que a Matinta enlouqueceu... todas elas ficam presas lá, chorando e se lamentando na escuridão.\n");
    printf("(A mãe finalmente se vira para você. Os olhos dela estão arregalados de medo.)\n");
    printf("Com as suas escolhas, meu bem... nós abrimos uma porta. Eles sabem que a gente conhece as histórias deles. Eles sabem que a gente viu o que aconteceu.\n");
    printf("(De repente, do lado de fora, ouve-se um som baixo e triste, como o choro de muitas vozes misturadas, vindo com o vento.)\n");
    printf("Você está ouvindo? É o chamado do igarapé. Eles estão chamando por mais uma história. A sua. Reze, meu amor. Reze para que eles não encontrem o caminho até esta janela.\n");
    printf("(A mãe não sai do quarto. Ela se senta em uma cadeira no canto, vigiando a janela. A criança não consegue dormir. O som do choro continua, e a cada rajada de vento, parece ficar mais perto. A noite será muito, muito longa.)\n");
}

int main() {
    intro();
    return 0;
}