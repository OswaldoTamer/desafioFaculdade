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
    printf("Preencha os dados solicitados para cadastrar suas duas carta.\n");

    printf("Digite o número da primeira carta a ser cadastrada:\n");
    scanf("%d", &carta1);

    printf("Digite o estado da primeira carta sendo ele de 'A' à 'H':\n");
    scanf(" %c", &estado1); 

    printf("Digite o código da primeira carta (ex: A01):\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1); //Ainda não aprendemos sobre essa chamada para nomes compostos, porém meu código estava dando erro sem ele.

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


    //MENU INTERATIVO

    int escolhaAtributo1, escolhaAtributo2;

    printf("\nVamos começar a partida!\n");
    printf("Escolha o primeiro atributo para comparação das cartas: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &escolhaAtributo1);

    printf("\nAgora escolha o segundo atributo diferente do primeiro escolhido: \n");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo1 == escolhaAtributo2) {
        printf("Opção inválida, não é possível escolher o mesmo atributo, por gentileza faça o processo novamente!");
        return 0;
    }

    //Aqui começa o switch referente a escolha do primeiro atributo e sua comparação entre as cartas.

    switch (escolhaAtributo1)
    {
        case 1:
            if (populacao1 > populacao2) {
                printf("\nA carta %s tem %u habitantes, enquanto a carta %s tem %u habitantes!\n", cidade1, populacao1, cidade2, populacao2);
                printf("Carta 1 %s venceu!\n",  cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nA carta %s tem %u habitantes, enquanto a carta %s tem %u habitantes!\n", cidade1, populacao1, cidade2, populacao2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (populacao1 == populacao2) {
                printf("\nHouve um empate!\n");
            }
            break;
        
        case 2:
            if (area1 > area2) {
                printf("\nA carta %s tem %.2f de área, enquanto a carta %s tem %.2f de área!\n", cidade1, area1, cidade2, area2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nA carta %s tem %.2f de área, enquanto a carta %s tem %.2f de área!\n", cidade1, area1, cidade2, area2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (area1 == area2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 3:
            if (pib1 > pib2) {
                printf("\nA carta %s tem %.2f de PIB, enquanto a carta %s tem %.2f de PIB!\n", cidade1, pib1, cidade2, pib2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nA carta %s tem %.2f de PIB, enquanto a carta %s tem %.2f de PIB!\n", cidade1, pib1, cidade2, pib2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (pib1 == pib2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nA carta %s tem %d pontos turísticos, enquanto a carta %s tem %d pontos turísticos!\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nA carta %s tem %d pontos turísticos, enquanto a carta %s tem %d pontos turísticos!\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (pontosTuristicos1 == pontosTuristicos2) {
                printf("\nHouve um empate!\n");
            }
            break;
        
        case 5:
            if (densPop1 < densPop2) {
                printf("\nA carta %s tem %.2f hab/km², enquanto a carta %s tem %.2f hab/km²!\n", cidade1, densPop1, cidade2, densPop2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (densPop2 < densPop1) {
                printf("\nA carta %s tem %.2f hab/km², enquanto a carta %s tem %.2f hab/km²!\n", cidade1, densPop1, cidade2, densPop2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (densPop1 == densPop2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 6:
            if (pibPop1 > pibPop2) {
                printf("\nA carta %s tem %.2f reais de pib per capita, enquanto a carta %s tem %.2f reais de pib per capita!\n", cidade1, pibPop1, cidade2, pibPop2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (pibPop2 > pibPop1) {
                printf("\nA carta %s tem %.2f reais de pib per capita, enquanto a carta %s tem %.2f reais de pib per capita!\n", cidade1, pibPop1, cidade2, pibPop2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (pibPop1 == pibPop2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 7:
            if (superPoder1 > superPoder2) {
                printf("\n A carta %s tem %.2f de super poder, enquanto a carta %s tem %.2f de super poder!\n", cidade1, superPoder1, cidade2, superPoder2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (superPoder2 > superPoder1) {
                printf("\n A carta %s tem %.2f de super poder, enquanto a carta %s tem %.2f de super poder!\n", cidade1, superPoder1, cidade2, superPoder2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (superPoder1 == superPoder2) {
                printf("\nHouve um empate!\n");
            }
            break;
    
        default:
            printf("\nEscolha inválida, por favor, tente novamente!\n");
    }

    //Aqui começa a comparação da segunda carta. 

    switch (escolhaAtributo2)
    {
        case 1:
            if (populacao1 > populacao2) {
                printf("\nA carta %s tem %u habitantes, enquanto a carta %s tem %u habitantes!\n", cidade1, populacao1, cidade2, populacao2);
                printf("Carta 1 %s venceu!\n",  cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nA carta %s tem %u habitantes, enquanto a carta %s tem %u habitantes!\n", cidade1, populacao1, cidade2, populacao2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (populacao1 == populacao2) {
                printf("\nHouve um empate!\n");
            }
            break;
        
        case 2:
            if (area1 > area2) {
                printf("\nA carta %s tem %.2f de área, enquanto a carta %s tem %.2f de área!\n", cidade1, area1, cidade2, area2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nA carta %s tem %.2f de área, enquanto a carta %s tem %.2f de área!\n", cidade1, area1, cidade2, area2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (area1 == area2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 3:
            if (pib1 > pib2) {
                printf("\nA carta %s tem %.2f de PIB, enquanto a carta %s tem %.2f de PIB!\n", cidade1, pib1, cidade2, pib2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nA carta %s tem %.2f de PIB, enquanto a carta %s tem %.2f de PIB!\n", cidade1, pib1, cidade2, pib2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (pib1 == pib2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nA carta %s tem %d pontos turísticos, enquanto a carta %s tem %d pontos turísticos!\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nA carta %s tem %d pontos turísticos, enquanto a carta %s tem %d pontos turísticos!\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (pontosTuristicos1 == pontosTuristicos2) {
                printf("\nHouve um empate!\n");
            }
            break;
        
        case 5:
            if (densPop1 < densPop2) {
                printf("\nA carta %s tem %.2f hab/km², enquanto a carta %s tem %.2f hab/km²!\n", cidade1, densPop1, cidade2, densPop2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (densPop2 < densPop1) {
                printf("\nA carta %s tem %.2f hab/km², enquanto a carta %s tem %.2f hab/km²!\n", cidade1, densPop1, cidade2, densPop2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (densPop1 == densPop2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 6:
            if (pibPop1 > pibPop2) {
                printf("\nA carta %s tem %.2f reais de pib per capita, enquanto a carta %s tem %.2f reais de pib per capita!\n", cidade1, pibPop1, cidade2, pibPop2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (pibPop2 > pibPop1) {
                printf("\nA carta %s tem %.2f reais de pib per capita, enquanto a carta %s tem %.2f reais de pib per capita!\n", cidade1, pibPop1, cidade2, pibPop2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (pibPop1 == pibPop2) {
                printf("\nHouve um empate!\n");
            }
            break;

        case 7:
            if (superPoder1 > superPoder2) {
                printf("\n A carta %s tem %.2f de super poder, enquanto a carta %s tem %.2f de super poder!\n", cidade1, superPoder1, cidade2, superPoder2);
                printf("Carta 1 %s venceu!\n", cidade1);
            } else if (superPoder2 > superPoder1) {
                printf("\n A carta %s tem %.2f de super poder, enquanto a carta %s tem %.2f de super poder!\n", cidade1, superPoder1, cidade2, superPoder2);
                printf("Carta 2 %s venceu!\n", cidade2);
            } else if (superPoder1 == superPoder2) {
                printf("\nHouve um empate!\n");
            }
            break;
    
        default:
            printf("\nEscolha inválida, por favor, tente novamente!\n");


    }

    //Atribui algumas variáveis para poder seguir com a soma e atribuição do resultado final.

    float carta1Atributo1, carta1Atributo2;
    float carta2Atributo1, carta2Atributo2;
    char* atributo1; //Aqui eu acabei tendo uma dúvida e a única solução que eu encontrei com o *, não queria entrar array dessa forma [].
    char* atributo2;

    switch (escolhaAtributo1){
        case 1: carta1Atributo1 = populacao1, carta2Atributo1 = populacao2; break;
        case 2: carta1Atributo1 = area1, carta2Atributo1 = area2; break;
        case 3: carta1Atributo1 = pib1, carta2Atributo1 = pib2; break;
        case 4: carta1Atributo1 = pontosTuristicos1, carta2Atributo1 = pontosTuristicos2; break;
        case 5: carta1Atributo1 = 1 / densPop1, carta2Atributo1 = 1 / densPop2; break;
        case 6: carta1Atributo1 = pibPop1, carta2Atributo1 = pibPop2; break;
        case 7: carta1Atributo1 = superPoder1, carta2Atributo1 = superPoder2; break;
        default: printf("\nAtributo inválido!\n"); 

    }

    switch (escolhaAtributo2){
        case 1: carta1Atributo2 = populacao1, carta2Atributo2 = populacao2; break;
        case 2: carta1Atributo2 = area1, carta2Atributo2 = area2; break;
        case 3: carta1Atributo2 = pib1, carta2Atributo2 = pib2; break;
        case 4: carta1Atributo2 = pontosTuristicos1, carta2Atributo2 = pontosTuristicos2; break;
        case 5: carta1Atributo2 = 1 / densPop1, carta2Atributo2 = 1 / densPop2; break;
        case 6: carta1Atributo2 = pibPop1, carta2Atributo2 = pibPop2; break;
        case 7: carta1Atributo2 = superPoder1, carta2Atributo2 = superPoder2; break;
        default: printf("\nAtributo inválido!\n"); 

    }

    switch (escolhaAtributo1){
        case 1: atributo1 = "População"; break;
        case 2: atributo1 = "Área"; break;
        case 3: atributo1 = "Pib"; break;
        case 4: atributo1 = "Pontos Turísticos"; break;
        case 5: atributo1 = "Densidade Populacional"; break;
        case 6: atributo1 = "Pib per Capita"; break;
        case 7: atributo1 = "Super Poder"; break;
        default: printf("\nSolução inválida!\n");

    }

    switch (escolhaAtributo2){
        case 1: atributo2 = "População"; break;
        case 2: atributo2 = "Área"; break;
        case 3: atributo2 = "Pib"; break;
        case 4: atributo2 = "Pontos Turísticos"; break;
        case 5: atributo2 = "Densidade Populacional"; break;
        case 6: atributo2 = "Pib per Capita"; break;
        case 7: atributo2 = "Super Poder"; break;
        default: printf("\nSolução inválida!\n");

    }

    //Aqui eu fiz a soma atribuindo a variável float.

    float somaCarta1 = carta1Atributo1 + carta1Atributo2;
    float somaCarta2 = carta2Atributo1 + carta2Atributo2;
    
    //Com if eu fiz o resultado final das comparações em relação a soma. 

    if (somaCarta1 > somaCarta2) {
        printf("\nA carta 1 - '%s' conta com o atributo '%s' de força %.2f e o atributo '%s' de força %.2f.\n", cidade1, atributo1, carta1Atributo1, atributo2, carta1Atributo2);
        printf("A soma dos dois atributos da primeira carta foi de %.2f.\n", somaCarta1);
        printf("\nA carta 2 - '%s' conta com o atributo '%s' de força %.2f e o atributo '%s' de força %.2f.\n", cidade2, atributo1, carta2Atributo1, atributo2, carta2Atributo2);  
        printf("A soma dos dois atributos da segunda carta foi de %.2f.\n", somaCarta2);   
        printf("\nA carta 1 - '%s' venceu, pois a soma dos seus poderes foi maior!", cidade1);   
    } else if (somaCarta1 < somaCarta2) {
        printf("\nA carta 1 - '%s' conta com o atributo '%s' de força %.2f e o atributo '%s' de força %.2f.\n", cidade1, atributo1, carta1Atributo1, atributo2, carta1Atributo2);
        printf("A soma dos dois atributos da primeira carta foi de %.2f.\n", somaCarta1);
        printf("\nA carta 2 - '%s' conta com o atributo '%s' de força %.2f e o atributo '%s' de força %.2f.\n", cidade2, atributo1, carta2Atributo1, atributo2, carta2Atributo2);  
        printf("A soma dos dois atributos da segunda carta foi de %.2f.\n", somaCarta2);   
        printf("\nA carta 2 - '%s' venceu, pois a soma dos seus poderes foi maior!", cidade2); 
    } else {
        printf("\nA carta 1 - '%s' conta com o atributo '%s' de força %.2f e o atributo '%s' de força %.2f.\n", cidade1, atributo1, carta1Atributo1, atributo2, carta1Atributo2);
        printf("A soma dos dois atributos da primeira carta foi de %.2f.\n", somaCarta1);
        printf("\nA carta 2 - '%s' conta com o atributo '%s' de força %.2f e o atributo '%s' de força %.2f.\n", cidade2, atributo1, carta2Atributo1, atributo2, carta2Atributo2);  
        printf("A soma dos dois atributos da segunda carta foi de %.2f.\n", somaCarta2);
        printf("\nHouve um empate, a soma dos poderes das cartas são iguais.\n");
    }

    /*Considerações finais, achei que o código ficou muito grande, mas não consegui pensar em nada para diminui-lo, 
    não implementei os operadores ternários, o que também me incomodou. Porém o código está funcional normal e achei o resultado satisfatório.*/

    return 0;
}