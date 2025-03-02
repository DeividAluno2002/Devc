#include <stdio.h>

typedef struct {
    char nome[100];
    int codigo;
    char estado[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular a densidade populacional
float calcular_densidade(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per Capita
float calcular_pib_per_capita(unsigned long int populacao, float pib) {
    return pib / populacao;
}

// Função para calcular o Super Poder
float calcular_super_poder(Carta carta) {
    float densidade_invertida = 1.0 / carta.densidade_populacional;
    return carta.populacao + carta.area + carta.pib + carta.pontos_turisticos + carta.pib_per_capita + densidade_invertida;
}

// Função para comparar os atributos e determinar o vencedor
void comparar_atributos(Carta carta1, Carta carta2) {
    printf("Comparação de Cartas:\n");

    // Comparação da População
    printf("População: Carta %d venceu (%d)\n", carta1.populacao > carta2.populacao ? 1 : 2, carta1.populacao > carta2.populacao ? 1 : 0);
    
    // Comparação da Área
    printf("Área: Carta %d venceu (%d)\n", carta1.area > carta2.area ? 1 : 2, carta1.area > carta2.area ? 1 : 0);
    
    // Comparação do PIB
    printf("PIB: Carta %d venceu (%d)\n", carta1.pib > carta2.pib ? 1 : 2, carta1.pib > carta2.pib ? 1 : 0);
    
    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 2, carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0);
    
    // Comparação da Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", carta1.densidade_populacional < carta2.densidade_populacional ? 1 : 2, carta1.densidade_populacional < carta2.densidade_populacional ? 1 : 0);
    
    // Comparação do PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 2, carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 0);
    
    // Comparação do Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", carta1.super_poder > carta2.super_poder ? 1 : 2, carta1.super_poder > carta2.super_poder ? 1 : 0);
}

int main() {
    Carta carta1, carta2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Nome: ");
    scanf("%s", carta1.nome);
    printf("Código: ");
    scanf("%d", &carta1.codigo);
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    // Calcular Densidade Populacional e PIB per Capita
    carta1.densidade_populacional = calcular_densidade(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1.populacao, carta1.pib);
    
    // Calcular Super Poder
    carta1.super_poder = calcular_super_poder(carta1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome: ");
    scanf("%s", carta2.nome);
    printf("Código: ");
    scanf("%d", &carta2.codigo);
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    
    // Calcular Densidade Populacional e PIB per Capita
    carta2.densidade_populacional = calcular_densidade(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2.populacao, carta2.pib);
    
    // Calcular Super Poder
    carta2.super_poder = calcular_super_poder(carta2);

    // Comparar as cartas
    comparar_atributos(carta1, carta2);

    return 0;
}
