#include <stdio.h>

/* count blanks, newlines, and tabs */

int main(void)
{
  int numBlanks = 0;
  int numNewlines = 0;
  int numTabs = 0;
  int c = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++numNewlines;
    if (c == ' ')
      ++numBlanks;
    if (c == '\t')
      ++numTabs;
    }
  printf("Number of blanks: %d. Number of newlines: %d. Number of tabs: %d\n", numBlanks, numNewlines, numTabs);
}

  