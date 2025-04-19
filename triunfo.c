#include <stdio.h>

// Definição de uma estrutura para representar uma carta do Super Trunfo
struct Carta {
    char estado;                    // Letra do estado (A a H)
    char codigo[4];                 // Código da carta (ex: A01)
    char nomeCidade[50];           // Nome da cidade
    int populacao;                 // População da cidade
    float area;                    // Área em km²
    float pib;                     // PIB em bilhões
    int pontosTuristicos;         // Número de pontos turísticos
};

int main() {
    // Declaração de duas variáveis do tipo Carta
    struct Carta carta1;
    struct Carta carta2;

    // Instruções para o usuário e entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta1.estado); // espaço antes de %c para ignorar qualquer caractere anterior

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // lê até nova linha (nome com espaços)

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Entrada de dados da segunda carta
    printf("Cadastro da Carta 2:\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n");

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

