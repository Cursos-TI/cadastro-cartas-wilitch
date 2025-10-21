#include <stdio.h>

/**
 * Criando as Cartas do Super Trunfo
 * 
 * Jogo Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades. Você vai praticar
 * a leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela. 
 * * 
*/
int main(){
    //Declaração de variáveis
    char estado_1, estado_2; //Uma letra de A a H, representando um dos oito estados
    char codigoCarta_1[4], codigoCarta_2[4]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nomeCidade_1[100], nomeCidade_2[100]; //Nome da cidade
    int numeroHabitantes_1, numeroHabitantes_2; //Número de habitantes da cidade
    float area_1, area_2; //A área da cidade em quilômetros quadrados
    float produtoInternoBruto_1, produtoInternoBruto_2; //O Produto Interno Bruto da cidade
    int numeroPontosTuristicos_1, numeroPontosTuristicos_2; //A quantidade de pontos turísticos na cidade

    printf("\n*********** Informe os dados da primeira carta ***********\n\n");

    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estado_1);
    printf("Digite o código da carta, composto pela letra do Estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoCarta_1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade_1);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &numeroHabitantes_1);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area_1);
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &produtoInternoBruto_1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos_1);

    printf("\n*********** Informe os dados da segunda carta ***********\n\n");

    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estado_2);
    printf("Digite o código da carta, composto pela letra do Estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoCarta_2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade_2);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &numeroHabitantes_2);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area_2);
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &produtoInternoBruto_2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos_2);

    printf("\n*********** Dados de cada carta informada ***********\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigoCarta_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %d\n", numeroHabitantes_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", produtoInternoBruto_1);
    printf("Número de Ponto Turísticos: %d\n", numeroPontosTuristicos_1);

    printf("\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", numeroHabitantes_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", produtoInternoBruto_2);
    printf("Número de Ponto Turísticos: %d\n", numeroPontosTuristicos_2);

    return 0;
}