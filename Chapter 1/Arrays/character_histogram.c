#include<stdio.h>

// a program to count the frequency of characters in input
int main() {
  int c;
  int lowerChars[26], upperChars[26];

  // setting arrays to be 0 initially
  for(int i = 0; i < 26; i++) {
    lowerChars[i] = 0;
    upperChars[i] = 0;
  }

  //finding the distributions
  while((c = getchar()) != EOF) {
    if(c >= 'a' && c <= 'z') {
      ++lowerChars[c-'a'];
    } else if(c >= 'A' && c <= 'Z') {
      ++upperChars[c-'A'];
    }
  }

  //printing the results
  for(int i = 0; i < 26; i++) {
    putchar(i + 'A');
    printf(" has appeared %d times\n", upperChars[i]);
    putchar(i + 'a');
    printf(" has appeared %d times\n", lowerChars[i]);
  }
}
