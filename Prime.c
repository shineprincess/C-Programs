#include <stdio.h>

//Prime numbers are natural numbers which is only divisible by self and 1 
// ex -> 7 number is divide by itself and 1 it must be a natural number
// x will only divide when the number is in the range between 2 to x-1

int main(void) {
  printf("Prime Number \n");

  int num , i;
  printf("Enter a number");
  scanf("%d ",&num);

  for(i=2;i<=num-1;i++)
    if(num % i == 0)
      break;
  
  if(i == num)
    printf("%d is a prime  number",num);
  else
    printf("%d is not a prime  number",num);

  return 0;
}