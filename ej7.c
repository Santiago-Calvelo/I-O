#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a = 0;
  int b = 0;
  int num = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  for (int i = 0; i < n; i++) {
    num = rand() % b + a;
    printf("%d\n", num);
    num = 0;
  }
  return 0;
}
