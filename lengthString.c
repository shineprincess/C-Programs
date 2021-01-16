#include <stdio.h>

int main(void) {
  printf("String Length\n");

  char s[20];
  int i;
  printf("Enter a string");
  gets(s);
  // scanf("%s",&s[0]);
  // scanf("%s",s);
  for(i=0; s[i]!='\0';i++);
  printf("Length of a string is %d",i);
  return 0;
}