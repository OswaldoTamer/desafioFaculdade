#include <stdio.h>

int main() {

    //Variáveis para a primeira carta
    int carta1, populacao1, pontosTuristicos1;
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    float area1, pib1;

    //Variáveis para a segunda carta
    int carta2, populacao2, pontosTuristicos2;
    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    float area2, pib2;

    printf("Olá, seja bem-vindo ao cadastro do Super Trunfo.\n");
    printf("Preencha os dados solicitados para cadastrar suas duas carta.\n");

    printf("Digite o número da primeira carta a ser cadastrada:\n");
    scanf("%d", &carta1);

    printf("Digite o estado da primeira carta sendo ele de 'A' à 'H':\n");
    scanf(" %c", &estado1); 

    printf("Digite o código da primeira carta (ex: A01):\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a quantidade populacional da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite qual o tamanho da área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

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
    scanf("%d", &populacao2);

    printf("Digite qual o tamanho da área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    //Agora será impresso os dados armazenados

    printf("\nMuito obrigado por preencher todos os dados, vou lhe mostrar agora as cartas cadastradas.\n");

    printf("\nCarta %d:\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta %d:\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
