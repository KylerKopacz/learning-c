#include<stdio.h>

/* A program to copy the contents of a file to a character stream */
int main() {
  // we have to make c big enough to hold the EOF value + any character.
  // if we used a char, then we would only have one byte and that would not
  // be enough space.
  int c;

  //what is the value of EOF though?
  printf("The value of EOF is %d\n", EOF);

  while((c = getchar()) != EOF) {
    putchar(c);
  }
}
