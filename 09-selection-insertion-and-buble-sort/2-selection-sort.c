/*2. Faça um programa que cadastre o nome e o salário de 10 funcionários. Use o algoritmo
de ordenação Selection Sort para listar todos os dados dos funcionários das seguintes
formas:
(a) em ordem decrescente de salário.
(b) em ordem alfabética.*/
/*Feito com Robson de Arruda Silva*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 10
/*CRIANDO O VETOR PARA ARMAZENAR AS INFORMAÇÕES*/
typedef struct funcionario{
    char nome[100];
    int salario;
}Funcionario;

Funcionario func[n];

int main(){
    //ADQUIRINDO AS INFORMAÇÕES//
    for(int i = 0; i<n; i++){
        printf("Digite o nome do funcionario: ");
        scanf(" %s", func[i].nome);
        printf("Digite o salario: ");
        scanf("%d", &func[i].salario);
    }

    //MOSTRANDO AS INFORMAÇÕES DESORDENADAS//
    printf("\nEste e' o vetor com todas as informacoes:\n");
    for(int i = 0; i<n; i++){
        printf("Nome: %s | salario: %d\n", func[i].nome, func[i].salario);
    }

    //ORDENANDO POR SELECTION SORT//
    //(a) em ordem decrescente de salário.
    printf("\nEsta e' a ordem decrescente dos salarios:\n\n");

    int maiorinicial, posicao_da_troca, menor, maiorfinal;
    for(int i=0; i<n; i++){
        maiorfinal = func[i].salario;
        for(int pos = i+1; pos <= n; pos++){
            if(maiorfinal < func[pos].salario){
                posicao_da_troca = pos;
                maiorinicial = maiorfinal;
                maiorfinal = func[pos].salario; 
            }
        }
        func[i].salario = maiorfinal;
        func[posicao_da_troca].salario = maiorinicial;
    }

/*IMPRIMINDO O VETOR ORDENADO AO USUÁRIO*/
    for(int i=0; i<n; i++){
       printf("Salario: %d\n", func[i].salario);
    }

    //(b) em ordem alfabética.
    char ajuda[80];
    for(int i=1; i<=n; i++){
      for(int j=0; j<=n-i; j++){
            if(strcmp(func[j].nome, func[j+1].nome)>0){
                strcpy(ajuda,func[j].nome);
                strcpy(func[j].nome,func[j+1].nome);
                strcpy(func[j+1].nome,ajuda);
            }
        }
    }
    //IMPRIMINDO NOMES EM ORDEM ALFABÉTICA AO USUÁRIO
    printf("\nEstes sao os nomes em ordem alfabetica :\n");    
    for(int i=0;i<=n;i++){
        printf("%s \n",func[i].nome);
    }
    
    return 0;
}
