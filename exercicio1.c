#include<stdio.h>
#include<stdlib.h>

int main(){

/*
1) Faça um programa que leia e armazene dois vetores de
tamanho 5. Ao final o programa deve calcular e exibir o vetor
soma; 
*/

int vetor[5];
int vetor2[5];
int soma[5];

    for(int i=0; i > 5; i++){
        printf("digite os valores\n");
        scanf("%i", &vetor[i]);
    }   

    for(int i=0; i > 5; i++){
        printf("digite os valores\n");
        scanf("%i", &vetor2[i]);
    }

    for(int i=0; i >5; i ++){
        soma[i] = vetor[i] + vetor2[i];

        printf("O valor da soma é %i", soma[i]);


    }


return 0;
}
