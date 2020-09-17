//Author: Shang Yuan Lim szl6038@psu.edu

#include <stdio.h>
#include<stdlib.h>
#include<readline/readline.h>

int n;

int digit_sum(n) {
  if (n <= 9){
    return n;
  }
  else {
    return (n%10 + digit_sum(n/10));
  }
}

int main(void) {
  
  int number = atoi(readline("Enter an int: "));

  printf("sum of digits of %d is %d.\n", number, digit_sum(number));

  return 0;
}

