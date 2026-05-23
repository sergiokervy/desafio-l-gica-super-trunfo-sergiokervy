#include <stdio.h>

int main() {
   int populacao1, populacao2;
   char carta1[20], carta2[20];
   float area1, area2, densidade1, densidade2;
   densidade1 = populacao1 / area1;
   densidade2 = populacao2 / area2;
   
   printf("digite o nome da carta 1:\n");
    scanf("%19s", &carta1);
    printf("agora digite seu número populacional:\n");
    scanf("%d", &populacao1);
    printf("por fim, digite sua área:\n");
    scanf("%f", &area1);
    scanf("carta 1 registrada!\n");
   printf("digite o nome da carta 2:\n");
    scanf("%19s", &carta2);
    printf("agora digite sua população:\n");
    scanf("%d", &populacao2);
    printf("por fim, digite sua área:\n");
    scanf("%f", &area2);
    scanf("carta 2 registrada!\n");

    printf("resultado do calculo da densidade populacional:\n");
    printf("carta 1 = %d/%f=%f - carta 2 = %d/%f=%f\n", &populacao1, &area1, &densidade1, &população2, &area2, &densidade2);

    if(densidade1 < densidade2){
        printf("a carta 1 possui menor densidade populacional, logo é a vencedora!\n");
        else{
            printf("a carta 2 possui menor densidade populacional, logo é a vencedora!\n");

        }
return 0;
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
