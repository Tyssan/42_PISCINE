/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:57:10 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:53:38 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	parity;

	i = 0;
	parity = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			parity = -parity; 
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * parity);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" -42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("-2147483648"));
	printf("max:%d\n", ft_atoi("2147483647"));
	printf("\n");
	printf("42:%d\n", atoi("  \n  42t4457"));
	printf("-42:%d\n", atoi(" -42sfs:f545"));
	printf("0:%d\n", atoi("\0 1337"));
	printf("0:%d\n", atoi("-0"));
	printf("0:%d\n", atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", atoi("-1325632167"));
	printf("-100:%d\n", atoi("-100"));
	printf("min:%d\n", atoi("-2147483648"));
	printf("max:%d\n", atoi("2147483647"));
}*/
