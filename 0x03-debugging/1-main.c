#include <stdio.h>

/**
<<<<<<< HEAD
* main - causes an infinite loop
* Return: 0
*/
=======
 * main - causes an infinite loop
 * Return: 0
 */
>>>>>>> ad2874b52abe76d1d3277199aa27205bca7d5407

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

<<<<<<< HEAD
	/* while (i < 10)*/
	/* {*/
	/* putchar(i);*/
	/* }*/
=======
	while (i < 10)
	{
		putchar(i);
	}
>>>>>>> ad2874b52abe76d1d3277199aa27205bca7d5407

	printf("Infinite loop avoided! \\o/\n");

	return (0);
<<<<<<< HEAD
}
=======
>>>>>>> ad2874b52abe76d1d3277199aa27205bca7d5407
