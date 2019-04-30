//Q2
//Questão 2. Elabore uma função que receba dois números inteiros e positivos e
//calcule a soma dos números no intervalo fechado definido entre o primeiro e o
//segundo número. Use a função no programa principal para calcular a soma entre dois
//números fornecidos pelo usuário. A função só deverá ser executada caso o primeiro
//valor seja maior ou igual ao segundo.

#include <stdio.h>

int somaIntervalo(int primeiro, int segundo, int *resultado){
    *resultado = 0;
    if(primeiro >= segundo){
        int i;
        for(i=segundo;i<primeiro;i++)
            *resultado += (i + segundo);
        *resultado = *resultado + 1;
    }
}


int main(){
    int resultado;
    
    somaIntervalo(4,1,&resultado);
    
    printf("%d", resultado);
}
