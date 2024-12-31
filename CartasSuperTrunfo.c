#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração de variáveis
    char codigo[10];         // Código da cidade, exemplo: "A01"
    char nome[50];          // Nome da cidade
    double populacao;       // População da cidade
    double area;            // Área da cidade em km²
    double pib;             // PIB da cidade em milhões
    int pontosTuristicos;   // Número de pontos turísticos

    // Cadastro das Cartas:
    printf("Digite o código da cidade (ex: A01): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome); 

    printf("Digite a população da cidade: \n");
    scanf("%lf", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade em milhões: \n");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    printf("\n----- Dados da Cidade Cadastrada -----\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %.0lf habitantes\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: %.2lf milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}

