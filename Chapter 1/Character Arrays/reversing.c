#include<stdio.h>

// a program that reverses a string and prints it out line by line

#define MAXLINE 1000

int mgetline(char ray[], int lim);
void reverse(char to[]);

int main() {
  char line[MAXLINE];
  int length;

  while((length = mgetline(line, MAXLINE)) > 0) {
    reverse(line);
    printf("%s\n",line);
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

void reverse(char ray[]) {
  int i, j;
  char temp;

  //get to the null character
  for(i = 0; ray[i] != '\0'; i++) {
    ;
  }
  //select character before the null character
  i--;

  //if the character before the end is the new line, then go back another
  if(ray[i] == '\n') {
    i--;
  }


  j = 0;
  while(j < i) { //switch letters until the everything has been reversed.
    temp = ray[j];
    ray[j] = ray[i];
    ray[i] = temp;
    i--;
    j++;
  }
}
