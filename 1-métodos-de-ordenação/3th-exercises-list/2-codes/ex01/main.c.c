/*1. Faça um programa que armazene em um vetor V um conjunto de 10 números inteiros.
Utilize o algoritmo de ordenação Bubble Sort para ordenar um conjunto de números
em ordem decrescente.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   int n = 10, V[n]; //DECLARAÇÃO DO VETOR V

/*ARMAZENDANDO 10 VALORES INTEIROS PARA O VETOR V*/
   for(int i=0; i<n; i++){
       printf("Digite um numero para a posicao %d do vetor: ", i+1);
       scanf("%i", &V[i]);
   }
//PRINTANDO O VETOR ALEATÓRIO DIGITADO PELO USUÁRIO
    printf("\nEste e' o vetor desordenado:\n");
    for(int i=0; i<n; i++){
       printf("%d ", V[i]);
   }
   printf("\n\nOrdenando... \n\n");
//COMEÇANDO A ORDENAÇÃO DECRESCENTE DO VETOR EM BUBBLE SORT
   int i = 0;
   do{
       for(int j=0; j<n; j++){
            if(V[j]<V[j+1]){ //SE O PRIMEIRO VALOR FOR MENOR QUE O PRÓXIMO:
                int aux;    
                aux = V[j];    //VARIÁVEL AUXILIAR RECEBE O PRIMEIRO VALOR
                V[j] = V[j+1]; //PRIMEIRA POSIÇÃO RECEBE O SEGUNDO VALOR
                V[j+1] = aux;  //SEGUNDA POSIÇÃO RECEBE O PRIMEIRO VALOR
            }
        }
        i++;
    }while(i != n);
   
//PRINTANDO VETOR ORDENADO DECRESCENTEMENTE EM BUBBLE SORT
    printf("Este e' o vetor ordenado em Bubble Sort em ordem decrescente:\n");
    for(int i=0; i<n; i++){
        printf("%i ", V[i]);
    }
    return 0;
}