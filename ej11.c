#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int word = 0;
  while ((c = fgetc(fp)) != EOF) {
    if (c != '\n' && c != '\t' && c != ' ')
      printf("%c", c);
  }
  printf("\n");
  fclose(fp);
  return 0;
}
