#include <stdio.h>  // Biblioteca para funções de entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

void separador()
{
    printf("\n--------------------------------------------\n");
}
int main()
{

    // Declaração das variáveis para a Carta 1
    char pais1[25], pais2[25], estado1, estado2, nomeCidade1[50], nomeCidade2[50], codigoCidade1[3], codigoCidade2[3]; // Armazena valores tipo char e string
    unsigned int populacao1, populacao2;                                                                               // Armazena a população da cidade
    int pontoTuristicos1, superPoder1, pontoTuristicos2, superPoder2;                                                  // Armazena o número de pontos turísticos e super poder
    float area1, pib1, densidade1, pibCapta1, densidadeInvertida1,
        area2, pib2, densidade2, pibCapta2, densidadeInvertida2; // Armazena valores do tipo float das cartas

    printf("Bem-vindo ao jogo Super Trunfo Países\n");

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do país: ");
    getchar();
    fgets(pais1, 25, stdin);
    pais1[strspn(pais1, "\n")] = 0;
    printf("Escolha uma letra entre A e H: ");
    scanf("%c", &estado1);
    printf("Escolha um número entre 01 e 04: ");
    scanf("%s", codigoCidade1);
    printf("Nome da Cidade: ");
    getchar();                                   // Limpa o buffer do teclado (remove o \n deixado pelo scanf anterior)
    fgets(nomeCidade1, 50, stdin);               // Lê o nome da cidade com espaços
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o \n do final da string
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB em milhões: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%f", &pontoTuristicos1);

    separador();

    // Entrada de dados para a Carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Nome do país: ");
    getchar();
    fgets(pais2, 25, stdin);
    pais2[strspn(pais2, "\n")] = 0;
    printf("Escolha uma letra entre A e H: ");
    scanf(" %c", &estado2); // Espaço antes do %c para ignorar o \n anterior
    printf("Escolha um número entre 01 e 04: ");
    scanf("%s", codigoCidade2);
    printf("Nome da Cidade: ");
    getchar();                                   // Limpa o buffer do teclado
    fgets(nomeCidade2, 50, stdin);               // Lê o nome da cidade com espaços
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o \n do final da string
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB em milhões: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%f", &pontoTuristicos2);
    separador();

    // Exibição dos dados da Carta 1
    densidade1 = (float)populacao1 / area1; // Cálculo da densidade populacional
    densidadeInvertida1 = 1 / densidade1;
    pibCapta1 = (float)pib1 / populacao1; // Cálculo do PIB per capita
    superPoder1 = populacao1 + area1 + pib1 + pontoTuristicos1 + pibCapta1 + densidadeInvertida1;

    printf("Carta 1: ");
    printf("\nPaís: %s", pais1);
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %c%s", estado1, codigoCidade1); // Concatena a letra do estado com o código
    printf("\nNome da Cidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1); // Exibe área com 2 casas decimais
    printf("\nPIB: %.2f milhões de reais", pib1);
    printf("\nPontos Turísticos: %d", pontoTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: %.2f reais", pibCapta1);
    printf("\nSuper Poder: %2.f", superPoder1);

    separador();

    // Exibição dos dados da Carta 2 (similar à Carta 1)
    densidade2 = (float)populacao2 / area2; // Cálculo da densidade populacional
    densidadeInvertida2 = 1 / densidade2;
    pibCapta2 = (float)pib2 / populacao2; // Cálculo do PIB per capita
    superPoder2 = populacao2 + area2 + pib2 + pontoTuristicos2 + pibCapta2 + densidadeInvertida2;

    printf("Carta 2: ");
    printf("\nPaís: %s", pais2);
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %c%s", estado2, codigoCidade2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f milhões de reais", pib2);
    printf("\nPontos Turísticos: %d", pontoTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: %.2f reais", pibCapta2);
    printf("\nSuper Poder: %2.f", superPoder2);

    separador();

    // Comparação entre as cartas
    int atributo1, atributo2, opcao; // Variável para o menu switch
    int carta1Vence;
    printf("A Comparação será feita entre dois atributos\n");
    printf("Escolha o primeiro atributo para comparação: \n"
           "1 - População\n"
           "2 - Área\n"
           "3 - PIB\n"
           "4 - Número de pontos turísticos\n"
           "5 - Densidade demográfica\n");
    scanf("%d", &atributo1);
    printf("Agora escolha um atributo diferente: \n");
    scanf("%d", &atributo2);
    if (atributo1 == atributo2)
    {
        printf("Os atributos não podem ser iguais\n");
        printf("Selecione novamente o segundo atributo: \n");
        scanf("%d", &atributo2);
    }

    opcao = atributo1 * 10 + atributo2; // Multiplica o valor do primeiro atributo por 10 e soma com o segundo para a simplificação do código poupando o uso de vários switches

    printf("As cartas são %s - %s %c%s e %s - %s %c%s\n", pais1, nomeCidade1, estado1, codigoCidade1, pais2, nomeCidade2, estado2, codigoCidade2);
    switch (opcao)
    {
    case 12:
    case 21:
        printf("Atributo: População\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, populacao1, nomeCidade2, estado2, codigoCidade2, populacao2);
        printf("Atributo: Área\n");
        printf("Carta %s - %c%s: %.2fm² -- Carta %s - %c%s: %.2fm²", nomeCidade1, estado1, codigoCidade1, area1, nomeCidade2, estado2, codigoCidade2, area2);
        if (populacao1 + area1 == populacao2 + area2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = populacao1 + area1 > populacao2 + area2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;
    case 13:
    case 31:
        printf("Atributo: População\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, populacao1, nomeCidade2, estado2, codigoCidade2, populacao2);
        printf("Atributo: PIB\n");
        printf("Carta %s - %c%s: %.2f milhões de reais -- Carta %s - %c%s: %.2f milhões de reais", nomeCidade1, estado1, codigoCidade1, pib1, nomeCidade2, estado2, codigoCidade2, pib2);
        if (populacao1 + pib1 == populacao2 + pib2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = populacao1 + pib1 > populacao2 + pib2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }

        break;
    case 14:
    case 41:
        printf("Atributo: População\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, populacao1, nomeCidade2, estado2, codigoCidade2, populacao2);
        printf("Atributo: Pontos turísticos\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, pontoTuristicos1, nomeCidade2, estado2, codigoCidade2, pontoTuristicos2);
        if (populacao1 + pontoTuristicos1 == populacao2 + pontoTuristicos2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = populacao1 + pontoTuristicos1 > populacao2 + pontoTuristicos2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;
    case 15:
    case 51:
        printf("Atributo: População\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, populacao1, nomeCidade2, estado2, codigoCidade2, populacao2);
        printf("Atributo: Densidade demográfica\n");
        printf("Carta %s - %c%s: %.2f hab/km² -- Carta %s - %c%s: %.2f hab/km²", nomeCidade1, estado1, codigoCidade1, densidade1, nomeCidade2, estado2, codigoCidade2, densidade2);
        if (populacao1 - densidade1 == populacao2 - densidade2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = populacao1 - densidade1 > populacao2 - densidade2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;
    case 23:
    case 32:
        printf("Atributo: Área\n");
        printf("Carta %s - %c%s: %.2fm² -- Carta %s - %c%s: %.2fm²", nomeCidade1, estado1, codigoCidade1, area1, nomeCidade2, estado2, codigoCidade2, area2);
        printf("Atributo: PIB\n");
        printf("Carta %s - %c%s: %.2f milhões de reais -- Carta %s - %c%s: %.2f milhões de reais", nomeCidade1, estado1, codigoCidade1, pib1, nomeCidade2, estado2, codigoCidade2, pib2);
        if (area1 + pib1 == area2 + pib2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = area1 + pib1 > area2 + pib2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;
    case 24:
    case 42:
        printf("Atributo: Área\n");
        printf("Carta %s - %c%s: %.2fm² -- Carta %s - %c%s: %.2fm²", nomeCidade1, estado1, codigoCidade1, area1, nomeCidade2, estado2, codigoCidade2, area2);
        printf("Atributo: Pontos turísticos\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, pontoTuristicos1, nomeCidade2, estado2, codigoCidade2, pontoTuristicos2);
        if (area1 + pontoTuristicos1 == area2 + pontoTuristicos2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = area1 + pontoTuristicos1 > area2 + pontoTuristicos2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;

    case 25:
    case 52:
        printf("Atributo: Área\n");
        printf("Carta %s - %c%s: %.2fm² -- Carta %s - %c%s: %.2fm²", nomeCidade1, estado1, codigoCidade1, area1, nomeCidade2, estado2, codigoCidade2, area2);
        printf("Atributo: Densidade demográfica\n");
        printf("Carta %s - %c%s: %.2f hab/km² -- Carta %s - %c%s: %.2f hab/km²", nomeCidade1, estado1, codigoCidade1, densidade1, nomeCidade2, estado2, codigoCidade2, densidade2);
        if (area1 - densidade1 == area2 - densidade2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = area1 - densidade1 > area2 - densidade2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;

    case 34:
    case 43:
        printf("Atributo: PIB\n");
        printf("Carta %s - %c%s: %.2f milhões de reais -- Carta %s - %c%s: %.2f milhões de reais", nomeCidade1, estado1, codigoCidade1, pib1, nomeCidade2, estado2, codigoCidade2, pib2);
        printf("Atributo: Pontos turísticos\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, pontoTuristicos1, nomeCidade2, estado2, codigoCidade2, pontoTuristicos2);
        if (pib1 + pontoTuristicos1 == pib2 + pontoTuristicos2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = pib1 + pontoTuristicos1 > pib2 + pontoTuristicos2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;

    case 35:
    case 53:
        printf("Atributo: PIB\n");
        printf("Carta %s - %c%s: %.2f milhões de reais -- Carta %s - %c%s: %.2f milhões de reais", nomeCidade1, estado1, codigoCidade1, pib1, nomeCidade2, estado2, codigoCidade2, pib2);
        printf("Atributo: Densidade demográfica\n");
        printf("Carta %s - %c%s: %.2f hab/km² -- Carta %s - %c%s: %.2f hab/km²", nomeCidade1, estado1, codigoCidade1, densidade1, nomeCidade2, estado2, codigoCidade2, densidade2);
        if (pib1 - densidade1 == pib2 - densidade2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = pib1 - densidade1 > pib2 - densidade2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
        break;

    case 45:
    case 54:
        printf("Atributo: Pontos turísticos\n");
        printf("Carta %s - %c%s: %d -- Carta %s - %c%s: %d", nomeCidade1, estado1, codigoCidade1, pontoTuristicos1, nomeCidade2, estado2, codigoCidade2, pontoTuristicos2);
        printf("Atributo: Densidade demográfica\n");
        printf("Carta %s - %c%s: %.2f hab/km² -- Carta %s - %c%s: %.2f hab/km²", nomeCidade1, estado1, codigoCidade1, densidade1, nomeCidade2, estado2, codigoCidade2, densidade2);
        if (pontoTuristicos1 - densidade1 == pontoTuristicos2 - densidade2)
        {
            printf("Empate!");
        }
        else
        {
            carta1Vence = pontoTuristicos1 - densidade1 > pontoTuristicos2 - densidade2 ? printf("Carta %s - %c%s: %d venceu!", nomeCidade1, estado1, codigoCidade1) : printf("Carta %s - %c%s: %d venceu!", nomeCidade2, estado2, codigoCidade2);
        }
    default:
        printf("Opção de atributos inválidas");
        break;
    }
}
