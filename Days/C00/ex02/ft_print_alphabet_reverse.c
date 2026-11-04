#include <unistd.h>

void ft_print_alphabet_reverse (void)
{
	char	*a;
	a = "zyxwvutsrqponmlkjihgfedcba";
	write (1, a, 27);
}

int main (void)
{
	ft_print_alphabet_reverse ();
}
