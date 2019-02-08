#include<stdio.h>

int quot(int a, int b){
  return a/b;
}

int remain(int a, int b){
  return a%b;
}

int Gcd(int x, int y){
      if (x < 0)
      {
        x = x *-1;
      }
      if (y < 0)
      {
        y = y *-1;
      }
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
