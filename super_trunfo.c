#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para cadastrar uma carta
Carta cadastrarCarta() {
    Carta c;

    printf("Digite o Estado: ");
    scanf(" %[^\n]", c.estado);

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", c.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", c.cidade);

    printf("Digite a população: ");
    scanf("%d", &c.populacao);

    printf("Digite a área:\n (em km²): ");
    scanf("%f", &c.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &c.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c.pontosTuristicos);

    // cálculos extras
    c.densidadePopulacional = c.populacao / c.area;
    c.pibPerCapita = c.pib / c.populacao;

    return c;
}

// Função para comparar dois valores e retornar índice do vencedor
int compararCartas(Carta c1, Carta c2, char atributo[]) {
    float valor1, valor2;

    if (strcmp(atributo, "populacao") == 0) {
        valor1 = c1.populacao;
        valor2 = c2.populacao;
        return (valor1 > valor2) ? 1 : 2;
    }
    else if (strcmp(atributo, "area") == 0) {
        valor1 = c1.area;
        valor2 = c2.area;
        return (valor1 > valor2) ? 1 : 2;
    }
    else if (strcmp(atributo, "pib") == 0) {
        valor1 = c1.pib;
        valor2 = c2.pib;
        return (valor1 > valor2) ? 1 : 2;
    }
    else if (strcmp(atributo, "densidade") == 0) {
        valor1 = c1.densidadePopulacional;
        valor2 = c2.densidadePopulacional;
        return (valor1 < valor2) ? 1 : 2; // menor vence
    }
    else if (strcmp(atributo, "pibpercapita") == 0) {
        valor1 = c1.pibPerCapita;
        valor2 = c2.pibPerCapita;
        return (valor1 > valor2) ? 1 : 2;
    }
    return 0;
}

int main() {
    printf("=== Cadastro da Carta 1 ===\n");
    Carta carta1 = cadastrarCarta();

    printf("\n=== Cadastro da Carta 2 ===\n");
    Carta carta2 = cadastrarCarta();

    // atributo escolhido diretamente no código
    char atributo[] = "pibpercapita";  
    int vencedor = compararCartas(carta1, carta2, atributo);

    printf("\n=== Resultado da Comparação ===\n");
    if (strcmp(atributo, "pibpercapita") == 0) {
        printf("Atributo utilizado: PIB per capita\n");
        printf("Carta 1 (%s): %.2f\n", carta1.cidade, carta1.pibPerCapita);
        printf("Carta 2 (%s): %.2f\n", carta2.cidade, carta2.pibPerCapita);
    }

    if (vencedor == 1) {
        printf("\n>>> A carta vencedora foi: %s (%s)\n", carta1.cidade, carta1.codigo);
    } else if (vencedor == 2) {
        printf("\n>>> A carta vencedora foi: %s (%s)\n", carta2.cidade, carta2.codigo);
    } else {
        printf("\nNão foi possível determinar o vencedor.\n");
    }

    return 0;
}
