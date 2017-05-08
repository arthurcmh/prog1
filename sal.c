#include <stdio.h>

int main()                                                                                                                                                 
{                                                                                                                                                          
  // declara variaveis                                                                                                                                     
  float sb;
  float imp;
  float sl;
  
  printf("\nEntre com o valor do salario bruto:");
  scanf("%f", &sb);
  
  imp = sb * 0.2;
  sl = sb - imp;
  
  printf("\nSalario liquido = %f\n", sl);
  return 0;
}