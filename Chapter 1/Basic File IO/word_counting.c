#include<stdio.h>

// a barebones program to count the number of lines in a file
#define IN 1
#define OUT 0

int main() {
  int c, nw, nl, nc, state;

  nw = nl = nc = 0;
  state = OUT;

  while((c = getchar()) != EOF) {
    ++nc;
    if(c == '\n') {
      ++nl;
    }
    if(c == '\n' || c == '\t' || c == ' ') {
      state = OUT;
    } else if(state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d characters, %d lines, %d words\n",nc, nl, nw);
}
