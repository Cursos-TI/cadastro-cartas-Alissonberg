#include <stdio.h>

int main(){
    char Estado1[50];
    char cod1[50] = "A01";
    char cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PT1;

    int P1;
    char Estado2[50];
    char cod2[50] = "A02";
    char cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int P2;
    int PT2;


    printf("Código da carta: %s \n", cod1);
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1); 
    printf("Digite o numero da população: \n");
    scanf("%d", &P1);
    printf("Digite o numero da área em km²: \n");
    scanf("%f", &Area1);
    printf("Digite o numero do PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PT1);

    
    printf("Código da carta: %s \n", cod2);
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade2); 
    printf("Digite o numero da população: \n");
    scanf("%d", &P2);
    printf("Digite o numero da área em km²: \n");
    scanf("%f", &Area2);
    printf("Digite o numero do PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PT2);

    printf("Codigo da carta: %s\n", cod1);
    printf("Estado: %s\n", Estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área km2: %.2f KM²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos túristicos: %d\n", PT1);

    printf("Codigo da carta: %s\n", cod2);
    printf("Estado: %s\n", Estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área km2: %.2f KM²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos túristicos: %d\n", PT2);
    

    return 0;

}