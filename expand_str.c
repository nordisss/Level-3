#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx++;
	while (str[idx] != '\0')
	{
		if (str[idx] == ' ' || str[idx] == '\t')
		{
			if (str[idx + 1] > ' ' && str[idx + 1] != '\0')
				ft_putchar(' ');
		}
		else if (str[idx] != ' ' && str[idx] != '\t')
			ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
