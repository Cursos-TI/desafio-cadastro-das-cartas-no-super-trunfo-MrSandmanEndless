#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

struct Carta {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da Carta 2
    printf("Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &carta2.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Output
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
