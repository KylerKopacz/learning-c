#include<stdio.h>

// a program to create a histogram for the words passed into the program
#define IN 1
#define OUT 0

int main() {
  int wordLength, c, state, arraySize;

  // variable to easily change the size of the array and loops
  arraySize = 26;
  int lengths[arraySize];

  //setting all values to 0 initially
  for(int i = 0; i < arraySize; i++) {
    lengths[i] = 0;
  }

  state = OUT;
  wordLength = 0;
  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t') {
      ++lengths[wordLength - 1];
      wordLength = 0;
      state = OUT;
    } else if(state == OUT) {
      state = IN;
    }
    if(state == IN) {
      wordLength++;
    }
  }

  //printing all of the results
  for(int i = 0; i < arraySize; i++) {
    printf("Words with %d letters: %d\n", i + 1, lengths[i]);
  }
}
