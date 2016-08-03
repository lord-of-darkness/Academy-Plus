#include <unistd.h>

char 	ft_putchar(char c)
{
	write(1, &c, 1);

	return (0);
}

void	ft_is_negative(int i)
{
	if(i < 0)
	{
	  ft_putchar('N');
	}
	else
	{
 	  ft_putchar('P');
	}
}

int	main()
{
	ft_is_negative(342);

	return (0);
}
