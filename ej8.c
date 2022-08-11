#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) { 
  srand(time(NULL));
  int n = rand() % 1000 + 1;
  int choise = 0;

  for (int i = 0; i < 5; i++) {
    printf("%d\n", n);
    scanf("%d", &choise);
    if (choise < n) printf("El numero es mayor\n");
    if (choise > n) printf("El numero es menor\n");
    if (choise == n) {
      printf("Correcto\n");
      exit(0);
    }
  }
  return 0;
}
