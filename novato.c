#include <stdio.h>

#define MAX_NOME_CIDADE 100
#define MAX_CODIGO_CARTA 5

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;           // Estado da cidade (A a H)
    char codigo[5];        // Código da carta (ex: A01, B03)
    char nomeCidade[MAX_NOME_CIDADE]; // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões de reais
    int pontosTuristicos; // Número de pontos turísticos
} Carta;

void lerCarta(Carta *c) {
    // Lê os dados da carta do usuário
    printf("Digite o estado (A a H): ");
    scanf(" %c", &c->estado);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", c->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", c->nomeCidade);  // Lê a linha inteira, incluindo espaços
    
    printf("Digite a população da cidade: ");
    scanf("%d", &c->populacao);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &c->area);
    
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &c->pib);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &c->pontosTuristicos);
}

void exibirCarta(Carta c, int numero) {
    // Exibe os dados da carta de maneira organizada
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("\nDigite os dados da segunda carta:\n");
    lerCarta(&carta2);

    // Exibe as cartas inseridas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
