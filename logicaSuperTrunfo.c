#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // atributos carta 1
    char estado1, codigocarta1[50], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosturistico1;
    float area1, pib1, densidadepop1, pibpercapita1, superpoder1;

    // atributos carta 2
    char estado2, codigocarta2[50], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosturistico2;
    float area2, pib2, densidadepop2, pibpercapita2, superpoder2;

    // Cadastro carta 1
    printf("Digite o estado da primeira carta: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta: \n");
    scanf("%s", codigocarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);
    printf("Digite a população: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturistico1);

    // Cadastro carta 2
    printf("Digite o estado da segunda carta: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta: \n");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturistico2);

    // cálculos 
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

        // exibição das cartas
    printf("\nCarta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n",
        estado1, codigocarta1, nomeCidade1, populacao1, area1, pib1, pontosturistico1, densidadepop1, pibpercapita1);

    printf("\nCarta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n",
        estado2, codigocarta2, nomeCidade2, populacao2, area2, pib2, pontosturistico2, densidadepop2, pibpercapita2);

    // Comparação de Cartas:
    if(populacao1 > populacao2){
        printf("Carta 1 (%s) Venceu!!\n", nomeCidade1);
    } else {
        printf("Carta 2 (%s) Venceu!!\n", nomeCidade2);
    }

    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: População\n");
    printf("Carta 1 (%s): %lu habitantes\n", nomeCidade1, populacao1);
    printf("Carta 2 (%s): %lu habitantes\n", nomeCidade2, populacao2);

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
