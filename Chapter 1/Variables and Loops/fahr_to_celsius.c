#include<stdio.h>

/* A temperature converter, written in C */

/* These are symbolic constants. basically anywhere where these names are found,
they are replaced with the thing that comes after it. It can be any type.
*/

#define UPPER 300 /* upper limit of table */
#define LOWER 0 /* lower limit of table */
#define STEP 20 /* increment */

int main() {
  for(float fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3.0f %6.1f\n", fahr, (fahr - 32) * (5.0/9.0));
  }
}
