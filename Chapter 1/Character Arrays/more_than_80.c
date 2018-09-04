#include<stdio.h>

// a program to print all of the lines that are longer than 80 characters

#define MAXLINE 1000

int longline(char ray[]);

int main() {
  char line[MAXLINE];
  int res;

  while((res = longline(line)) != 0) {
    if(res >= 80) {
      printf("Length: %d\t%s\n", res, line);
    }
  }
}

int longline(char ray[]) {
  int c, length, i;

  length = 0;
  for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    ray[i] = c;
    length++;
  }
  if(c == '\n') {
    ray[i] = c;
    i++;
    length++;
  }
  ray[i] = '\0';

  return length;
}
