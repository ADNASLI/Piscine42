main C02

Ex00

int	main(void)
{
	char src[] = "Salut";
	char dest[20] = "Lajkskjsksjd";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
}

Ex01

int	main (void)
{
	int n;
	char	src[] = "Salut";
	char	dest[20] = "dhkgdaulgcrcblyiu";

	n = 10;
	
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}

Ex02

int	main (void)
{
	int y;
	char str[] = "dhsfchks";
	y = ft_str_is_alpha(str);
	printf("%d", y);
}

Ex03

int main (void)
{
	int i;
	char str[] = "68a64615";
	
	i = ft_str_is_numeric(str);
	printf("%d", i);	
}

Ex04

int	main (void)
{
	int y;
	char str[] = "hduwge4";

	y = ft_str_is_lowercase(str);
	printf("%d", y);

}

Ex05

int main (void)
{
	int y;
	char str[] = "aGTDK";

	y = ft_str_is_uppercase(str);
	printf("%d", y);
}

Ex06

int main (void)
{
	int y;
	char str[] = "hi\tseoc";

	y = ft_str_is_printable(str);
	printf("%d", y);
}

Ex07

int main (void)
{
	char str[] = "ndklahcuhub69QQl";

	ft_strupcase(str);
	printf("%s", ft_strupcase(str));
}

Ex08

int main (void)
{
	char str[] = "jnciurjnfHFGHOIkljo";

	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
}

Ex09

int main (void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize(str));
}





main C03

Ex00

int main(void)
{
	char s1[] = "qwert";
	char s2[] = "qwertT";

	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
}

Ex01

int main (void)
{
	char s1[] = "ASFERTYdffle";
	char s2[] = "ASFERTYDffle";
	int n;

	n = 6;
	printf("%d", ft_strncmp(s1, s2, n));
}

Ex02

int main(void)
{
	char dest[42] = "yyyyyy5345Salut";
	char src[] = "lanc;aujcnbgb";

	printf("%s", ft_strcat(dest, src));
}

 Ex03

int main(void)
{
	char dest[12] = "Bonsoir";
	char src[] = "Paris";
	int nb;

	nb = 3;
	printf("%s", ft_strncat(dest, src, nb));
}


Main C04

Ex 03

int	main(void)
{
	char str[] = "   ---+--+1234ab567";

	ft_atoi(str);
	return (0);
}

Main C05

Ex00:

int	main(void)
{
	int nb;

	nb = 5;
	ft_iterative_factorial(nb);
}

Ex01:

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}

Ex02:

int	main(void)
{
	printf("%d", ft_iterative_power(2, 4));
}

Ex03:

int main(void)
{
	printf("%d", ft_recursive_power(3, 4));
}

Ex04:

int	main(void)
{
	printf("%d", ft_fibonacci(6));
}

Ex05:

int main(void)
{
	printf("%d", ft_sqrt(25));
}

Ex06:

int main(void)
{
	printf("%d", ft_is_prime(0));
}


Main C07

Ex00:

int main(void)
{
	char *src = "Je suis pas content";

	printf("%s", ft_strdup(src));
	return (0);
}

Ex01:

int	main(int argc, char **argv)
{
	(void)argc;
	int i;
	int *tab = ft_range(atoi(argv[1]), atoi(argv[2]));

	i = 0;
	while (i < (atoi(argv[2]) - atoi(argv[1])))
		printf("%d\n", tab[i++]);
	return (0);
}

Ex02:

int 	main(void)
{
	int i;
	int min;
	int max;
	int *range[100];

	i = 0;
	min = 5;
	max = 15;
	printf("%d\n", ft_ultimate_range(range, min, max));
	while (i < max - min)
	{
		printf("%d\n", range[0][i]);
		i++;
	}
	return (0);
}

Ex03:

#include <stdio.h>

int		main(int ac, char **ag)
{
	printf("%s\n", ft_strjoin(ac, ag, " : "));
}


Main C08
Ex00;

#include "ft.h"

void	ft_putchar(char c);


int main ()
{
	char c;

	c = 'g';
	ft_putchar(c);
}

Ex01:

#include "ft_boolean.h"

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}


Ex02;

#include <stdio.h>
#include "ft_abs.h"
int main()
{
	printf("%d", ABS(-56));
}

Ex03:

#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;

	set_point(&point);
	return (0);
}

Ex05;

#include <stdio.h>
 73
 74 int main (int ac, char **av)
 75 {
 76     t_stock_str     *tab;
 77     tab = ft_strs_to_tab(ac, av);
 78     ft_show_tab(tab);
 79 }
