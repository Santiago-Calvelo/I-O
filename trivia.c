#include <stdio.h>

int main(void) {
  FILE *fp;
  fp = fopen("questions.txt", "r");
  int choice, c, q;
  int i = 5;
  int l = 0;
  int respuesta;
  int points = 0;
  printf("Quieres jugar mi trivia?\n");
  printf("1) Si\n");
  printf("2) No\n");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Divertite\n");
      for (int j = 0; j < 3; j++) {
        while(l < i) {
          c = fgetc(fp);
          if (c == '\n') l++;
          printf("%c", c);
          if (l == 5) respuesta = 4;
          else if (l == 10) respuesta = 4;
          else if (l == 13) respuesta = 2;
        }
        i += 5;
        printf("\n");
        scanf("%d", &q);
        if (q == respuesta) {
          printf("Correcto!\n");
          points++;
        }
        else printf("Incorrecto\n");
      }
      printf("Tu puntaje es: %d\n", points);
    }
  else {
    printf("Adios\n");
    return 1;
  }

  fclose(fp);
  return 0;
}
