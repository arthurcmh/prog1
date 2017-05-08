#include <stdio.h>                                                                                                                                         
                                                                                                                                                           
int main()                                                                                                                                                 
{                                                                                                                                                          
  // declara variaveis                                                                                                                                     
  int x;                                                                                                                                                   
  int y;
  int soma;
  int sub;
  int mult;
  float div;
  // poderia ser int x, y, soma;                                                                                                                           
                                                                                                                                                           
  //atribui valores aos parametros da soma;                                                                                                                
  x = 5;                                                                                                                                                  
  y = 10;                                                                                                                                                   
                                                                                                                                                           
  //calcula soma                                                                                                                                           
  soma = x + y;
  sub = x - y;
  mult = x * y;
  div = (float)x / y;
                                                                                                                                           
  //imprime a soma                                                                                                                                         
  printf("Resultado da soma=%d\n", soma);                                                                                                        
  printf("Resultado da subtracao=%d\n", sub);
  printf("Resultado da divisao=%f\n", div);
  printf("Resultado da multiplicacao=%d\n", mult);
  return 0;
}