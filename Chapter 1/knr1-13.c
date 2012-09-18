/* Prints a histogram of lengths.                      */
/* Note that a "word" is loosely defined as a sequence */
/* of non-whitespace characters                        */

#include <stdio.h>
int main(void)
{
  int wordLength = 0;
  int c = 0;
  int i = 0 ;
  int n = 0;
  int charArray[20];
 
/* For loop is used to print each character to the screen */
  
  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\n' || c == '\t') && wordLength != 0) {
      for (i = 0; i < n; ++i)
        putchar(charArray[i]);
     
      putchar(':');
     
      for (i = 1; i <= wordLength; ++i)
        putchar('#');
      
      putchar('\n');
      wordLength = 0;
      n = 0;
    }

/* NULL statement. If the first char entered is a blank, get next character */  

    else if ((c == ' ' || c == '\n' || c == '\t') && wordLength == 0)
      ;

/* We are in a word. Add 1 to the wordLength, store the character in an array */
/* then advance the array position so we can store the next character         */

    else {  
      ++wordLength;
      charArray[n] = c;
      ++n;
    }
  }
}      