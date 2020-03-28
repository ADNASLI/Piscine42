#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_combn(int n)
{
	
}

int		main(void)
{
	int n;

	n = 3;
	ft_print_combn(n);
return(0);
}
