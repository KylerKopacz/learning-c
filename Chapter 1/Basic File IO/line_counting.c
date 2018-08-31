#include<stdio.h>

// a program to count the lines in inputted text
int main() {
  int c;
  int nl;

  nl = 0;
  while((c = getchar()) != EOF) {
    if(c == '\n') {
      ++nl;
    }
  }
  printf("There are %d lines in the text", nl);
}
