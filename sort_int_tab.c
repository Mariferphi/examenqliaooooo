void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while(i + 1 < size)
	{
		if(tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			if (i > 0)
				i--;
		}
		else
		i++;
	}
}