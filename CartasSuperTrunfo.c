#include <stdio.h>

int main() {

    char 
        estado[20],
        codigodacarta[5],
        cidade[20];
    int
        populacao,
        pontosturisticos;
    float
        pib,
        area;
    
        printf("Bem-vindo ao jogo Super Trunfo Países!\n\n");
        printf("Vamos fazer o cadastro da primeira carta?\n\n");
        printf("Informe um estado:\n");
        fgets(estado, 20, stdin);
        printf("Iforme um codigo para sua carta:\n");
        fgets(codigodacarta, 20, stdin);
        printf("Informe a cidade:\n");
        fgets(cidade, 20, stdin);
        printf("informe o numero de habitantes da cidade: \n");
        scanf("%d", &populacao);
        printf("Informe a área da cidade em quilômetros quadrados:\n");
        scanf("%f", &area);
        printf("Informe o produto Interno bruto da cidade:\n");
        scanf("%f", &pib);
        printf("Informe a quantidade de pontos turisticos na cidade: \n");
        scanf("%d", &pontosturisticos);

        printf("Carta 1:\n");
        printf("Estado: %s", estado);
        printf("Código: %s", codigodacarta);
        printf("Nome da Cidade: %s", cidade);
        printf("População:%d \n", populacao);
        printf("Área:%f km²\n", area);
        printf("PIB:%f de Reais\n", pib);
        printf("Número de Pontos Turísticos:%d\n", pontosturisticos);

    
    return 0;
}
