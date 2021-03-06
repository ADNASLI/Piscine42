/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 16:11:34 by aasli             #+#    #+#             */
/*   Updated: 2020/02/16 15:51:35 by aasli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int i;
	int r_i;

	i = 0;
	r_i = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[r_i];
		tab[r_i] = swap;
		i++;
		r_i--;
	}
}
