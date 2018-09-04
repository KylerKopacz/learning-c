#include<stdio.h>

// a program to remove trailing tabs and spaces from lines in input

#define MAXLINE 1000

int mgetline(char ray[], int lim);
int fixends(char ray[]);

int main() {
  char line[MAXLINE];
  int length;

  while((length = mgetline(line, MAXLINE)) > 0) {
    if(fixends(line) > 0) {
      printf("%s",line);
    }
  }
}

int mgetline(char ray[], int lim) {
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    ray[i] = c;
  }
  if (c == '\n') {
    ray[i] = c;
    ++i;
  }
  ray[i] = '\0';
  return i;
}

int fixends(char ray[]) {
  int i;

  //go to the end of the line
  for(i = 0; ray[i] != '\n'; i++)
    ;
  i--; // if the line does not have anything on it

  //work back from the end, ignoring all the spaces and tabs
  for(; (ray[i] == ' ') || (ray[i] == '\t'); i--)
    ;

  //we have reached the point where i is not a space or a tab, so we end the
  //string here
  if(i >= 0) {
    i++;
    ray[i] = '\n';
    i++;
    ray[i] = '\0';
  }
  return i;
}
