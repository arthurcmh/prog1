#include <stdio.h>

int main()                                                                                                                                                 
{                                                                                                                                                          
  // declara variaveis                                                                                                                                     
  float av1;                                                                                                                                                   
  float av2;                                                                                                                                                                                                             
  float mult;
  float result;
  
  printf("\nEntre com o valor de av1:");
  scanf("%f", &av1);
  
  printf("\nEntre com o valor de av2:");
  scanf("%f", &av2);
  
  mult = av1 + av2;
  result = mult / 2;
  printf("\nResultado = %f\n", result);
  return 0;
}