#include <stdio.h>



int main() {

    char estado1,estado2;
    char codigo1[50],codigo2[10];
    char cidade1[100], cidade2[100];
    int populacao1, turistico1, populacao2, turistico2;
    float area1, pib1,area2, pib2;

    
    printf("Digite dados Carta 1: \n");
    printf("Digite uma letra Representando um dos 8 estados: \n");
    scanf(" %c",&estado1);
    printf("Digite o numero 1 a 4: \n");
    scanf("%s",&codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s",&cidade1);
    printf("Digite o numero da população: \n");
    scanf("%d",&populacao1);
    printf("Digite a area em quilometros quadrado: \n");
    scanf("%f",&area1);
    printf("Digite o PIB: \n");
    scanf("%f",&pib1);
    printf("Digite quantidade de pontos turisticos: \n");
    scanf("%d",&turistico1);
    
    printf("CARTA 1 \n Estado:%c \n Codigo:%c%s \n Nome da Cidade:%s \n População:%d \n Area:%fKm² \n PIB:%f  \n Pontos turisticos:%d \n"
     ,estado1,estado1,codigo1,cidade1,populacao1,area1,pib1,turistico1);

    printf("Digite dados Carta 2: \n");
    printf("Digite uma letra Representando um dos 8 estados: \n");
    scanf(" %c",&estado2);
    printf("Digite o numero 1 a 4: \n");
    scanf("%s",&codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s",&cidade2);
    printf("Digite o numero da população: \n");
    scanf("%d",&populacao2);
    printf("Digite a area em quilometros quadrado: \n");
    scanf("%f",&area2);
    printf("Digite o PIB: \n");
    scanf("%f",&pib2);
    printf("Digite quantidade de pontos turisticos: \n");
    scanf("%d",&turistico2);

    printf("CARTA 2 \n Estado:%c \n Codigo:%c%s \n Nome da Cidade:%s \n População:%d \n Area:%fKm² \n PIB:%f  \n Pontos turisticos:%d \n"
     ,estado2,estado2,codigo2,cidade2,populacao2,area2,pib2,turistico2);


    return 0;
}
