/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:32:23 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/28 19:32:46 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;	

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			result = 0;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	str[] = "1234";
	char	str1[] = "1contient2des3lettres4";
	char	str2[] = "";

	printf("doit donner un: %d, %s\n", ft_str_is_numeric(str), str);
	printf("doit donner zero: %d, %s\n", ft_str_is_numeric(str1), str1);
	printf("doit donner un (vide): %d, %s\n", ft_str_is_numeric(str2), str2);
	return (0);
}*/