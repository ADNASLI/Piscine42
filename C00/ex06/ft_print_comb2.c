/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:46:48 by aasli             #+#    #+#             */
/*   Updated: 2020/02/16 10:23:29 by aasli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = -1;
	y = 1;
	while (x < 99)
	{
		x++;
		y = x + 1;
		while (y <= 99)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x <= 97)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
	}
}
