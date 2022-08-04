#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &m);
    sum += m;
  }
  printf("%d\n", sum);
  return 0;
}
