/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:38:49 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/29 21:16:37 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "SALUT 1 SAVA 2 LE 3 CORRECTEUR ?";

	printf("avant: %s\n", str);
	printf("apres: %s\n", ft_strlowcase(str));
	return (0);
}*/
