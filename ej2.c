#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m;
  int suma = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &m);
    suma += m;
    if (m == 0) break;
  }
  printf("%d\n", suma);
  return 0;
}
