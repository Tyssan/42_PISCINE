/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:08:40 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/28 20:08:45 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;	

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			result = 0;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	str[] = "ABCD";
	char	str1[] = "AbcD";
	char	str2[] = "";

	printf("doit donner un: %d, %s\n", ft_str_is_uppercase(str), str);
	printf("doit donner zero: %d, %s\n", ft_str_is_uppercase(str1), str1);
	printf("doit donner un (vide): %d, %s\n", ft_str_is_uppercase(str2), str2);
	return (0);
}
*/