#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Cartas SuperTrunfo Países!\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área (em km²): \n");
    scanf("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
   
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos);
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("O código da cidade é: %d\n", codigo);

     printf("O nome da cidade é: %s\n", nome);

     printf("A população da cidade é de: %d\n", populacao);

     printf("A área da cidade é de: %f\n", area);

     printf("O PIB da cidade é: %f\n", pib);

     printf("A cidade tem: %d pontos turísticos.\n", pontos);



    return 0;
}

