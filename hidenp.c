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
		{
			i++;
			if(str1[i] == '\0')
				return(1);
		}
		j++;
	}
	return(0);
}
int	main(int argc, char **argv)
{

	if(argc == 3)
	{
		sch_wds(argv[1], argv[2])? write(1, "1", 1) : write(1, "0", 1);
	}
	write(1, "\n", 1);
	return(0);
}


//la misma wea que el wdmatch pero retornando 1 o 0. 