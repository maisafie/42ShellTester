#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	seconds

	seconds = 1;
	if (argc > 1)
		seconds = atoi(argv[1]);
	sleep(seconds);
	if (argc > 2)
	{
		write(2, argv[2], strlen(argv[2]));
	}
	return (0);
}
