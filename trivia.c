#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int choice, q1;
  int points = 0;
  printf("Quieres jugar una trivia?\n");
  printf("1: Por supuesto\n");
  printf("2: Salir\n");
  scanf("%d", &choice);
  while (1) {
    switch (choice) {
      case 1:
        printf("De donde sale la leche con chocolate?\n");
        printf("1: Vacas marrones\n");
        printf("2: Del nesquik\n");
        scanf("%d", &q1);
        switch (q1) {
          case 1:
            points++;
            system("clear");
            printf("%d\n", points);
            continue;
        case 2:
          continue;
      }
        continue;
      case 2:
      printf("Estas atrapado hasta que la trivia termine, que empiece el juego\n");
        printf("De donde sale la leche con chocolate?\n");
        printf("1: Vacas marrones\n");
        printf("2: Del nesquik\n");
        scanf("%d", &q1);
        switch (q1) {
          case 1:
            points++;
            system("clear");
            printf("%d\n", points);
            continue;
          case 2:
            continue;
      }
        continue;
    }
  }
  return 0;
}
