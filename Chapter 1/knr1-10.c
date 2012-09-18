#include <stdio.h>

/* copy input to output, replacing tab with \t, backspace with
 *  \b, and backslash with \\ 
 */

int main(void)
{
  int c;
 
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\'); 
      putchar('t');
    }
    if (c == '\b') {
      putchar('\\');
      putchar('b');
    }
    if (c == '\\') {
      putchar('\\');
      putchar('\\');
    }
    if (c != '\t') 
      if (c != '\b')
        if (c != '\\')
          putchar(c);
  }
}