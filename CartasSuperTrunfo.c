#include <stdio.h>

int main (){

    // declaração das variáveis
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    float superpoder1, superpoder2;

 
      

    // Cadastro da Carta 1
    printf("digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("digite a população da carta 1: ");
    scanf("%lu", &populacao1);
    printf("digite a área da carta 1: ");
    scanf("%f", &area1);
    printf("digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("digite o número de pontos turisticos da carta 1: ");
    scanf("%d", &turismo1);

    // Cadastro da Carta 2
    printf("\ndigite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("digite a população da carta 2: ");
    scanf("%lu", &populacao2);
    printf("digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("digite o número de pontos turisticos da carta 2: ");
    scanf("%d", &turismo2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibcapita1 = pib1 / populacao1;
    pibcapita2 = pib2 / populacao2;

    superpoder1 = populacao1 + area1 + pib1 + turismo1 + pibcapita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibcapita2 + (1 / densidade2);

    // Exibição dos dados
    printf("\n--- carta 1 ---\n");
    printf("código: %s\n", codigo1);
    printf("populacao: %lu\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", turismo1);
    printf("densidade Populacional: %.2f\n", densidade1);
    printf("pib per capita: %.2f\n", pibcapita1);
    printf("super poder: %.2f\n", superpoder1);

    printf("\n--- carta 2 ---\n");
    printf("código: %s\n", codigo2);
    printf("populacao: %lu\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", turismo2);
    printf("densidade Populacional: %.2f\n", densidade2);
    printf("pib per capita: %.2f\n", pibcapita2);
    printf("super poder: %.2f\n", superpoder2);

    // Comparações com mensagem claras
    printf("\n--- comparacao ---\n");
    if (populacao1 > populacao2)
    {
       printf("populacao: carta 1 venceu\n");
    }
    else if (populacao2 > populacao1)
    {
        printf("populacao: carta 2 venceu\n");
    }
    else
    {
        printf("populacao: empate\n");
    }
    if (area1 > area2)
    {
        printf("area: carta 1 venceu\n");
    }
    else if (area2 > area1)
    {
        printf("area: carta 2 venceu\n");
    }
    else
    {
        printf("area: empate\n");
    }
    if (pib1 > pib2)
    {
        printf("pib: carta 1 venceu\n");
    }
    else if (pib2 > pib1)
    {
        printf("pib: carta 2 venceu\n");
    }
    else
    {
        printf("pib: empate\n");
    }
    if (turismo1 > turismo2)
    {
        printf("pontos turisticos: carta 1 venceu\n");
    }
    else if (turismo2 > turismo1)
    {
        printf("pontos turisticos: carta 2 venceu\n");
    }
    else
    {
        printf("pontos turisticos: empate\n");
    }
    if (densidade1 < densidade2)
    {
        printf("densidade populacional: carta 1 venceu (menor densidade)\n");
    }
    else if (densidade2 < densidade1)
    {
        printf("densidade populacional: carta 2 venceu (menor densidade)\n");
    }
    else
    {
        printf("densidade populacional: empate\n");
    }
    if (pibcapita1 > pibcapita2 )
    {
       printf("pib per capita: carta 1 venceu\n");
    }
    else if (pibcapita2 > pibcapita1)
    {
        printf("pib per capita: carta 2 venceu\n");
    }
    else
    {
        printf("pib per capita: empate\n");
    }

    if (superpoder1 > superpoder2)
    {
        printf("super poder: carta 1 venceu\n");
    }
    else if (superpoder2 > superpoder1)
    {
        printf("super poder: carta 2 venceu\n");
    }
    else
    {
        printf("super poder: empate\n");
    }

    return 0;
}




