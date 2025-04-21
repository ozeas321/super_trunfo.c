#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib; // em bilhões de reais
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Leitura da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo dos atributos derivados
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0f) / carta1.populacao;
    carta1.superPoder = 
        (float)carta1.populacao +
        carta1.area +
        (carta1.pib * 1000000000.0f) +
        (float)carta1.pontosTuristicos +
        carta1.pibPerCapita +
        (1.0f / carta1.densidadePopulacional);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0f) / carta2.populacao;
    carta2.superPoder = 
        (float)carta2.populacao +
        carta2.area +
        (carta2.pib * 1000000000.0f) +
        (float)carta2.pontosTuristicos +
        carta2.pibPerCapita +
        (1.0f / carta2.densidadePopulacional);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidadePopulacional < carta2.densidadePopulacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    return 0;
}