#include<stdio.h>

// a program to count newlines, tabs, and spaces
int main() {
  int c, nl, nt, ns;

  nl = 0;
  nt = 0;
  ns = 0;
  while((c = getchar()) != EOF) {
    if(c == '\t') {
      ++nt;
    }
    if(c == ' ') {
      ++ns;
    }
    if(c == '\n') {
      ++nl;
    }
  }
  printf("There are %d spaces, %d tabs, and %d new lines.",ns,nt,nl);
}
