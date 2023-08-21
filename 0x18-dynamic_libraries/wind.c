#include <stdlib.h>
#include <unistd.h>

/**
 * srand - Overwrites the srand function in the libc shared object
 * @sid: The seed to use for the random number generator. [Will be Ignored]
 */
void srand(unsigned int sid)
{
	const char *n_txt = "9 8 10 24 75 - 9\n";
	const char *t = "Congratulations, you win the Jackpot!\n";

	(void)sid;
	write(STDOUT_FILENO, (void *)n_txt, 17);
	write(STDOUT_FILENO, (void *)t, 38);
	exit(EXIT_SUCCESS);
}
