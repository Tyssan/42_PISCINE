/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:59:34 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/27 21:06:25 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Epic fail";
	char	src[] = "La personne qui corrige ceci est bg";
	printf("Must be same:\n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char	dest1[] = "";
	char	src1[] = "";
	ft_strcpy(dest1, src1);
	return (0);
}*/
