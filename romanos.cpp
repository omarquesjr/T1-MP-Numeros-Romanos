#include "./romanos.hpp"
// Converte de romanos para decimal
int romanos_para_decimal(char const * num_romano) {
  int soma = 0;
  // Percorre toda string advinda do ponteiro de algarismos romanos
  for (int i = 0; num_romano[i] != '\0'; i++) {
    // Trata o algarismo romano I
    if (num_romano[i] == 'I') {
      // Trata casos de subtração envolvendo o algarismo I
      if (num_romano[i + 1] != '\0' &&  (num_romano[i + 1] == 'V' ||
          num_romano[i + 1] == 'X')) soma -= 1;
      // Trata casos de soma envolvendo o algarismo I
      else
        soma += 1;
    // Trata casos de soma envolvendo o algarismo V
    } else if (num_romano[i] == 'V') {
      soma += 5;
    // Trata o algarismo X
    } else if (num_romano[i] == 'X') {
      // Trata casos de subtração envolvendo o algarismo X
      if (num_romano[i + 1] != '\0' &&  (num_romano[i + 1] == 'L' ||
          num_romano[i + 1] == 'C')) soma -= 10;
      // Trata casos de soma envolvendo o algarismo X
      else
        soma += 10;
    // Trata casos de soma envolvento o algarismo L
    } else if (num_romano[i] == 'L') {
      soma += 50;
    // Trata o algarismo C
    } else if (num_romano[i] == 'C') {
      // Trata casos de subtração envolvendo o algarismo C
      if (num_romano[i + 1] != '\0' &&  (num_romano[i + 1] == 'D' ||
          num_romano[i + 1] == 'M')) soma -= 100;
      // Trata casos de soma envolvendo o algarismo C
      else
        soma += 100;
    // Trata casos de soma envolvendo o algarimso D
    } else if (num_romano[i] == 'D') {
      soma += 500;
    // Trata casos de soma envolvendo o algarismo D
    } else if (num_romano[i] == 'M') {
      soma += 1000;
    // Trata algarismos inválidos
    } else {
      return -1;
    }
  }
  // Retorna o número em decimal
  return soma;
}
