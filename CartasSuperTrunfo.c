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

    // Carta 1
    int codigo1;
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    int codigo2;
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Coleta de dados para Carta 1
    printf("Digite o código da primeira cidade: \n");
    scanf("%d", &codigo1);
    
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", &nome1);
    
    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área da primeira cidade (em km²): \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);
   
    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos1);

        // Coleta de dados para Carta 2
    printf("Digite o código da segunda cidade: \n");
    scanf("%d", &codigo2);
    
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &nome2);
    
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da segunda cidade (em km²): \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);
   
    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos2);
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Valores Cidade 1

     printf("O código da primeira cidade é: %d\n", codigo1);

     printf("O nome da primeira cidade é: %s\n", nome1);

     printf("A população da primeira cidade é de: %d habitantes.\n", populacao1);

     printf("A área da primeira cidade é de: %f km².\n", area1);

     printf("O PIB da primeira cidade é: %f bilhões de reais.\n", pib1);

     printf("A primeira cidade tem: %d pontos turísticos.\n", pontos1);

     printf("\n");


     // Valores Cidade 2

     printf("O código da segunda cidade é: %d\n", codigo2);

     printf("O nome da segunda cidade é: %s\n", nome2);

     printf("A população da segunda cidade é de: %d habitantes \n", populacao2);

     printf("A área da segunda cidade é de: %f km² \n", area2);

     printf("O PIB da segunda cidade é: %f bilhões de reais.\n", pib2);

     printf("A segunda cidade tem: %d pontos turísticos.\n", pontos2);



    return 0;
}

