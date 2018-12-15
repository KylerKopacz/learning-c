#include<stdio.h>
#include<math.h>


int htoi(char s[]) {
  int index, power_count = 0;
  int converted_number = 0;
  
  //find the last character in the string (also finds length)
  for(index = 0; s[index] != '\0'; index++) {}

  //iterate over the values from right to left and add
  //to the converted_number and power_count each time
  for(index--; index >= 0; index--, power_count++) {
    //lowercase a - f
    if(s[index] >= 'a' && s[index] <= 'f') {
      converted_number += (s[index] - 'a' + 10) * pow(16, power_count);
      continue;
    }

    //uppercase A - F
    if (s[index] >= 'A' && s[index] <= 'F') {
      //we have to see how the placement goes into the factor of 16
      converted_number += (s[index] - 'A' + 10) * pow(16, power_count);
      continue;
    }

    //numbers
    if(s[index] >= '0' && s[index] <= '9') {
      converted_number += (s[index] - '0') * pow(16, power_count);
      continue;
    }
    
    //break if we find an X
    if(s[index] == 'x' || s[index] == 'X') {
      break;
    }
  
    //if this is ever reached, then the person entered a weird hex number
    //so return this number.
    return -1;
  }

  return converted_number;
}

int main() {
  char test1[] = "AAAAA";
  printf("%d\n", htoi(test1));

  char test2[] = "0x1234BBAC";
  printf("%d\n", htoi(test2));

  char test3[] = "BACFAB";
  printf("%d\n", htoi(test3));
}