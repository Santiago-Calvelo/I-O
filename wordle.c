#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv) {
  char *dict[27] = {
    "gatos",
    "papas",
    "casas",
    "fuego",
    "jamon",
    "pibes",
    "raton",
    "ratas",
    "cinco",
    "siete",
    "nueve",
    "robar",
    "casar",
    "cazar",
    "matar",
    "sedar",
    "cebra",
    "araña"
  };
  char *intentos = "";
  int r = rand() % 28;
  char *bien = dict[r];
  printf("%s\n", dict[r]);
  for (int i = 0; i < 1; i++) {
    scanf("%s\n", &intentos);
    for (int j = 0; j < 5; j++) {
      if(strcmp(bien, intentos) == 0) {
        printf("Eureka\n");
        return 1;
      }
    }
  }
  return 0;
}
