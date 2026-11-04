#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (void)
{
	int	c;
       	c = 'v';
	ft_putchar (c);       
}
