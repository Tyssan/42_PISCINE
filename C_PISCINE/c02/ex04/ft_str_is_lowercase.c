/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:48:35 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/28 19:57:21 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;	

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			result = 0;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	str[] = "abcd";
	char	str1[] = "aBc";
	char	str2[] = "";

	printf("doit donner un: %d, %s\n", ft_str_is_lowercase(str), str);
	printf("doit donner zero: %d, %s\n", ft_str_is_lowercase(str1), str1);
	printf("doit donner un (vide): %d, %s\n", ft_str_is_lowercase(str2), str2);
	return (0);
}
*/