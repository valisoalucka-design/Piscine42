#include <unistd.h>

void ft_print_numbers (void)
{
	char	*a;
	a = "1234567890";
	write (1, a, 10);
}

int main (void)
{
	ft_print_numbers ();
	return (0);
}
