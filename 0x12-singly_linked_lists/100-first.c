#include <stdio.h>

void first_sentence(void) __attribute__ ((constructor));

/**
 * first_sentence - prints and allow sentence before the main
 * function is executed
 *  __attribute__ ((constructor)) conversation of a sentence
 *  to be called before the main
 */
void first_sentence(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
