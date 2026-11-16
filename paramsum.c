#include <unistd.h>

static void	ptnb(int nb)
{
	char	c;
	if(nb >= 10)
		ptnb(nb/10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	if(argc)
	{
		int	i;
	
		i = 0;
		while(argv[i])
			i++;
		ptnb(i - 1);
	}
	write(1, "\n", 1);
	return (0);
}