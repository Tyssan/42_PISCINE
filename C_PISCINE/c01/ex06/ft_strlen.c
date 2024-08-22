/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:10:11 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/26 18:40:59 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	strnumber;

	strnumber = 0;
	while (str[strnumber] != '\0')
	{
		strnumber++;
	}
	return (strnumber);
}
/*
	int	main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("10:%d\n", ft_strlen(str));
	printf("4:%d\n", ft_strlen(str1));
}*/
