int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strrev(char *str)
{
	int	end;
	int	start;
	char	tmp;

	if(!str)
		return(0);
	end = ft_strlen(str) - 1;
	start = 0;
	while(start < end)
	{
		tmp = str[end];
		str[end] = str[start];
		str[start] = tmp;
		end --;
		start ++;
	}
	return (str);
}
// #include <stdio.h>

// int	main()
// {
// 	char str[] = "holaaa";
// 	printf("%s\n", str);
// 	ft_strrev(str);
// 	printf("%s\n", str);
// 	return(0);
// }