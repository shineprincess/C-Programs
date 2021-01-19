#include <stdio.h>

int main(void) {
  printf("Amicable Numbers \n");

  int f_num , s_num , i;

  int f_DivisorSum = 0;
  int s_DivisorSum = 0;

  printf("Enter 2 numbers to check if Amicable or not: ");
  scanf("%d %d",&f_num , &s_num);

  for(i=1;i< f_num;i++) {
    if(f_num % i == 0)
      f_DivisorSum = f_DivisorSum + i; 
  }

  for(i=1;i< s_num;i++) {
    if(s_num % i == 0)
      s_DivisorSum = s_DivisorSum + i; 
  }

  if ((f_num == s_DivisorSum) && (f_num == s_DivisorSum))
    printf("%d and %d are  Amicable numbers\n",f_num,s_num);
  else
    printf("%d and %d are not Amicable numbers\n",f_num,s_num);

  return 0;
}

