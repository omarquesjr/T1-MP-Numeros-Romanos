#include "romanos.hpp"
int romanos_para_decimal(char const * num_romano) {
  int soma = 0;
  for (int i = 0; num_romano[i] != '\0'; i++) {
    if (num_romano[i] == 'I') soma += 1;
    else if (num_romano[i] == 'V') soma += 5;
    else if (num_romano[i] == 'X') soma += 10;
    else if (num_romano[i] == 'L') soma += 50;
    else if (num_romano[i] == 'C') soma += 100;
    else if (num_romano[i] == 'D') soma += 500;
    else if (num_romano[i] == 'M') soma += 1000;
    else return -1;
  }
  if (soma == 0) return -1;
  else
    return soma;
}
