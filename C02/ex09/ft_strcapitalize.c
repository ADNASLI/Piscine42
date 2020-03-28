/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 19:35:40 by aasli             #+#    #+#             */
/*   Updated: 2020/02/18 13:36:56 by aasli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_minuscule(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

void	ft_majuscule(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		if (str[i] > '9' && str[i] < 'A')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		if (str[i] > 'Z' && str[i] < 'a')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_minuscule(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	ft_majuscule(str);
	return (str);
}
