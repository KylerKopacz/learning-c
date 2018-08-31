#include<stdio.h>

/* Program to count the number of characters */
int main() {
  long nc;

  nc = 0;
  while(getchar() != EOF) {
    ++nc;
  }

  printf("%ld", nc);
}
