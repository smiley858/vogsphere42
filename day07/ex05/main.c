#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab);

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	char **tab = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(tab);
	return (0);
}
