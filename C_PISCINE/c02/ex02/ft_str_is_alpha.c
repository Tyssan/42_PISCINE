/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:38:55 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/28 18:22:57 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;	

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i] && str[i] <= 'z')
				|| ('A' <= str[i] && str[i] <= 'Z')))
			result = 0;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	str[] = "contientquedeslettres";
	char	str1[] = "contient1des2chiffres3";
	char	str2[] = "";

	printf("doit donner un: %d, %s\n", ft_str_is_alpha(str), str);
	printf("doit donner zero: %d, %s\n", ft_str_is_alpha(str1), str1);
	printf("doit donner un (vide): %d, %s\n", ft_str_is_alpha(str2), str2);
	return (0);
}
*/