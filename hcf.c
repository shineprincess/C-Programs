#include <stdio.h>

int main(void) {
  int num1, num2, H;
  printf("HCF of 2 Numbers...\n");

  printf("Enter 2 numbers to calculate the HCF of 2 numbers");
  scanf("%d %d",&num1,&num2);

  for(H = num1<num2 ? num1 : num2 ; H >=1 ; H--)
    if(num1 % H == 0 && num2 % H == 0)
    break;
  
  printf("HCF of %d and %d is %d ",num1,num2,H);
  return 0;
}