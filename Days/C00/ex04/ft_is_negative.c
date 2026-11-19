#include <unistd.h>

void	ft_is_negative(int n)

{
	char	b;
	char	c;

	b = 'N';
	c = 'P';
	if (n < 10)
	{
		write(1, &b, 1);
	}
	else
	{
		write(1, &c, 1);
	}
}

int	main(void)
{
	ft_is_negative(20);
}
