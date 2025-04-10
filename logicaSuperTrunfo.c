#include <stdio.h>


int main() {
//variaveis carta 1
    int pontos_turis_C1;

    float area_C1, PIB_C1, densi_populacional1; //densidade populacional: Populaçao / Area (km²)

    float PIB_per_capita1; //PIB per Capta : PIB / Populaçao

    char nome_C1[50], Cod_C1[10], estado1;

    unsigned long int populacao1;

    float superpoder1, densidade_inversa1;


//variaveis carta 2
    int pontos_turis_C2;

    float area_C2, PIB_C2, densi_populacional2;

    float PIB_per_capita2;

    char nome_C2[50], Cod_C2[10], estado2;

    unsigned long int populacao2;

    float superpoder2, densidade_inversa2;


//menu
    int escolha, comparar;

    //menu interativo 
    printf("------- Super Tunfo -------\n");
    printf("           MENU\n");
    printf("(1) Iniciar\n");
    printf("(2) Regras\n");
    printf("(3) Sair\n");
    scanf("%d", &escolha);
    printf("----------------------------------------------------------\n");
    switch (escolha)
    {
    case 1:
        //Entrada de dados
    //carta1-----------------------------------------
        printf("---->Carta 1<---- \n");
        printf("Digite o Estado \n:"); // uma letra de 'A' a 'H'
        scanf(" %c", &estado1);

        printf("Digite o Codigo Ex(S01) \n:");
        scanf("%s", Cod_C1);

        printf("Digite o Nome da cidade \n:");
        scanf("%s", nome_C1 );

        printf("Digite o numero de habitantes \n:");
        scanf("%lu", &populacao1);

        printf("Digite a Área (KM²) \n:");
        scanf("%f", &area_C1);

        printf("Digite o PIB \n:");
        scanf("%f", &PIB_C1 );

        printf("Digite o Numero de pontos turisticos \n:");
        scanf("%d", &pontos_turis_C1);


        printf("----------------------------------------------------------\n");
        //carta2----------------------------------------
        printf("---->Carta 2<----\n");

        printf("Digite o Estado \n:"); // uma letra de 'A' a 'H'
        scanf(" %c", &estado2);

        printf("Digite o Codigo \n:");
        scanf("%s", Cod_C2);

        printf("Digite o Nome da cidade \n:");
        scanf("%s", nome_C2 );

        printf("Digite o numero de habitantes \n:");
        scanf("%lu", &populacao2);

        printf("Digite a Área(KM²)\n:");
        scanf("%f", &area_C2);

        printf("Digite o PIB \n:");
        scanf("%f", &PIB_C2 );

        printf("Digite o Numero de pontos turisticos \n:");
        scanf("%d", &pontos_turis_C2);

        
    densi_populacional1 = (float)  populacao1 / area_C1;
    PIB_per_capita1 =  PIB_C1 / (float) populacao1;
    superpoder1 = (float) populacao1 + area_C1 + PIB_C1 + (float) pontos_turis_C1 + PIB_per_capita1;

    densi_populacional2 = (float)  populacao2 / area_C2;
    PIB_per_capita2 =  PIB_C2/ (float) populacao2;
    superpoder2 = (float) populacao2 + area_C2 + PIB_C2 + (float) pontos_turis_C2 + PIB_per_capita2;

        printf("----------------------------------------------------------\n");
        
        printf("Quais valores deseja comparar\n");
        printf("(1) Para comparar População\n");
        printf("(2) para comparar Area\n");
        printf("(3) para comparar PIB\n");
        printf("(4) para comparar numeros de Pontos turisticos\n");
        printf("(5) para comparar densidade Populacional\n");
        printf("(6) para comparar PIB per Capta\n");
        printf("(7) para comparar Super poder\n");
        scanf("%d", &comparar);  

        printf("----------------------------------------------------------\n");    
        switch (comparar)
        {
            case 1: 
                printf("Populacao \n");
                printf("Carta 1 - %s: %lu \n", nome_C1, populacao1);
                printf("Carta 2 - %s: %lu \n", nome_C2, populacao2);
            
                if (populacao1 > populacao2){
                    printf("Carta(1) VENCEU ! \n");
                } else if (populacao2 > populacao1){
                    printf("Carta(2) VENCEU ! \n");
                } else {
                    printf("EMPATE!");
                }
            break;
            case 2:
                printf("Area  (KM²)\n");
                printf("Carta 1 - %s: %.2f KM² \n", nome_C1, area_C1);
                printf("Carta 2 - %s: %.2f KM² \n", nome_C2, area_C2);
            
                if (area_C1 > area_C2){
                    printf("Carta(1) VENCEU ! \n");
                } else if (area_C2 > area_C1) { 
                    printf("Carta(2) VENCEU ! \n");
                }else {
                    printf("EMPATE!");
                }
            break;
            case 3:
                printf("PIB (R$)\n");
                printf("Carta 1 - %s: R$ %.2f \n", nome_C1, PIB_C1);
                printf("Carta 2 - %s: R$ %.2f \n", nome_C2, PIB_C2);
            
                if (PIB_C1 > PIB_C2){
                    printf("Carta(1) VENCEU !\n");
                } else if (PIB_C2 > PIB_C1) {
                    printf ("Carta(2) VENCEU ! \n");
                } else {
                    printf("EMPATE!");
                }
            break;
            case 4:
                printf(" Numero de Pontos Turisticos \n");
                printf("Carta 1 - %s: %d \n", nome_C1, pontos_turis_C1);
                printf("Carta 2 - %s: %d \n", nome_C2, pontos_turis_C2);
            
                if (pontos_turis_C1 > pontos_turis_C2) {
                    printf("Carta(1) VENCEU ! \n");
                } else if (pontos_turis_C2 > pontos_turis_C1){
                    printf("Carta(2) VENCEU! \n");
                } else {
                    printf("EMPATE!");
                }
            break;
            case 5:
                printf("Densidade Populacional\n");
                printf("Carta 1 - %s: %.2f \n", nome_C1, densi_populacional1);
                printf("Carta 2 - %s: %.2f \n", nome_C2, densi_populacional2);
            
                if(densi_populacional1 < densi_populacional2) {
                    printf("Carta(1) VENCEU ! \n");
                } else if (densi_populacional2 > densi_populacional1) {
                    printf("Carta(2) VENCEU ! \n");
                } else
                    printf("EMPATE!");
            break;
            case 6:
                printf("PIB Per Capta (R$) \n");
                printf("Carta 1 - %s: R$ %.2f \n", nome_C1, PIB_per_capita1);
                printf("Carta 2 - %s: R$ %.2f \n", nome_C2, PIB_per_capita2);
            
                if (PIB_per_capita1 > PIB_per_capita2) {
                    printf("Carta(1) VENCEU ! \n");
                } else if (PIB_per_capita2 > PIB_per_capita1){
                    printf("Carta(2) VENCEU !\n");
                } else {
                    printf("EMPATE!");
                }
            break;
            case 7:
                printf("Super Poder\n");
                printf("Carta 1 - %s: %.2f \n", nome_C1, superpoder1);
                printf("Carta 2 - %s: %.2f \n", nome_C2, superpoder2);
            
                if(superpoder1 > superpoder2) {
                    printf("Carta(1) VENCEU ! \n");
                } else if (superpoder2 > superpoder1){
                    printf("Carta(2) VENCEU ! \n");
                } else {
                    printf("EMPATE!");
                }
            break;
            default:
                printf("Opção invalida!\n");
            break;
            return 0;
        } 
        
        
    break;
    case 2:
        printf("A regra do jogo consiste em dois jogaores, cada um registra sua carta, a carta com maior numero pontos vence!\n");
        printf("o numero de pontos das cartas sao calculado pelos valores das estatisticas, sendo elas individuais ou somadas juntas, que recebe o nome super poder.\n");
    break;
    case 3:
        printf("SAINDO...\n");
    break;
    default:
        printf("Opção invalida!\n");
    break;
    }

    return 0;

}


