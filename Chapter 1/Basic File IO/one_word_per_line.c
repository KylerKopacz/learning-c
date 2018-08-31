#include<stdio.h>

// a program to print out one word per line
#define IN 1
#define OUT 0

int main() {
  int c, state;
  state = OUT;

  while((c = getchar()) != EOF) {
    if(state == IN) {
      putchar(c);
    }
    if(c == '\n' || c == '\t' || c == ' ') {
      state = OUT;
      if(c != '\n') {
        putchar('\n');
      }
    } else if(state == OUT) {
      state = IN;
      putchar(c);
    }
  }
}
