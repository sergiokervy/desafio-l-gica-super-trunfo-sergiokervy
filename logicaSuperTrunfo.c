#include <stdio.h>

int main() {
    //variáveis
   int populacao1, populacao2;
   char carta1[20], carta2[20];
   float area1, area2, densidade1, densidade2;

   // sistema que faz o registro das Cartas
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

    //calculo da densidade das cartas
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    //texto que mostra o resultado do calculo
    printf("\n          RESULTADO DO CÁLCULO DA DENSIDADE POPULACIONAL:\n");
    printf("%s= %d/%.2f = [%.2fhab/km²]   |   %s= %d/%.2f = [%.2fhab/km²]\n", carta1, populacao1, area1, densidade1, carta2, populacao2, area2, densidade2);

    //parte que testa as condiçoes e determina a carta vencedora
    if(densidade1 < densidade2){
        printf("\na CARTA 1 (%s) possui menor densidade populacional, logo é a vencedora!\n\n", carta1);
    }
    else{
        printf("\na CARTA 2 (%s) possui menor densidade populacional, logo é a vencedora!\n\n", carta2);
        }

 
    return 0;
}
