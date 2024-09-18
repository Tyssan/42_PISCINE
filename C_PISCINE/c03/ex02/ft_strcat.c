/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:25:31 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:50:11 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = src[j];
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[727] = "premiere phrase_";
	char	src[] = "deuxieme phrase";

	printf("should get: %s%s\n", dest, src);
	printf("result    : %s\n", ft_strcat(dest, src));
	return (0);
}*/
