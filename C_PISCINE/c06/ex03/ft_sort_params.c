/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:05:26 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:56:55 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	i;
	int	asciidiff;

	i = 0;
	j = (argc - 1);
	if (argc < 1)
		return (0);
	while (j != 1)
	{
		if (j > 0)
		{
			asciidiff = ft_strcmp(argv[j], argv[j - 1]);
			if (asciidiff > 0)
			{
				write(1, argv[j + 1], ft_strlen(argv[j + 1]));
				write(1, "\n", 1);
				j--;
			}
			if (asciidiff < 0)
			{
				write(1, argv[j - 1], ft_strlen(argv[j - 1]));
				write(1, "\n", 1);
				j--;
			}
			if (asciidiff == 0)
			{
				write(1, argv[j], ft_strlen(argv[j]));
				write(1, "\n", 1);
				j--;
			}
		}
	}
	return (0);
}
