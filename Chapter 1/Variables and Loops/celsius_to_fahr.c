#include<stdio.h>

/* a program to convert celsius temperatures into fahrenheit */

int main() {
  for(float celsius = 0; celsius <= 300; celsius = celsius + 20) {
    printf("%3.0f %6.2f\n", celsius, celsius * 1.8 + 32);
  }

}
