/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:49:58 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/29 22:40:07 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	firstletter(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str [i] = (str[i] - 32);
		i++;
	}
}

void	lowcaser(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str [i] = (str[i] + 32);
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	firstletter(str);
	lowcaser(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@')
			|| (str[i] >= '[' && str[i] <= '`'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = (str[i + 1] - 32);
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = " :sALUT, comment [tu va]s ? 42mots 
	quarante-deux; cinquante+et+un";

	printf("input    :%s\n", str);
	printf("output   :%s\n", ft_strcapitalize(str));
	printf("should be: :Salut, Comment [Tu Va]S ? 42mots 
	Quarante-Deux; Cinquante+Et+Un\n");
	return (0);
}*/
