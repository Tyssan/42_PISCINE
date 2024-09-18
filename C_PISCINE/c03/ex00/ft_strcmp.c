/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:12:58 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:50:55 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "iie";
	char	s2[] = "iii";
	int	result = ft_strcmp(s1, s2);

	if (result == 0)
	{
		printf("letter count is equal");
	}
	else if (result < 0)
	{
		printf("s1 has inferior letter count than s2 %d", result);
	}
	else
	{
		printf("s1 has superior letter count than s2 %d", result);
	}
	return (0);
}*/
