#include <unistd.h>

void ft_ft (int *nbr)
{
	write (1, &nbr, 2);
}

int main (void)
{
	int	a;
	a = 42;
	nbr = &a;
	ft_ft ();
}
