#include <stdio.h>  // Biblioteca para funções de entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

int main()
{
    // Declaração das variáveis para a Carta 1
    char estado1;          // Armazena a letra do estado (A-H)
    char nomeCidade1[50];  // Array para armazenar o nome da cidade (até 49 caracteres)
    char codigoCidade1[3]; // Array para armazenar o código da cidade (2 dígitos)
    int populacao1;        // Armazena a população da cidade
    int pontoTuristicos1;  // Armazena o número de pontos turísticos
    float area1, pib1;     // Armazena área e PIB da cidade

    // Declaração das variáveis para a Carta 2 (mesma estrutura da Carta 1)
    char estado2;          // Armazena a letra do estado (A-H)
    char nomeCidade2[50];  // Array para armazenar o nome da cidade (até 49 caracteres)
    char codigoCidade2[3]; // Array para armazenar o código da cidade (2 dígitos)
    int populacao2;        // Armazena a população da cidade
    int pontoTuristicos2;  // Armazena o número de pontos turísticos
    float area2, pib2;     // Armazena área e PIB da cidade

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Escolha uma letra entre A e H:");
    scanf("%c", &estado1);
    printf("Escolha um número entre 01 e 04:");
    scanf("%s", codigoCidade1);
    printf("Nome da Cidade: ");
    getchar();                                   // Limpa o buffer do teclado (remove o \n deixado pelo scanf anterior)
    fgets(nomeCidade1, 50, stdin);               // Lê o nome da cidade com espaços
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o \n do final da string
    printf("População:");
    scanf("%d", &populacao1);
    printf("Área:");
    scanf("%f", &area1);
    printf("PIB:");
    scanf("%f", &pib1);
    printf("Pontos Turísticos:");
    scanf("%f", &pontoTuristicos1);

    printf("\n----------------------------------------\n");

    // Entrada de dados para a Carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Escolha uma letra entre A e H:");
    scanf(" %c", &estado2); // Espaço antes do %c para ignorar o \n anterior
    printf("Escolha um número entre 01 e 04:");
    scanf("%s", codigoCidade2);
    printf("Nome da Cidade: ");
    getchar();                                   // Limpa o buffer do teclado
    fgets(nomeCidade2, 50, stdin);               // Lê o nome da cidade com espaços
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o \n do final da string
    printf("População:");
    scanf("%d", &populacao2);
    printf("Área:");
    scanf("%f", &area2);
    printf("PIB:");
    scanf("%f", &pib2);
    printf("Pontos Turísticos:");
    scanf("%f", &pontoTuristicos2);
    printf("\n----------------------------------------\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %c%s", estado1, codigoCidade1); // Concatena a letra do estado com o código
    printf("\nNome da Cidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1); // Exibe área com 2 casas decimais
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nPontos Turísticos: %d", pontoTuristicos1);

    printf("\n----------------------------------------\n");

    // Exibição dos dados da Carta 2 (similar à Carta 1)
    printf("Carta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %c%s", estado2, codigoCidade2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nPontos Turísticos: %d", pontoTuristicos2);
}
