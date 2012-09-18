#include <stdio.h>

int main(void)
{
  int c = 0;
  int ndigit = 0;
  int nother = 0;
  int nwhite = 0;
  int i = 0;

  
  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit;
    else if (c == ' ' || c == '\n' || c == 't')
      ++nwhite;
    else
      ++nother;
  printf("Digits:");
  for (i = 0; i < ndigit; ++i)
   
    putchar('#');
  printf("\n");
  printf("Whitespace:");
  for (i = 0; i < nwhite; ++i)
   
    putchar('#');
  printf("\n");
  printf("Other:");
  for (i = 0; i < nother; ++i)
    
    putchar('#');
  printf("\n");
}

  
