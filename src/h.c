#include "../include/main.h"
#include <stdio.h>

void PrintTXT(const char* fname)
{
  FILE* fin = fopen(fname, "r");
  if (fin == NULL) {
    perror("Error opening file");
    return;
  }
  char s[256];
  while (fgets(s, sizeof(s), fin) != NULL)
  {
    printf("%s", s);
  }
  printf("\n");
  fclose(fin);
}

int Count(const char* fname) {
  FILE* fin = fopen(fname, "r");
  if (fin == NULL) {
    perror("Error opening file");
    return 0;
  }

  char str[256];
  int k = 0;

  while (fgets(str, sizeof(str), fin) != NULL) {
    for (int i = 0; str[i + 3] != 0; i++) {
      if (str[i] == str[i + 1] && str[i + 1] == str[i + 2] && str[i + 2] == str[i + 3])
        k++;
    }
  }

  fclose(fin);
  return k;
}