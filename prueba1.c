#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  fp = fopen("word.txt", "r");
  int c;
  int count = 1;
  int temp_c;
  while ((c = fgetc(fp)) != EOF) {
    if (c == temp_c) count++;
    else if (count != 1) {
      printf("%d%c", count, c);
      count = 1;
    }
    else printf("%c", c);
    temp_c = c;
  }
  fclose(fp);
  return 0;
}
