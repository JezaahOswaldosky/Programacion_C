#include <stdio.h>
#include <stdlib.h>

extern int errno;

int main() {
  FILE *fptr;

  errno = 0;
  fptr = fopen("C:\\Users\\Maestria_Sesion\\Desktop\\CURSO DE C Y C++\\CURSO DE C\\LECCION 6\\PRACTICA 8\\file1.txt", "r");
  if (fptr == NULL) {
    fprintf(stderr, "Error opening file. Error code: %d\n", errno);
    exit(EXIT_FAILURE);
  }

  fclose(fptr);
  return 0;
}
