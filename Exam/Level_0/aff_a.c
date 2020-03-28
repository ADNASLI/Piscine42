/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:48:16 by aasli             #+#    #+#             */
/*   Updated: 2020/02/25 14:13:19 by aasli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 2)
	{	
		ft_putchar('a');
		ft_putchar('\n');
	}
	if (argv[2][i] == 'a')
	{		
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
