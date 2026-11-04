#include <unistd.h>

int main (void)
{
	int	i;
	char*	a;
	i = 0;
	a = "coucou";

	while (i <= 4)
	{
		write (1, a, 6);
		i++;
	}
}
