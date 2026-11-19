#include<stdio.h>

int	main(void)
{
	int	i;
	int	*tab;

	i = 0;
	&tab[i] = {0, 1, 2, 3, 4, 5};
	printf("%d\n",  tab[i]);
}


