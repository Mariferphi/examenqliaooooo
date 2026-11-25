#include <unistd.h>

int	sch_wds(char *str1, char *str2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while(str2[j])
	{
		if(str1[i] == str2[j])
			i++;
		j++;
	}
	if(str1[i] == '\0' && str2[j] == '\0')
		return(1);
	return(0);
}
int	main(int argc, char **argv)
{
	int	i;
	if(argc == 3)
	{
		i = 0;
		while(argv[1][i])
		{
			if(sch_wds(argv[1], argv[2]))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}