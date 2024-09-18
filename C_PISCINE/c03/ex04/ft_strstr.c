/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:16:29 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:50:16 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "correct bonjour correcteur ca va?";
	char	to_find[] = "bonjour";
	char	*result;
	
	result = ft_strstr(str, to_find);
	if (result == 0)
		printf("%s is not found in string\n", to_find);
	else
		printf("%s\n", result);
	return (0);
}*/
