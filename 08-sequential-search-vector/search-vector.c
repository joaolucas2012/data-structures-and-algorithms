#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo (utilize a linguagem C) que resolva o problema da busca
sequencial de um valor chave inteiro em um vetor V de tamanho n, sem repetição 
de valores. E devolva a quantidade de números comparados até encontrar o valor chave.*/
int main(){
    /*Pimeiro, é preciso criar um vetor*/

    //definindo o seu tamanho
    int n = 10; 
    
    //criando o vetor cheio de tamanho 10
    int v[10] = {32, 45, 12, 37, 1, 0, 4, 7, 10, 9};

    /*aqui, o vetor já está preenchido, basta pedir ao usuário para
    digitar um valor chave para ser procurado no vetor            */
    int chave;
    printf("Digite um numero de 1 a 45 para ser procurado no vetor: ");
    scanf("%d", &chave);

    //se o numero nao estiver nas exigencias, o usuario sera avisado
    if(chave > 45 || chave < 0){
        printf("\nNumero invalido... poxa... ");
    }
    /*procurando o valor chave no vetor. Para isso, usar um laço que 
    o percorre até encontrar um valor igual (ou não) ao valor chave*/
    int cont = 1;
    printf("\nAviso! se nao aparecer nenhuma informacao abaixo, infelizmente seu numero nao foi encontrado...\n\n");
    for(int i=0; i<n; i++){
        
        if(chave == v[i]){ //se o valor chave for igual a um valor do vetor
            printf("Muita sorte! Valor encontrado!\nEle foi comparado %d vezes no vetor.", cont);
            break;
        }
        //se não o contador soma mais 1 e o número é comparado com o próximo
        cont ++;
    }   

    return 0;
}
