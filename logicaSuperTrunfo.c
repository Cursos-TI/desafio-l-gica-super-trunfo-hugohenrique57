#include <stdio.h>


int main()
{
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
    int escolha, atributo1, atributo2, resultado1,  resultado2;

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
    //carta 1
        printf("---->Carta 1<---- \n");
        printf("Digite o Estado (uma letra de 'A' a 'H') \n:"); // uma letra de 'A' a 'H'
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

        printf("Digite o Estado (uma letra de 'A' a 'H') \n:"); // uma letra de 'A' a 'H'
        scanf(" %c", &estado2);

        printf("Digite o Codigo ex: A01 \n:");
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
        
        printf("escolha o primeiro atributo que  deseja comparar\n");
        printf("(1) Para comparar População\n");
        printf("(2) para comparar Area(KM²)\n");
        printf("(3) para comparar PIB\n");
        printf("(4) para comparar numeros de Pontos turisticos\n");
        printf("(5) para comparar densidade Populacional\n");
        printf("(6) para comparar PIB per Capta\n");
        printf("(7) para comparar Super poder\n");
        scanf("%d", &atributo1);  

        printf("----------------------------------------------------------\n");    
        switch (atributo1)
        {
            case 1: 
                printf("Você escolheu o atributo: (População)\n");
                resultado1 = populacao1 > populacao2 ? 1 : 0;
                printf("--------------------------------------------------\n");
                printf("carta 1 - %s população:%lu \n", nome_C1, populacao1);
                printf("carta 2 - %s população:%lu \n", nome_C2, populacao2);
                printf("--------------------------------------------------\n");
                if(populacao1 > populacao2){
                    printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                } else if (populacao1 < populacao2) {
                    printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                } else{
                    printf("empate!\n");
                }
               
            break;
            case 2:
                printf("Você escolheu o atributo: (Área KM²)\n");
                resultado1 = area_C1 > area_C2 ? 1 : 0;
                printf("--------------------------------------------------\n");
                printf("carta 1 - %s área(KM²):%.2f\n", nome_C1, area_C1);
                printf("carta 2 - %s área(KM²):%.2f\n", nome_C2, area_C2);
                printf("--------------------------------------------------\n");
                if(area_C1 > area_C2){
                    printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                } else if (area_C1 < area_C2) {
                    printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                } else{
                    printf("empate!\n");
                }
              

            break;
            case 3:
                printf("Você escolheu o atributo: (PIB)\n");
                resultado1 = PIB_C1 > PIB_C2 ? 1 : 0;
                printf("--------------------------------------------------\n");
                printf("carta 1 - %s PIB:%.2f\n", nome_C1, PIB_C1);
                printf("carta 2 - %s PIB:%.2f\n", nome_C2, PIB_C2);
                printf("--------------------------------------------------\n");
                if(PIB_C1 > PIB_C2){
                    printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                } else if (PIB_C1 < PIB_C2) {
                    printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                } else{
                    printf("empate!\n");
                }
               

            break;
            case 4:
                printf("Você escolheu o atributo: (Numero de pontos Turisticos)\n");
                resultado1 = pontos_turis_C1 > pontos_turis_C2 ? 1 : 0;
                printf("--------------------------------------------------\n");
                printf("carta 1 - %s numero de pontos turisticos:%d\n", nome_C1, pontos_turis_C1);
                printf("carta 2 - %s numero de pontos turisticos:%d\n", nome_C2, pontos_turis_C2);
                printf("--------------------------------------------------\n");
                if(pontos_turis_C1 > pontos_turis_C2){
                    printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                } else if (pontos_turis_C1 < pontos_turis_C2) {
                    printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                } else{
                    printf("empate!\n");
                }
            break;
            case 5:
                printf("Você escolheu o atributo: (Densidade Populacional)\n");
                resultado1 = densi_populacional1 > densi_populacional2 ? 1 : 0;
                printf("--------------------------------------------------\n");
                printf("carta 1 - %s Densidade Populacional:%.2f\n", nome_C1, densi_populacional1);
                printf("carta 2 - %s Densidade Populacional:%.2f\n", nome_C2, densi_populacional2);
                printf("--------------------------------------------------\n");
                if(densi_populacional1 > densi_populacional2){
                    printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                } else if (densi_populacional1 < densi_populacional2) {
                    printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                } else{
                    printf("empate!\n");
                }


            break;
            case 6:
                printf("Você escolheu o atributo: (PIB per Capta)\n");
                resultado1 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
                printf("--------------------------------------------------\n");
                printf("carta 1 - %s PIB Per Capta:%.2f\n", nome_C1, PIB_per_capita1);
                printf("carta 2 - %s PIB Per Capta:%.2f\n", nome_C2, PIB_per_capita2);
                printf("--------------------------------------------------\n");
                if(PIB_per_capita1 > PIB_per_capita2){
                    printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                } else if (PIB_per_capita1 < PIB_per_capita2) {
                    printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                } else{
                    printf("empate!\n");
                }

            break;
            case 7:
            printf("Você escolheu o atributo: (Super poder)\n");
            resultado1 = superpoder1 > superpoder2 ? 1 : 0;
            printf("--------------------------------------------------\n");
            printf("carta 1 - %s Super Poder:%.2f\n", nome_C1, superpoder1);
            printf("carta 2 - %s Super Poder:%.2f\n", nome_C2, superpoder2);
            printf("--------------------------------------------------\n");
            if(superpoder1 > superpoder2){
                printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
            } else if (superpoder1 < superpoder2) {
                printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
            } else{
                printf("empate!\n");
            }
            break;
            default:
                printf("Opção invalida!\n");
            break;
        } 
        
        printf("--------------------------------------------------\n");
        printf("Ecolha o Segudo atributo a comparar!\n");
        printf("(1) Para comparar População\n");
        printf("(2) para comparar Area(KM²)\n");
        printf("(3) para comparar PIB\n");
        printf("(4) para comparar numeros de Pontos turisticos\n");
        printf("(5) para comparar densidade Populacional\n");
        printf("(6) para comparar PIB per Capta\n");
        printf("(7) para comparar Super poder\n");
        scanf("%d", &atributo2);  
        if(atributo1 == atributo2){
            printf("Você escolheu o mesmo atributo!\n");
        }else{
            switch (atributo2)
            {
                case 1: 
                    printf("--------------------------------------------------\n");
                    printf("Você escolheu o atributo: (População)\n");
                    resultado2 = populacao1 > populacao2 ? 1 : 0;
                    printf("--------------------------------------------------\n");
                    printf("carta 1 - %s população:%lu\n", nome_C1, populacao1);
                    printf("carta 2 - %s população:%lu\n", nome_C2, populacao2);
                    printf("--------------------------------------------------\n");
                    if(populacao1 > populacao2){
                        printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                    } else if (populacao1 < populacao2) {
                        printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                    } else{
                        printf("empate!\n");
                    }
                   
                break;
                case 2:
                    printf("Você escolheu o atributo: (Área KM²)\n");
                    resultado2 = area_C1 > area_C2 ? 1 : 0;
                    printf("--------------------------------------------------\n");
                    printf("carta 1 - %s área(KM²):%.2f\n", nome_C1, area_C1);
                    printf("carta 2 - %s área(KM²):%.2f\n", nome_C2, area_C2);
                    printf("--------------------------------------------------\n");
                    if(area_C1 > area_C2){
                        printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                    } else if (area_C1 < area_C2) {
                        printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                    } else{
                        printf("empate!\n");
                    }
                  
    
                break;
                case 3:
                    printf("Você escolheu o atributo: (PIB)\n");
                    resultado2 = PIB_C1 > PIB_C2 ? 1 : 0;
                    printf("--------------------------------------------------\n");
                    printf("carta 1 - %s PIB:%.2f\n", nome_C1, PIB_C1);
                    printf("carta 2 - %s PIB:%.2f\n", nome_C2, PIB_C2);
                    printf("--------------------------------------------------\n");
                    if(PIB_C1 > PIB_C2){
                        printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                    } else if (PIB_C1 < PIB_C2) {
                        printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                    } else{
                        printf("empate!\n");
                    }
                   
    
                break;
                case 4:
                    printf("Você escolheu o atributo: (Numero de pontos Turisticos)\n");
                    resultado2 = pontos_turis_C1 > pontos_turis_C2 ? 1 : 0;
                    printf("--------------------------------------------------\n");
                    printf("carta 1 - %s numero de pontos turisticos:%d\n", nome_C1, pontos_turis_C1);
                    printf("carta 2 - %s numero de pontos turisticos:%d\n", nome_C2, pontos_turis_C2);
                    printf("--------------------------------------------------\n");
                    if(pontos_turis_C1 > pontos_turis_C2){
                        printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                    } else if (pontos_turis_C1 < pontos_turis_C2) {
                        printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                    } else{
                        printf("empate!\n");
                    }
                break;
                case 5:
                    printf("Você escolheu o atributo: (Densidade Populacional)\n");
                    resultado2 = densi_populacional1 > densi_populacional2 ? 1 : 0;
                    printf("--------------------------------------------------\n");
                    printf("carta 1 - %s Densidade Populacional:%.2f\n", nome_C1, densi_populacional1);
                    printf("carta 2 - %s Densidade Populacional:%.2f\n", nome_C2, densi_populacional2);
                    printf("--------------------------------------------------\n");
                    if(densi_populacional1 > densi_populacional2){
                        printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                    } else if (densi_populacional1 < densi_populacional2) {
                        printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                    } else{
                        printf("empate!\n");
                    }
    
    
                break;
                case 6:
                    printf("Você escolheu o atributo: (PIB per Capta)\n");
                    resultado2 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
                    printf("--------------------------------------------------\n");
                    printf("carta 1 - %s PIB Per Capta:%f\n", nome_C1, PIB_per_capita1);
                    printf("carta 2 - %s PIB Per Capta:%f\n", nome_C2, PIB_per_capita2);
                    printf("--------------------------------------------------\n");
                    if(PIB_per_capita1 > PIB_per_capita2){
                        printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                    } else if (PIB_per_capita1 < PIB_per_capita2) {
                        printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                    } else{
                        printf("empate!\n");
                    }
    
                break;
                case 7:
                printf("Você escolheu o atributo: (Super poder)\n");
                resultado2 = superpoder1 > superpoder2 ? 1 : 0;
                printf("--------------------------------------------------\n");
                printf("carta 1 - %s Super Poder:%.2f\n", nome_C1, superpoder1);
                printf("carta 2 - %s Super Poder:%.2f\n", nome_C2, superpoder2);
                printf("--------------------------------------------------\n");
                if(superpoder1 > superpoder2){
                    printf("Carta 1 - %s venceu a rodade !\n", nome_C1);
                } else if (superpoder1 < superpoder2) {
                    printf("Carta 2 - %s venceu a rodada !\n", nome_C2);
                } else{
                    printf("empate!\n");
                }
                break;
                default:
                    printf("Opção invalida!\n");
                break;
            }
            printf("--------------------------------------------------\n");
            if((resultado1 == 1) &&(resultado2 == 1)){
                printf("Carta 1 - %s VENCEU A COMPETIÇÃO!\n", nome_C1);
            } else if ((resultado1 == 1) && (resultado2 == 0) || (resultado1 == 0) && (resultado2 == 1) ){
                printf("A COMPETIÇÃO EMPATOU!\n");
            } else if ((resultado1 == 0) && (resultado2 == 0)){
                printf("carta 2 - %s VENCEU A COMPETIÇÃO!\n", nome_C2);
            }

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