#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/*
  Print input one word per line
*/

int main()
{
  int c;
  int state = OUT;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      state = IN;
      putchar(c);
    }
    if ((c == ' ' || c == '\n' || c == '\t') && state == IN) {
      state = OUT;
      printf("\n");
    }
    if ((c == ' ' || c == '\n' || c == '\t') && state == OUT)
      ;
  }
}

