/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:03:13 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:55:38 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= 46341)
	{
		if (nb % div == 0 && div != nb)
			return (0);
		div++;
	}
	return (1);
}
/*
#include <stdio.h>int	main(void)
{
	int	nb;

	nb = 2147483647;
	printf("%d = %d, ", nb, ft_is_prime(nb));
	return (0);
}*/
