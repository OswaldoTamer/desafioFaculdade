#include <stdio.h>

int main() {

    //Variáveis para a primeira carta
    int carta1, pontosTuristicos1;
    unsigned long int populacao1;
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    float area1, pib1;
    float superPoder1;

    //Variáveis para a segunda carta
    int carta2, pontosTuristicos2;
    unsigned long int populacao2;
    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    float area2, pib2;
    float superPoder2;


    printf("Olá, seja bem-vindo ao cadastro do Super Trunfo.\n");
    printf("\nPreencha os dados solicitados para cadastrar suas duas carta.\n");

    printf("\nDigite o número da primeira carta a ser cadastrada:\n");
    scanf("%d", &carta1);

    printf("Digite o estado da primeira carta sendo ele de 'A' à 'H':\n");
    scanf(" %c", &estado1); 

    printf("Digite o código da primeira carta (ex: A01):\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a quantidade populacional da cidade:\n");
    scanf("%u", &populacao1);

    printf("Digite qual o tamanho da área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    float densPop1 = populacao1 / area1;

    float pibPop1 = (pib1 * 1000000000) / populacao1; //Foi necessário fazer a conversão para calcular o Pib per Capita.

    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) * + pontosTuristicos1 +  (1 / densPop1) + pibPop1; //Necessário conversão do pib e também densidade

    //Aqui começa o cadastro da segunda carta

    printf("\nAgora digite os dados da segunda carta!\n");

    printf("\nDigite o número da segunda carta a ser cadastrada:\n");
    scanf("%d", &carta2);

    printf("Digite o estado da segunda carta sendo ele de 'A' à 'H':\n");
    scanf(" %c", &estado2); 

    printf("Digite o código da segunda carta (ex: A01):\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade2); 

    printf("Digite a quantidade populacional da cidade:\n");
    scanf("%u", &populacao2);

    printf("Digite qual o tamanho da área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    float densPop2 = populacao2 / area2;

    float pibPop2 = (pib2 * 1000000000) / populacao2; //Foi necessário fazer a conversão para calcular o Pib per Capita.

    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) * + pontosTuristicos2 +  (1 / densPop2) + pibPop2; //Necessário conversão do pib e também densidade

    //Agora será impresso os dados armazenados

    printf("\nMuito obrigado por preencher todos os dados, vou lhe mostrar agora as cartas cadastradas.\n");

    printf("\nCarta %d:\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %u habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop1);
    printf("Pib per Capita: %.2f reais\n", pibPop1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta %d:\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop2);
    printf("Pib per Capita: %.2f reais\n", pibPop2);
    printf("Super Poder: %.2f\n", superPoder2);


    //Variáveis para comparação das cartas
    int vencedorPopulacao = (populacao1 > populacao2) * carta1 + (populacao2 > populacao1) * carta2;
    int vencedorArea = (area1 > area2) * carta1 + (area2 > area1) * carta2;
    int vencedorPib = (pib1 > pib2) * carta1 + (pib2 > pib1) * carta2;
    int vencedorPontosTuris = (pontosTuristicos1 > pontosTuristicos2) * carta1 + (pontosTuristicos2 > pontosTuristicos1) * carta2;
    int vencedorDensPop = (densPop1 < densPop2) * carta1 + (densPop2 < densPop1) * carta2;
    int vencedorPibPop = (pibPop1 > pibPop2) * carta1 + (pibPop2 > pibPop1) * carta2;
    int vencedorSuperPoder = (superPoder1 > superPoder2) * carta1 + (superPoder2 > superPoder1) * carta2;

    //Imprimindo a comparação
    printf("\nPopulação: Carta %d venceu. \n", vencedorPopulacao);
    printf("Área: Carta %d venceu. \n", vencedorArea);
    printf("Pib: Carta %d venceu. \n", vencedorPib);
    printf("Pontos Turísticos: Carta %d venceu. \n", vencedorPontosTuris);
    printf("Densidade Populacional: Carta %d venceu. \n", vencedorDensPop);
    printf("Pib per Capita: Carta %d venceu. \n", vencedorPibPop);
    printf("Super Poder: Carta %d venceu. \n", vencedorSuperPoder);

    return 0;
}
