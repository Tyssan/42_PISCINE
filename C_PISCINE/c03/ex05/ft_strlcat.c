/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:21:08 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:50:22 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size <= i)
		return (size + i);
	while (src[j])
	{
		dest[i + j] = src[j];
		if (i + j == size)
		{
			dest[i + j] = '\0';
			return (i + j);
		}
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned int	size = 0;
	char			dest[] = "premiere phrase";
	char			src[] = "deuxieme phrase";

	printf("result: %d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\n", dest);
	return (0);
}*/
