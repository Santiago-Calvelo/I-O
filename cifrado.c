#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  char line[250] = "";
  char *filename = argv[1];
  int shift = atoi(argv[2]);
  FILE *fp;
  FILE *temp_file;
  fp = fopen(filename, "r");
  temp_file = fopen("temp.txt", "a");
  while (fgets(line, 250, fp) != NULL) {
    fprintf(temp_file, "%s", line);
  }
  fclose(fp);
  fclose(temp_file);
  temp_file = fopen("temp.txt", "r");
  fp = fopen(filename, "w");
  while (fgets(line, 250, temp_file) != NULL) {
    // cifrar
    for (int i = 0; i < 250; i++) {
      if (line[i] >= 'a' && line[i] <= 'z')
        line[i] = (((line[i] - 'a') + shift) % 26) + 'a';
      else if (line[i] >= 'A' && line[i] <= 'Z')
        line[i] = (((line[i] - 'A') + shift) % 26) + 'A';
    }
    fprintf(fp, "%s", line);
  }
  system("rm temp.txt");
  return 0;
}
