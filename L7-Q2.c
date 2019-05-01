//Q2
//Questão 2. Elabore uma função que receba dois números inteiros e positivos e
//calcule a soma dos números no intervalo fechado definido entre o primeiro e o
//segundo número. Use a função no programa principal para calcular a soma entre dois
//números fornecidos pelo usuário. A função só deverá ser executada caso o primeiro
//valor seja maior ou igual ao segundo.

#include <stdio.h>

int somaIntervalo(int numA, int numB, int *resultado){
    *resultado = 0;
    if(numA >= numB){
        int i;
        for(i=numB;i<=numA;i++)
            *resultado = *resultado + i ;
    }
}


int main(){
    int resultado;

    somaIntervalo(10,1,&resultado);

    printf("%d", resultado);
}
