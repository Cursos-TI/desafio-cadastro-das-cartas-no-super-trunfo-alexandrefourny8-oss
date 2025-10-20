#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[3];             // Ex: "SP"
    char codigo[4];             // Ex: "A01"
    char nomeCidade[50];        // Ex: "São Paulo"
    int populacao;              // Número de habitantes
    float area;                 // Em km²
    float pib;                  // Em bilhões de reais
    int pontosTuristicos;       // Número de pontos turísticos
    float densidadePopulacional; // População / Área
    float pibPerCapita;          // PIB / População
};

int main() {
    struct Carta carta1, carta2;

    // ===== Entrada de dados - Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (ex: SP): ");
    scanf("%2s", carta1.estado);

    printf("Código da carta (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);  // Lê nome com espaços

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Calcula atributos derivados
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao; // converte PIB p/ reais

    printf("\n");

    // ===== Entrada de dados - Carta 2 =====
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (ex: RJ): ");
    scanf("%2s", carta2.estado);

    printf("Código da carta (ex: B02): ");
    scanf("%3s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calcula atributos derivados
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    printf("\n");

    // ===== Exibição dos dados =====
    printf("=== Dados da Carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n\n", carta1.pibPerCapita);

    printf("=== Dados da Carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n\n", carta2.pibPerCapita);

    // ===== Comparação das cartas =====
    // Escolha do atributo para comparar (fixo no código)
    // Opções: populacao, area, pib, densidadePopulacional, pibPerCapita
    // Neste exemplo, vamos comparar o PIB per capita
    printf("=== Comparação de Cartas (Atributo: PIB per Capita) ===\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%s): %.2f reais\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

