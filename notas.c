#include <stdio.h>

int main(void) {
  int choice;
  FILE *fp;
  int c;
  while (1) {
    printf("Hola, soy la app de notas\n");
    printf("1) Ver notas\n");
    printf("2) Agregar nota\n");
    printf("3) Borrar todas las notas\n");
    printf("4) Salir\n");
    printf("Elegi algo: ");
    scanf("%d", &choice);
    c = getchar(); //sacamos el \n del buffer, rompe el codigo
    switch (choice) {
      case 1:
        fp = fopen("nota.txt", "r");
        printf("--------NOTAS--------\n");
        while ((c = fgetc(fp)) != EOF) {
          printf("%c", c);
        }
        printf("--------FIN--------\n");
        fclose(fp);
        break;
      case 2:
        fp = fopen("nota.txt", "a");
        printf("Que queres anotar?\n");
        char nota[100] = "";
        fgets(nota, 100, stdin);
        fprintf(fp, "%s\n", nota);
        fclose(fp);
        break;
      case 3:
        fp = fopen("nota.txt", "w");
        fclose(fp);
        break;
      case 4:
        EOF;
        return 0;
    }
  }
  return 0;
}
