#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

void main(int argc, char *argv[]) {

  int array_for_division[3];
  divi(atoi(argv[1]), atoi(argv[2]), array_for_division);
  int sum = add( atoi(argv[1]), atoi(argv[2]));
  int dif = sub( atoi(argv[1]), atoi(argv[2]));
  int pro = mul( atoi(argv[1]), atoi(argv[2]));
  printf("%d\n", sum);
  printf("%d\n", dif);
  printf("%d\n", pro);
  printf("%d + %d/%d\n", array_for_division[0], array_for_division[1], array_for_division[2]);
}
