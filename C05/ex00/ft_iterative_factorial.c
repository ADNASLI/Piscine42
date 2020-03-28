/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 22:37:12 by aasli             #+#    #+#             */
/*   Updated: 2020/02/19 09:05:03 by aasli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int total;

	total = nb;
	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		total *= i;
		i++;
	}
	return (total);
}
