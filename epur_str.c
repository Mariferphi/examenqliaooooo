#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	first_w;

	if(argc == 2)
	{
		i = 0;
		first_w = 1;
		while(argv[1][i])
		{
			while(argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			if(argv[1][i] && !first_w)
				write(1, " ", 1);
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			first_w = 0;
		}
	}
	write(1, "\n", 1);
	return(0);
}



