/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:10:11 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/26 17:56:05 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	strnumber;

	strnumber = 0;
	while (str[strnumber] != '\0')
	{
		strnumber++;
	}
	write(1, str, strnumber);
}
/*
int	main(void)
{
	char	str[18];
	int	i;

	i = 0;
	while (i < 18)
	{
		str[i] = "tropbglecorrecteur"[i];
		i++;
	}
	str[18] = '\0';
	ft_putstr(str);
	return (0);
}*/
