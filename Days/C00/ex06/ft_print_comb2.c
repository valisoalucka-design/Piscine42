#include <unistd.h>

void ft_print_comb2 (void)
{
	int		a;
	int		b;
	int		d;
	int		e;
	char	x;
	char	y;
	a = 0;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			d = a / 10;
			e = a % 10;
			x = d + '0';
			y = e + '0';
			write (1, &x, 1);			
			write (1, &y, 1);			
			write (1, " ", 1);
			d = b / 10;
			e = b % 10;
			x = d + '0';
			y = e + '0';
			write (1, &x, 1);
			write (1, &y, 1);
			b++;
			write (1, ", ", 2);
		}
		a++;
	}

}


int main (void)
{
	ft_print_comb2 ();
}
