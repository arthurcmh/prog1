#include <stdio.h>

int main()                                                                                                                                                 
{                                                                                                                                                          
  // declara variaveis                                                                                                                                     
  int x;                                                                                                                                                   
  int y;                                                                                                                                                                                                             
  int mult;
  
  printf("\nEntre com o valor de x:");
  scanf("%d", &x);
  
  printf("\nEntre com o valor de y:");
  scanf("%d", &y);
  
  mult = x * y;
  
  printf("\nResultado = %d\n", mult);
  return 0;
}