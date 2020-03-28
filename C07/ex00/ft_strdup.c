/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:50:56 by aasli             #+#    #+#             */
/*   Updated: 2020/02/23 20:22:38 by aasli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s1;
	int		length;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	if (!(s1 = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (src[i])
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
