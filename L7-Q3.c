//Q3
//Questão 3. Elabore uma função que receba um valor numérico (podendo ter casas
//decimais) e um valor inteiro. O segundo valor (inteiro) corresponde à porcentagem
//de aumento do primeiro valor (real). A função deve somar o valor correspondente à
//taxa (segundo valor) no primeiro valor. Por exemplo, caso a função receba 100 e 20,
//o primeiro valor deve ser alterado para 120 (100 + 20%). Utilize a função no
//programa principal para calcular o aumento de uma lista de produtos (um de cada
//vez). O valor original do produto e a taxa de aumento deve ser fornecido pelo usuário
//(um de cada vez).

#include <stdio.h>

int aumentaPorcentagem(float valor, int aumento, float *resultado){
    //O casting é necessário quando existe atribuição com tipos diferentes de variaveis.
    //O Casting pode ser feito de duas maneiras:
    //     1 -  float per = (float) aumento/100;
    //     2 -  float per = aumento;
    //          per = per/100;
    float per = aumento;
    per = per/100;
    *resultado = valor + (valor * per);
}


int main(){
    int i, percentual;
    float valor, resultado=0;
    
   for(i=0;i<=5;i++){
        printf("Digite o valor do produto:\n");
        scanf("%f",&valor);
        printf("Digite o percentual de aumento:\n");
        scanf("%i",&percentual);
        aumentaPorcentagem(valor,percentual,&resultado);
        printf("%.2f\n", resultado);
    }
}
