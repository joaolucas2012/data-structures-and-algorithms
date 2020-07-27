/* Faça um programa que cadastre 10 produtos, onde cada produto possui os seguintes
dados: código, descrição e preço. Use o Insertion Sort para ordenar os produtos por
ordem alfabética. Em seguida, calcule e mostre quantas comparações devem ser feitas
para encontrar um produto pelo seu código usando busca sequencial. */
/*Feito com Robson de Aruda Silva*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define t 10

/*CRIANDO O VETOR PARA ARMAZENAR AS INFORMAÇÕES*/
typedef struct produto{
    char nome[100];
    int preco;
    int codigo;
}Produto;

Produto prod[t];

int main(){
    //ADQUIRINDO AS INFORMAÇÕES//
    for(int i = 0; i<t; i++){
        printf("Digite o nome do produto %d: ", i+1);
        scanf(" %s", prod[i].nome);
        printf("Digite o preco: ");
        scanf("%d", &prod[i].preco);
        printf("Digite o codigo: ");
        scanf("%d", &prod[i].codigo);
        printf("\n");
    }

    //MOSTRANDO AS INFORMAÇÕES DESORDENADAS//
    printf("Este e' o vetor com todas as informacoes:\n");
    for(int i = 0; i<t; i++){
        printf("Nome: %s | preco: $%d | codigo: %d\n", prod[i].nome, prod[i].preco, prod[i].codigo);
    }

    //ORDENANDO O VETOR ALFABETICAMENTE//
    for (int i = 1; i < t; i++)
    {
        int j = i;

        while (j > 0 && strcmp(prod[j - 1].nome, prod[j].nome) > 0)
        {
            char tmp[25];
            strncpy(tmp, prod[j - 1].nome, sizeof(tmp) - 1);
            tmp[sizeof(tmp) - 1] = '\0';

            strncpy(prod[j - 1].nome, prod[j].nome, sizeof(prod[j - 1].nome) - 1);
            prod[j - 1].nome[sizeof(prod[j - 1].nome) - 1] = '\0';

            strncpy(prod[j].nome, tmp, sizeof(prod[j].nome));
            prod[j].nome[sizeof(prod[j].nome) - 1] = '\0';

            j--;
        }
    }
    //MOSTRANDO O VETOR ORDENADO AO USUARIO//
    printf("\nEsta e' a lista com os produtos em ordem alfabetica:\n");
    for(int i = 0; i<t; i++){
        printf("Nome: | %s |\n", prod[i].nome);
    }
    //BUSCA DE UM PRODUTO PELO SEU CÓDIGO
    printf ("\nInforme o codigo para fazer a busca de um produto: ");
    int codig;
    scanf ("%d", &codig);
    int x=0;
    for (int i=0; i<t; i++){
      if (prod[i].codigo == codig){
        x++;
        break;
      }
      x++;
    }
    if (x==0){
      printf("Produto não encontrado!");
    }else{
    printf ("\nForam feitos %d loop(s) para encontrar este produto cujo codigo e' %d.\n", x, codig);
    }

return 0;
}
