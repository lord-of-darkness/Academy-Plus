#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
