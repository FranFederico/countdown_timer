#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  // Stores the total number of seconds remaining to countdown
  int seconds = 0;

  /* Prompt the user for the total number of seconds to countdown and store
     the number into the variable seconds */
  printf("Seconds: ");
  scanf("%d", &seconds);

  printf("\n");

  // Limits the countdown to one minute
  if(seconds > 60){
    printf("Values over 60 seconds not allowed\n");
    return 1;
  }

  // Continue the loop as long as there are seconds remaining.
  while (seconds > 0)
  {


   // carriage return \r to return the cursor to the same line

    printf("\r%02d", seconds);

    fflush(stdout);

    clock_t stop = clock() + CLOCKS_PER_SEC;

  // This loop will thus cause the program to pause for one second.
    while (clock() < stop) { }

    // Decrement seconds as another second has passed
    seconds--;
  }

  // Output time's up when the timer reaches zero
  printf("\rTime's up!\n");

  return 0;
}
