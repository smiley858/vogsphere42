#include <stdlib.h>
#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int		index;
	char	*head;

	index = 0;
	head = str;
	while (*head != 0)
	{
		head++;
		index++;
	}
	return (index);
}

char					*strcpy_spe(char *dest, char *src)
{
	char	*mem;

	mem = dest;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (mem);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*to_return;
	t_stock_par		*tab;
	int				index;
	int				length;

	index = 0;
	if (!(tab = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	to_return = tab;
	while (index < ac)
	{
		length = ft_strlen(av[index]);
		tab[index].size_param = length;
		tab[index].str = av[index];
		tab[index].copy = strcpy_spe(malloc(sizeof(char) * length), av[index]);
		tab[index].tab = ft_split_whitespaces(av[index]);
		index++;
	}
	tab[index].str = 0;
	return (to_return);
}
