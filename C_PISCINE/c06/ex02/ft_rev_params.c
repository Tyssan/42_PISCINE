/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:57:37 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:56:17 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	j;

	j = (argc - 1);
	if (argc < 1)
		return (0);
	while (j != 0)
	{
		write(1, argv[j], ft_strlen(argv[j]));
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
