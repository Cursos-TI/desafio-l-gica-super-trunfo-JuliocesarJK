#include <stdio.h>

int main() {
     /* 
     
    Definir o a variavel estado utilizando char
    Definir codigo da carta de acordo com o estado usando char
    Definir o nome da cidade usando char
    Definir número populacional utilizando unsigned long int
    Definir área utilizando float
    Definir PIB utilizando float
    Definir número de pontos turisticos utilizando int
    Definir o PIB per capita utilizando float
    Definir A densidade populacional utilizando float
    Definir O Super Poder utilizando float
    Definir A comparação utilizando int

    */
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomedacidade1[50], nomedacidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoturistico1, pontoturistico2;
    float pibpc1, pibpc2;
    float densidade1, densidade2;
    float sp1, sp2;
    int comparacao;


    //Criação e coleta de dados da Carta Número 1

    printf(">>>Carta Número 1<<<\n");

    printf("Digite uma única letra representante do estado de A a Z\n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta com letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", codigo1);

    printf("Digite um nome de cidade que tenha nesse estado\n");
    scanf("%s", nomedacidade1);

    printf("Digite o número populacional dessa cidade\n");
    scanf("%lu", &populacao1);

    printf("Digite a área dessa cidade\n");
    scanf("%f", &area1);

    printf("Digite o PIB dessa cidade\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos que essa cidade contém\n");
    scanf("%d", &pontoturistico1);

    //Cálculo de PIB per capita

    pibpc1 = PIB1 / populacao1;

    //Cálculo de desensidade populacional

    densidade1 = populacao1 / area1;

    //Cálculo do Super poder da carta 1

    sp1 = (float)populacao1 + area1 + PIB1 + pontoturistico1 + pibpc1 + (1 / densidade1);

    //Criação e coleta de dados da Carta Número 2

    printf(">>>Carta Número 2<<<\n");

    printf("Digite uma única letra representante do estado de A a Z\n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta com letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", codigo2);

    printf("Digite um nome de cidade que tenha nesse estado\n");
    scanf("%s", nomedacidade2);

    printf("Digite o número populacional dessa cidade\n");
    scanf("%lu", &populacao2);

    printf("Digite a área dessa cidade\n");
    scanf("%f", &area2);

    printf("Digite o PIB dessa cidade\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos que essa cidade contém\n");
    scanf("%d", &pontoturistico2);

    //Cálculo de PIB per capita

    pibpc2 = PIB2 / populacao2;

    //Cálculo de desensidade populacional

    densidade2 = populacao2 / area2;

    //Cálculo do Super poder da carta 2

    sp2 = (float)populacao2 + area2 + PIB2 + pontoturistico2 + pibpc2 + (1 / densidade2);

    //Resultado da coleta de dados da Carta Número 1

    printf(">>>Carta Número 1<<<\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %lu Habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontoturistico1);
    printf("O PIB per Capita é: %.2f\n", pibpc1);
    printf("A Densidade Populacional é: %.2f\n", densidade1);

    //Resultado da coleta de dados da Carta Número 2

    printf(">>>Carta Número 2<<<\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontoturistico2);
    printf("O PIB per Capita é: %.2f\n", pibpc2);
    printf("A Densidade Populacional é: %.2f\n", densidade2);

    //Comparações
    printf("Menu de comparação!\n");
    printf("1 para comparar a população da carta 1 com a carta 2!\n");
    printf("2 para comparar a área da carta 1 com a carta 2!\n");
    printf("3 para comparar o PIB da carta 1 com a carta 2!\n");
    printf("4 para comparar o número de pontos turisticos da carta 1 com a carta 2!\n");
    printf("5 para comparar o PIB per capita da carta 1 com a carta2!\n");
    printf("6 para comparar a densidade populacional da carta 1 com a carta 2!\n");
    printf("7 para comparar o super poder da carta 1 com a carta 2!\n");
    printf("Digite o número daquele que deseja comparar!!!\n");
    scanf("%d", &comparacao);

    switch (comparacao)
    {
    case 1:
    //população
    if (populacao1 > populacao2){
        printf("A carta um venceu com um valor papopulacional de: %lu!!", populacao1);
    }else if(populacao2 > populacao1){
        printf("A Carta dois venceu com um valor populacional de: %lu!!", populacao2);
    }else{
        printf("A população das duas cartas são iguais!!");
    }
    break;
    //Área
    case 2:
    if (area1 > area2){
        printf("A carta Um venceu com uma área de: %.2f km²!!", area1);
    }else if(area2 > area1){
        printf("A Carta Dois venceu com uma área de: %.2f km²!!", area2);
    }else{
        printf("A Área das duas cartas são iguais!!");
    }
    break;
    //PIB
    case 3:
    if (PIB1 > PIB2){
        printf("A carta um venceu com um PIB de: %.2f!!", PIB1);
    }else if(PIB2 > PIB1){
        printf("A Carta dois venceu com um PIB de: %.2f!!", PIB2);
    }else{
        printf("A PIB das duas cartas são iguais!!");
    }
    break;
    //Pontos turísticos.
    case 4:
        if (pontoturistico1 > pontoturistico2){
        printf("A carta um venceu com uma quantidade de pontos turísticos de: %d!!", pontoturistico1);
    }else if(pontoturistico2 > pontoturistico1){
        printf("A Carta dois venceu com uma quantidade de pontos turísticos de: %d!!", pontoturistico2);
    }else{
        printf("A quantidade de pontos turísticos das duas cartas são iguais!!");
    }
    break;
    //PIB per capita.
    case 5:
        if (pibpc1 > pibpc2){
        printf("A carta Um venceu com um PIB per capita de: %.2f!!", pibpc1);
    }else if(pibpc2 > pibpc1){
        printf("A Carta Dois venceu com um PIB per capita de: %.2f!!", pibpc2);
    }else{
        printf("O PIB per capita das duas cartas são iguais!!");
    }
    break;
    //Densidade populacional
    case 6:
         if (densidade1 < densidade2){
        printf("A carta Um venceu por ter uma densidade populacional menor de: %.2f!!", densidade1);
    }else if(densidade2 < densidade1){
        printf("A Carta Dois venceu por ter uma densidade populacional menor de: %.2f!!", densidade2);
    }else{
        printf("A desensidade populacional das duas cartas são iguais!!");
    }
    break;
    //Super Poder
    case 7:
        if (sp1 > sp2){
        printf("A carta Um venceu com um Super Poder  de: %.2f!!", sp1);
    }else if(sp2 > sp1){
        printf("A Carta Dois venceu com um Super Poder de: %.2f!!", sp2);
    }else{
        printf("O Super Poder das duas cartas são iguais!!");
    }
    break;
    default:
        printf("Valor inválido!");
    break;
    }


    return 0;
}
