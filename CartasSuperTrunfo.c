#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 5 // Número máximo de cartas a serem cadastradas
#define MAX_NOME 50 // Tamanho máximo para o nome da cidade

// Estrutura para representar uma carta
typedef struct {
    int codigo;
    char nome[MAX_NOME];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta cartas[MAX_CARTAS];
    int i;

    printf("Cadastro de Cartas - Super Trunfo\n\n");

    // Cadastro das Cartas
    for (i = 0; i < MAX_CARTAS; i++) {
        printf("Cadastro da carta %d\n", i + 1);
        printf("Código da cidade: ");
        scanf("%d", &cartas[i].codigo);
        getchar(); // Limpar o buffer do teclado
        printf("Nome da cidade: ");
        fgets(cartas[i].nome, MAX_NOME, stdin);
        cartas[i].nome[strcspn(cartas[i].nome, "\n")] = '\0'; // Remover o '\n' do final
        printf("População: ");
        scanf("%d", &cartas[i].populacao);
        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);
        printf("PIB (em milhões): ");
        scanf("%f", &cartas[i].pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
        printf("\n");
    }

    // Exibição dos Dados das Cartas
    printf("\nCartas Cadastradas:\n");
    for (i = 0; i < MAX_CARTAS; i++) {
        printf("Carta %d\n", i + 1);
        printf("Código da cidade: %d\n", cartas[i].codigo);
        printf("Nome da cidade: %s\n", cartas[i].nome);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f milhões\n", cartas[i].pib);
        printf("Número de pontos turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("\n");
    }

    return 0;
}
