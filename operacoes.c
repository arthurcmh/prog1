#include <stdio.h>                                                                                                                                         
                                                                                                                                                           
int main()                                                                                                                                                 
{                                                                                                                                                          
  // declara variaveis                                                                                                                                     
  int x;                                                                                                                                                   
  int y;
  int soma;
  int sub;
  int mult;
  int div;
  // poderia ser int x, y, soma;                                                                                                                           
                                                                                                                                                           
  //atribui valores aos parametros da soma;                                                                                                                
  x = 10;                                                                                                                                                  
  y = 5;                                                                                                                                                   
                                                                                                                                                           
  //calcula soma                                                                                                                                           
  soma = x + y;
  sub = x - y;
  mult = x * y;
  div = x / y;
                                                                                                                                           
  //imprime a soma                                                                                                                                         
  printf("Resultado da soma=%d\n", soma);                                                                                                        
  printf("Resultado da subtracao=%d\n", sub);
  printf("Resultado da divisao=%d\n", div);
  printf("Resultado da multiplicacao=%d\n", mult);
  return 0;
}