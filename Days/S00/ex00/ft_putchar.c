#include <unistd.h>

void  ft_putchar (void)
{
	char	a;
	a = 'M';

	write (1, &a, 1);
}

int main (void)
{
	ft_putchar ();
}
