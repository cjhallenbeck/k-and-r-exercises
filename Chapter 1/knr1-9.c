#include <stdio.h>

int c;
int previous = 0;

int main(void)
{
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      previous = c; 
    }
    if (c == ' ') {
      if (previous != c) {
        putchar(c);
        previous = c;
      }   
    }
  }
}  

