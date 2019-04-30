//Q1
//Elabore uma função que receba uma hora completa
//(hora/minuto/segundo) e converta para segundo. Use a função no programa principal
//para converter um valor hora completo fornecido pelo usuário.
//um dos parâmetros recebidos pela função deve ser o endereço da variável que
//deverá guardar o resultado da conversão.

#include <stdio.h>

int converteHora(int hora, int minuto, int segundo, int *resultado){
    *resultado = hora*3600 + minuto*60 + segundo;
}


int main(){
  
  int resultado, hora, minuto, segundo;
  hora = 10;
  minuto = 30;
  segundo = 55;
  
  converteHora(hora,minuto,segundo,&resultado);
  
  printf("%d",resultado);
  
}
