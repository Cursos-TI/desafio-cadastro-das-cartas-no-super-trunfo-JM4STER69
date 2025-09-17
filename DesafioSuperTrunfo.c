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

    
typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

void calcular_atributos(Carta *c) {
    // Densidade populacional
    c->densidade = (float)c->populacao / c->area;

    // PIB per capita
    c->pib_per_capita = c->pib / c->populacao;

    // Super poder: soma de todos os atributos numéricos
    // Inclui inverso da densidade (quanto menor a densidade, maior o poder)
    c->super_poder = (float)c->populacao +
                     c->area +
                     c->pib +
                     c->pontos_turisticos +
                     c->pib_per_capita +
                     (1.0f / c->densidade);
}

void comparar_cartas(Carta c1, Carta c2) {
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", 
           (c1.populacao > c2.populacao) ? 1 : 2,
           (c1.populacao > c2.populacao));

    printf("Área: Carta %d venceu (%d)\n", 
           (c1.area > c2.area) ? 1 : 2,
           (c1.area > c2.area));

    printf("PIB: Carta %d venceu (%d)\n", 
           (c1.pib > c2.pib) ? 1 : 2,
           (c1.pib > c2.pib));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (c1.pontos_turisticos > c2.pontos_turisticos) ? 1 : 2,
           (c1.pontos_turisticos > c2.pontos_turisticos));

    // Densidade populacional -> vence quem tiver MENOR valor
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (c1.densidade < c2.densidade) ? 1 : 2,
           (c1.densidade < c2.densidade));

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (c1.pib_per_capita > c2.pib_per_capita) ? 1 : 2,
           (c1.pib_per_capita > c2.pib_per_capita));

    printf("Super Poder: Carta %d venceu (%d)\n", 
           (c1.super_poder > c2.super_poder) ? 1 : 2,
           (c1.super_poder > c2.super_poder));
}

    int main() {
        Carta c1, c2;

        printf("Digite os dados da Carta 1:\n");
        printf("Estado: ");
        scanf(" %[^\n]", c1.estado);
        printf("Código: ");
        scanf(" %[^\n]", c1.codigo);
        printf("Nome: ");
        scanf(" %[^\n]", c1.nome);
        printf("População: ");
        scanf("%lu", &c1.populacao);
        printf("Área: ");
        scanf("%f", &c1.area);
        printf("PIB: ");
        scanf("%f", &c1.pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &c1.pontos_turisticos);

        calcular_atributos(&c1);

        printf("\nDigite os dados da Carta 2:\n");
        printf("Estado: ");
        scanf(" %[^\n]", c2.estado);
        printf("Código: ");
        scanf(" %[^\n]", c2.codigo);
        printf("Nome: ");
        scanf(" %[^\n]", c2.nome);
        printf("População: ");
        scanf("%lu", &c2.populacao);
        printf("Área: ");
        scanf("%f", &c2.area);
        printf("PIB: ");
        scanf("%f", &c2.pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &c2.pontos_turisticos);

        calcular_atributos(&c2);

        comparar_cartas(c1, c2);

        return 0;
    }