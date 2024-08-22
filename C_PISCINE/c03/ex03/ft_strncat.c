/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:39:55 by tbrunier          #+#    #+#             */
/*   Updated: 2024/08/22 10:54:07 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		if (j == nb)
		{
			dest[i + j] = '\0';
			return (dest);
		}
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char			dest[727] = "premiere phrase_";
	char			src[] = "deuxieme phrase";
	unsigned int	nb = 10;

	printf("result:%s\n", ft_strncat(dest, src, nb));
	return (0);
}*/
