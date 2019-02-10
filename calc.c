#include <stdio.h> //for printf
#include <stdlib.h> //for strtol
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"


//Accept two integer input from a command line, output sum, difference (first input - second input),
//product, divison (first input - second input)
int main(int argc, char *argv[]) {

  //If just ./calc is input, these will be displayed as help, and the function excecuton finishes.
  if (argc == 1)
  {
    printf("This takes two integers (./calc arg1 arg2) and outputs the sum, the differece, the product, and the divison\n" );
    printf("\nInput example: ./calc 10 3 \n");
    printf("\nDivision will be displayed as quotient + fractional remiander \n");
    printf("\nOutput example for division: 10/3 = 3 + 1/3\n");
    printf("\nYou cannot type 0 for arg2 since you cannot divide by 0\n");
    printf("\nIf there are more than two input for integers, first two inputs are considered and from the third input will be ignored\n");
    printf("\nIf characters or strings are input, these will be considered as integer 0\n");

    return 0;
  }

  //If there is one integer input, then it will be displayed , and the function excecuton finishes..
  if (argc == 2)
  {
    printf("You need two integers as input values\n");

    return 0;
  }

  //change type from char to int
  int arg1 = strtol( argv[1], NULL, 10);
  int arg2 = strtol( argv[2], NULL, 10);

  int sum = add( arg1, arg2);
  int dif = sub( arg1, arg2);
  int pro = mul( arg1, arg2);

  printf("%d + %d = %d\n", arg1, arg2, sum);
  printf("%d - %d = %d\n", arg1, arg2, dif);
  printf("%d * %d = %d\n", arg1, arg2, pro);

  //make sure the second input is nonzero to avoid 0 division error.
  if (arg2 != 0)
  {
    //Assuming that a/b == -a/-b so if both input is negative,
    //flip the signs
    if (arg1 < 0 && arg2 < 0)
    {
      arg1 = arg1*-1;
      arg2 = arg2*-1;
    }
    int quo = quot( arg1, arg2);  //quotient
    int rem = remain( arg1, arg2); //remainder
    int gcd = Gcd( rem, arg2);  //greatest common divisor

    //if remainder is zero, display only quotient
    if (rem == 0)
    {
      printf("%d / %d = %d\n", arg1, arg2, quo);
    }
    
    else
      printf("%d / %d = %d + %d/%d\n", arg1, arg2, quo, rem/gcd, arg2/gcd);
  }

  //if the second input is 0, output the error message.
  else{
    printf("You cannot divide by 0\n");
  }
  return 0;
}
