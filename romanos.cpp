#include "./romanos.hpp"
int romanos_para_decimal(char const * num_romano) {
  int soma = 0;
  for (int i = 0; num_romano[i] != '\0'; i++) {
    if (num_romano[i] == 'I') {
      if (num_romano[i + 1] != '\0' &&  (num_romano[i + 1] == 'V' ||
          num_romano[i + 1] == 'X')) soma -= 1;
      else
        soma += 1;
    } else if (num_romano[i] == 'V') {
      soma += 5;
    } else if (num_romano[i] == 'X') {
      if (num_romano[i + 1] != '\0' &&  (num_romano[i + 1] == 'L' ||
          num_romano[i + 1] == 'C')) soma -= 10;
      else
        soma += 10;
    } else if (num_romano[i] == 'L') {
      soma += 50;
    } else if (num_romano[i] == 'C') {
      if (num_romano[i + 1] != '\0' &&  (num_romano[i + 1] == 'D' ||
          num_romano[i + 1] == 'M')) soma -= 100;
      else
        soma += 100;
    } else if (num_romano[i] == 'D') {
      soma += 500;
    } else if (num_romano[i] == 'M') {
      soma += 1000;
    } else {
      return -1;
    }
  }
  return soma;
}
