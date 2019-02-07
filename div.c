#include<stdio.h>

int Gcd(int, int);

void divi(int a, int b, int* ary){

  int temp = a;
  int quotient = 0;
  while (temp >= b)
  {
     temp = temp - b;
     quotient++;
  }
  int g = Gcd(temp, b);
  ary[0] = quotient;
  ary[1] = temp/g;
  ary[2] = b/g;

}

int Gcd(int x, int y){
      int temp = x % y;
      while (temp > 0) {  // INV (prior to test):
          //    No integer > b evenly divides
          //    both a<entry> and b<entry>
          x = y;
          y = temp;
          temp = x % y;
      }
      //  b == Greatest common divisor of a and b
      return y;
  }
