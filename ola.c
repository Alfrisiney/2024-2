#include <stdio.h>
#include <stdlib.h>

void main() {
    int x = 0;//criando uma variavel inteira
    printf("Valor de x: %d\n",x);
    x++;//incrementando x em 1 unidade
    printf("Valor de x: %d\n",x);
    float y = 12.345678;//criando uma variavel real
    printf("Valor de y: %f\n",y);
    printf("Valor de y: %.2f\n",y);//imprimindo o valor de y com apenas 2 casas 
    //Caractere deve estar entre apóstrofo
    char sexo = 'M';//variavel que aceita um 1 caractere
    printf("Sexo: %c\n",sexo);
    //criando uma variavel String (texto)
    char nome[30] = "Joao";
    printf("Nome: %s\n",nome);
    printf("Primeira letra: %c\n", nome[0]);
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    printf("O valor digitado foi %d\n", x);
    printf("Olá Mundo!");
    //repositorio professor http://github.com/ifmt-cba/lingprog20242
}
