/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:08:01 by tbrunier          #+#    #+#             */
/*   Updated: 2023/09/13 21:08:04 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		resultvalue;
	int		i;
	char	*result;

	i = 0;
	resultvalue = 1;
	if (size == 0)
	{
		result = malloc(1 * sizeof(char));
		result[0] = '\0';
		return (result);
	}
	while (i < size)
	{
		resultvalue += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		resultvalue += ft_strlen(sep);
		i++;
	}
	i = 0;
	result = malloc(resultvalue * sizeof(char));
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i != size - 1)
			result = ft_strcat(result, sep);
		i++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	char	*sep;
	char	*result;
	char	**strings;
	int		size;
	int		i;

	i = 0;
	sep = "=*==#";
	size = argc - 1;
	strings = malloc(size * sizeof(char *));
	while (i < size)
	{
		strings[i] = argv[i + 1];
		i++;
	}
	result = ft_strjoin(size, strings, sep);
	printf("result: %s\n", result);
	free(result);
	return (0);
}
