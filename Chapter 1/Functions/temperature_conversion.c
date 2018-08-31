#include<stdio.h>

/* a program to convert temperatures using functions. The program does the same
thing as the program in Varaibles and Loops, except that this program is using
functions */

double fahrToCelsius(double fahr);
double celsiusToFahr(double cels);

int main() {
  int max;
  max = 200;

  for(int i = 0; i <= max; i += 20) {
    printf("Fahrenheit\t Celsius\n");
    printf("%10d\t %7.2f\n", i, fahrToCelsius(i));
  }
}

double fahrToCelsius(double fahr) {
  return ((fahr - 32) / 1.8);
}

double celsiusToFahr(double cels) {
  return (cels * 1.8 + 32);
}
