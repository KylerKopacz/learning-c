#include<limits.h>
#include<float.h>
#include<stdio.h>

// a program that lists the limits of common types, which is machine dependant.
// These values are specific to my mid 2017 macbook pro 13"
int main() {
  printf("Char Max: %d\n",CHAR_MAX );
  printf("Char Min: %d\n",CHAR_MIN );
  printf("Int Max: %d\n",INT_MAX );
  printf("Int Min: %d\n",INT_MIN );
  printf("Long Max: %ld\n",LONG_MAX );
  printf("Long Min: %ld\n",LONG_MIN );
  printf("Short Max: %d\n",SHRT_MAX );
  printf("Short Min: %d\n",SHRT_MIN );
  printf("Unsigned Char Max: %u\n",UCHAR_MAX);
  printf("Unsigned Int Max: %u\n",UINT_MAX);
  printf("Unsigned Long Max: %lu\n",ULONG_MAX);
  printf("Unsigned Short Max: %u\n",USHRT_MAX);
}
