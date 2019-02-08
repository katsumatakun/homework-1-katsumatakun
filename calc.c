#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

void main(int argc, char *argv[]) {

  int arg1 = strtol( argv[1], NULL, 10);
  int arg2 = strtol( argv[2], NULL, 10);
  int sum = add( arg1, arg2);
  int dif = sub( arg1, arg2);
  int pro = mul( arg1, arg2);

  printf("%d + %d = %d\n", arg1, arg2, sum);
  printf("%d - %d = %d\n", arg1, arg2, dif);
  printf("%d * %d = %d\n", arg1, arg2, pro);
  if (arg2 != 0)
  {
    if (arg1 < 0 && arg2 < 0)
    {
      arg1 = arg1*-1;
      arg2 = arg2*-1;
    }
    int quo = quot( arg1, arg2);
    int rem = remain( arg1, arg2);
    int gcd = Gcd( rem, arg2);
    if (rem == 0)
    {
      printf("%d / %d = %d\n", arg1, arg2, quo);
    }
    else
      printf("%d / %d = %d + %d/%d\n", arg1, arg2, quo, rem/gcd, arg2/gcd);
  }
  else{
    printf("You cannot divide by 0\n");
  }
}
