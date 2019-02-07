#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"

void main(int argc, char *argv[]) {

  int sum = add( atoi(argv[1]), atoi(argv[2]));
  int dif = sub( atoi(argv[1]), atoi(argv[2]));
  printf("%d\n", sum);
  printf("%d\n", dif);
}
