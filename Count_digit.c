#include <stdio.h>

int main(void) {
  printf("Count Digits \n");
  int num,i , count=0;
  printf("Enter a number of which you want to count a digit ");
  scanf("%d",&num);

  while(num!=0){
    num = num / 10;
    count++;
  }

  printf("Digits are %d",count);
  return 0;
}