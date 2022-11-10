#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char buffer[100];
  int i = 0;
  int c;
  while ((fgets(buffer, 100, stdin)) != NULL) {
    while (buffer[i] != '\n') {
      if ((buffer[i] >= 'A' && buffer[i] <= 'Z') || (buffer[i] >= 'a' && buffer[i] <= 'z')) {
        c = buffer[i];
        printf("%c", c);
      } else if (buffer[i] >= '0' || buffer[i] <= '9') {
        int count = atoi(&buffer[i]) - 1;
        while (count != 0) {
          printf("%c", c);
          count--;
        }
      }
      i++;
    }
    i = 0;
  }
  return 0;
}
