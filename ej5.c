#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int char_count = 0;
  int line = 0;
  int word = 0;
  int in_word = 0;
  while ((c = fgetc(fp vvvvvvvvvvvv)) != EOF) {
    if (c != '\n' && c != '\t' && c != ' ')
      in_word = 1;
    else {
      if (in_word != 0) word++;
      in_word = 0;
    }
    char_count++;
    if (c == '\n') line++;
  }
  printf("Palabras: %d, Lineas: %d, Caracteres: %d\n", word, line, char_count);
  fp(fclose);
  return 0;
}
