# include "libft.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	int b = 1026;

	print_bits(sizeof(b), &b);

	return (0);
}