#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Alfrisiney de Oliveira Dias");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    int x = 810;
    printf("o produto dos valores 30 e 27 é: %d" ,x);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3(){
    float y = 8.33333333333;
    printf("a média aritmética de 5, 8, 12 é: %f" ,y);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4(){
    int x = 0;
    printf("\nDigite um número inteiro: ");
    scanf("%d", &x);
    printf("O valor digitado foi %d\n", x);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5(){
    float x = 0, y = 0;
    printf("\n Digite um número real");
    scanf("%f", &x);
    printf("\n Digite outro número real");
    scanf("%f", &y);
    printf("Os números digitados foram %f %f",x ,y);
}


//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6(){
    int x = 0, a = 0, s = 0; 
    printf("\n Digite um número inteiro");
    scanf("%d", &x);
    a=x-1;
    s=x+1;
    printf("\n O número antecessor é: %d",a);
    printf("\n O número sucessor é: %d",s);
}


//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7(){
    char nome[50], end[50], tel[30];
    printf("\n Digite seu nome:");
    scanf(" %50[^\n]", nome);
    printf("\n Digite o seu endereço:");
    scanf(" %50[^\n]", end);
    printf("\n Digite seu telefone:");
    scanf(" %14[^\n]", tel);
    printf("NOME: %s\nENDEREÇO: %s\nTELEFONE: %s\n", nome, end , tel);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8(){
    int x = 0, y = 0, z = 0;
    printf("\n Digite um numero inteiro:");
    scanf( "%d", &x);
    printf("\n Digite outro numero inteiro:");
    scanf( "%d", &y);
    z=x-y;
    printf("\n a subtração de %d e de %d é %d\n",x ,y ,z);
    
}


//9. Faça um programa que leia um número real e imprima ¼ deste número.
void q9(){
    float x = 0, y = 0;
    printf("\n Digite um numero real");
    scanf("%f" , &x);
    y=x/4;
    printf("\n 1/4 deste numero é:%.6f",y);


}



//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10(){
    float x = 0, y = 0, z = 0, m = 0;
    printf("\n Digite tres números\n");
    scanf("%f%f%f",&x,&y,&z);
    m=(x+y+z)/3;
    printf("\n A media aritmética destes números é %f",m);
    
}


//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11(){
    float x = 0, y = 0, adi = 0, sub = 0, mult = 0, div = 0;
    printf("\nDigite dois números reais\n");
    scanf("%f%f",&x,&y);
    adi=x+y;
    sub=x-y;
    mult=x*y;
    div=x/y;
    printf("SOMA: %f\nSUBTRAÇÃO %f\nMULTIPLICAÇÃO %f\nDIVISÃO %f\n",adi, sub, mult, div);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q11();
    return EXIT_SUCCESS;
}