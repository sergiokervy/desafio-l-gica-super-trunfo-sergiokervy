#include <stdio.h>

int main() {
   int populacao1, populacao2;
   char carta1[20], carta2[20];
   float area1, area2, densidade1, densidade2;

   printf("     Bem-vindo ao jogo de cartas Super Trunfo - Densidade Populacional!\n");
   printf("digite o nome da carta 1:\n");
    scanf("%s", &carta1);
    printf("agora digite seu número populacional:\n");
    scanf("%d", &populacao1);
    printf("por fim, digite o valor de sua área:\n");
    scanf("%f", &area1);
    scanf("carta 1 registrada!\n");
   printf("digite o nome da carta 2:\n");
    scanf("%s", &carta2);
    printf("agora digite sua população:\n");
    scanf("%d", &populacao2);
    printf("por fim, digite o valor de sua área:\n");
    scanf("%f", &area2);
    scanf("carta 2 registrada!\n");

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("\n          RESULTADO DO CÁLCULO DA DENSIDADE POPULACIONAL:\n");
    printf("%s= %d/%.2f = [%.2fhab/km²]   |   %s= %d/%.2f = [%.2fhab/km²]\n", carta1, populacao1, area1, densidade1, carta2, populacao2, area2, densidade2);

    if(densidade1 < densidade2){
        printf("\na CARTA 1 (%s) possui menor densidade populacional, logo é a vencedora!\n\n", carta1);
    }
    else{
        printf("\na CARTA 2 (%s) possui menor densidade populacional, logo é a vencedora!\n\n", carta2);
        }


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
