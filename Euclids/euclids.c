#include "euclids.h"

/*
   General Explanation:
    Find the greatest common factor (GCD) of two different positive integers.

   Euclids Rules:
    1) If A = 0 then GCD(0,B) = B, as 0 / B is 0, no remainder.
    2) If B = 0 then GCD(A,0) = A, as A / 0 is 0, is undefined, so it's zero.
    3) B cannot be bigger than A, or the algorithm will always output 0, the remainder will be 0 always, and thus the awnser is B.
    4) If A = B then the greates common factor is itself, A or B.

   General Explaination:
    1) [Ensure] A greater than or equal to B.
    2) [Find Remainder] Divide A by B and let R be the remainder.
    3) [Is it zero?] If R = 0, algorithm terminates, answer is B.
    4) [Reduce.] Set A <- B,B <- R, and go back to the second step.

   General Notes:
    - The modulo operator is different in different programming languages, in C the modulo operator is equivalent to the remainder of A/B, that is if you hand divided the remainder is what is outputted.
    - Change the datatypes from int to a bigger data type to do larger numbers.
 */

int main(int argc, char *argv[]) {
   int m = atoi(argv[1]);
   int n = atoi(argv[2]);

   printf("Final Number: %d\n", euclids(&m, &n));
   return(0);
}

int euclids(int *numberOne, int *numberTwo) {
   int buffer = 0;
   if (*numberOne == 0) {
      return(*numberTwo);
   }
   else if (*numberTwo == 0) {
      return(*numberOne);
   }

   if (*numberOne < *numberTwo) {
      buffer     = *numberTwo;
      numberTwo  = numberOne;
      *numberOne = buffer;
   }

   while (*numberTwo != 0) {
      int buffer = (*numberOne % *numberTwo);
      *numberOne = *numberTwo;
      *numberTwo = buffer;
   }

   return(*numberOne);
}
