#include <unistd.h>
#include <stdio.h>

void	hex_(int nb)
{
	char	hex[] = "0123456789abcdef";

	if(nb >= 16)
		hex_(nb / 16);
	write(1, &hex[nb % 16], 1);
}
int	simpl_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return(nb);
}

int	main(int argc, char **argv)
{
	int nb; 

	if(argc == 2)
	{
		nb = simpl_atoi(argv[1]);
		hex_(nb);
	}
	 
	write(1, "\n", 1);
	return (0);
}