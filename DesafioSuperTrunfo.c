#include <stdio.h>

// Definição da estrutura Cidade
struct Cidade {
    char nome[50];          // Nome da cidade
    int populacao;          // Número de habitantes
    float area;             // Área em km²
    float pib;              // PIB
    int pontosTuristicos;   // Número de pontos turísticos
};

int main() {
    struct Cidade cidade;

    // Entrada de dados
    printf("Digite o nome da cidade 1: ");
    fgets(cidade.nome, sizeof(cidade.nome), stdin);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &cidade.populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &cidade.area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &cidade.pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &cidade.pontosTuristicos);

    // Saída de dados
    printf("\n===== Dados da Cidade 1 =====\n");
    printf("Nome: %s", cidade.nome);
    printf("Populacao: %d habitantes\n", cidade.populacao);
    printf("Area: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Pontos Turisticos: %d\n", cidade.pontosTuristicos);


        // Entrada de dados
    printf("Digite o nome da cidade 2: ");
    fgets(cidade.nome, sizeof(cidade.nome), stdin);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &cidade.populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &cidade.area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &cidade.pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &cidade.pontosTuristicos);

    // Saída de dados
    printf("\n===== Dados da Cidade 2 =====\n");
    printf("Nome: %s", cidade.nome);
    printf("Populacao: %d habitantes\n", cidade.populacao);
    printf("Area: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Pontos Turisticos: %d\n", cidade.pontosTuristicos);

    return 0;
}