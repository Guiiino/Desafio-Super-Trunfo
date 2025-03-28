#include <stdio.h>

int main() {

    //Guilherme Shigeru Iino
    //Prof: Sergio
    //Curso ADS

    //Variáveis nivel novato

    char estado1, estado2;
    char codcarta1[20], codcarta2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int p1, p2;

    //Variáveis nivel aventureiro

    float dp1, dp2;
    float ppc1, ppc2;

    printf("Olá, Bem vindo ao nosso desafio Super Trunfo! \n"); //Apresentação do jogo


    printf("\nSegue algumas regras para cadastrar as cartas do desafio super trunfo:\n");

    printf("\nO Estado deve conter apenas uma letra de A ao H. \n");

    printf("\nO código da carta é a letra do seu estado seguido de um número de 01 a 04, EX: B02 \n");

    printf("\nPara inserir o nome da cidade, insira somente o primeiro nome. \n");

    printf("\nPara inserir a população e o PIB, insira somente os números. \n");

    //Início do programa

    printf("\nAgora que você já sabe as regras de como prosseguir com o desafio, vamos começar a cadastrar as cartas do desafio super trunfo\n");
    
    printf("Informe o seu estado:\n");
    scanf(" %c", &estado1);  

    printf("\nInforme o código da sua carta:\n");
    scanf("%s", codcarta1);  

    printf("\nInforme apenas o primeiro nome da cidade:\n"); 
    scanf("%s", cidade1);  

    printf("\nInforme a população da cidade:\n"); 
    scanf("%d", &populacao1);

    printf("\nInforme a area em KM² da cidade:\n"); 
    scanf("%f", &area1);

    printf("\nInforme o PIB:\n"); 
    scanf("%f", &pib1);

    printf("\nInforme a quantidade de pontos turisticos:\n");
    scanf("%d", &p1);

    //Agora vamos para a segunda carta
    printf("\n Agora vamos cadastrar a segunda carta do desafio:\n");

    printf("Informe o seu estado:\n");
    scanf(" %c", &estado2);  

    printf("\nInforme o código da sua carta:\n");
    scanf("%s", codcarta2);  

    printf("\nInforme o nome da cidade:\n");
    scanf("%s", cidade2);  

    printf("\nInforme a população da cidade:\n"); 
    scanf("%d", &populacao2);

    printf("\nInforme a area da cidade:\n"); 
    scanf("%f", &area2);

    printf("\nInforme o PIB:\n"); 
    scanf("%f", &pib2);

    printf("\nInforme a quantidade de pontos turisticos:\n");
    scanf("%d", &p2);


    // Exibindo os dados cadastrados da carta 1
    printf("\nDados cadastrados:\n");
    printf("CARTA 1 - \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codcarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População da cidade: %d habitantes\n", populacao1);
    printf("Àrea da cidade: %.3f km²\n", area1);
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", p1);

    dp1 = populacao1 / area1; //Aqui temos a parte do nivel aventureiro da primeira carta
    ppc1 = pib1 / populacao1;
    printf("A densidade populacional: %.2f hab/km²\n", dp1);
    printf("PIB Per Capita: %.2f reais\n", ppc1);


    // Exibindo os dados cadastrados da carta 2
    printf("\nDados cadastrados:\n");
    printf("CARTA 2 - \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", p2);

    dp2 = populacao2 / area2; //Aqui temos a parte do nivel aventureiro da segunda carta
    ppc2 = pib2 / populacao2;
    printf("Densidade populacional: %.2f hab/km²\n", dp2);
    printf("PIB Per Capita: %.2f reais\n", ppc2);

    //Vamos agora com o o tema 2 que é a comparação de um atributo das cartas
    
    printf("\nAgora segue a carta vencedora levando em consideração o atributo (pontos turísticos): \n");

    if (p1 > p2 ) {
        printf("A carta vencedora é a Carta 1!");
    } else {
        printf("A carta vencedora é a Carta 2");
    }
    



    return 0;
}

