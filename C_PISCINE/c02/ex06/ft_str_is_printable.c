/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:13:57 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/28 20:13:59 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;	

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
			result = 0;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	str[] = "ABCD";
	char	str1[] = "é ne fait pas parti d'ascii donc ca met 0";
	char	str2[] = "";

	printf("doit donner un: %d, %s\n", ft_str_is_printable(str), str);
	printf("doit donner zero: %d, %s\n", ft_str_is_printable(str1), str1);
	printf("doit donner un (vide): %d, %s\n", ft_str_is_printable(str2), str2);
	return (0);
}
*/