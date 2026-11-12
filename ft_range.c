#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*tab;
	int	size;
	int	step;

	if (start > end)
	{
		size = (start - end) + 1;
		step = -1;
	}
	else
	{
		size = (end - start) + 1;
		step = 1;
	}
	tab = malloc(size * sizeof(int));
	if(!tab)
		return (0);
	i = 0;
	while (i < size)
	{
		tab[i++] = start;
		start += step;
	}
	return (tab);
}
#include <stdio.h>

int	main(void)
{
	int *tab;
	int start, end;
	int	i;
	int	size;


	start = 15;
	end = 3;
	size = (start > end)? (start - end) : (end - start);
	printf("start %d end %d\n", start, end);
	tab = ft_range(start, end);
	i = 0;
	while(i < size - 1)
	{
		printf("%d ,", tab[i]);
		i++;
	}
	printf("%d", tab[size]);
	free(tab);
}