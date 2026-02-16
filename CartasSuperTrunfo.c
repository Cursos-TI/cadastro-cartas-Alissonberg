#include <stdio.h>

int main(){
    char Estado1[50];
    char cod1[50] = "A01";
    char cidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int PT1;

    int P1;
    char Estado2[50];
    char cod2[50] = "A02";
    char cidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PT2;
    float dp1, dp2, ppc1, ppc2;
    unsigned int resultado;

    printf("Código da carta: %s \n", cod1);
    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1); 
    printf("Digite o numero da população: \n");
    scanf("%lu", &Populacao1);
    printf("Digite o numero da área em km²: \n");
    scanf("%f", &Area1);
    printf("Digite o numero do PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PT1);

    
    printf("Código da carta: %s \n", cod2);
    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2); 
    printf("Digite o numero da população: \n");
    scanf("%lu", &Populacao2);
    printf("Digite o numero da área em km²: \n");
    scanf("%f", &Area2);
    printf("Digite o numero do PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PT2);


    dp1 = (float) Populacao1 / Area1; // densidade populacional
    dp2 = (float) Populacao2 / Area2; 
    ppc1 = (float) PIB1 / Populacao1; // PIB percapital
    ppc2 = (float) PIB2 / Populacao2;

    unsigned long int  superpoder1 = Populacao1 + Area1 + PIB1 + PT1 + dp1 + ppc1;
    unsigned long int  superpoder2 = Populacao2 + Area2 + PIB2 + PT2 + dp2 + ppc2;
    
    printf("------------------------------\n"); 
    printf("Codigo da carta: %s\n", cod1);
    printf("Estado: %s\n", Estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área km2: %.2f KM²\n", Area1);
    printf("PIB: %.2f\n", (float) PIB1);
    printf("Número de pontos túristicos: %d\n", PT1);
    printf("Densidade populacional: %.2f km²\n", (float) dp1);
    printf("PIB per capital: R$ %.2f\n", (float) ppc1);
    printf("Super poder: %lu\n", superpoder1);
    
    printf("------------------------------\n");
    printf("Codigo da carta: %s\n", cod2);
    printf("Estado: %s\n", Estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área km2: %.2f KM²\n", Area2);
    printf("PIB: %.2f\n", (float) PIB2);
    printf("Número de pontos túristicos: %d\n", PT2);
    printf("Densidade populacional: %.2f km²\n", (float) dp2);
    printf("PIB per capital: R$ %.2f\n", (float) ppc2);
    printf("Super poder: %lu\n", superpoder2);
    

    printf("------------------------------\n");
    printf("Resultado do supertrunfo:\n");
    printf("População: carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Area: carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos turísticos: carta 1 venceu (%d)\n", PT1 > PT2);
    printf("Densidade populacional: carta 1 venceu (%d)\n", dp1 < dp2);
    printf("PIB per capita: carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("superpoder: carta 1 venceu (%d)\n", superpoder1 > superpoder2);
    
    
     return 0;




}