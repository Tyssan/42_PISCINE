/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:51:55 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 19:42:00 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	*the_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	result = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = the_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*ranres;
	int	rangevalue;

	min = 0;
	max = 4;
	rangevalue = ft_ultimate_range(&ranres, min, max);
	if (ranres == NULL)
	{
		printf("malloc error.");
		return (0);
	}
	printf("%d\n%d\n%d\n%d\n", ranres[0], ranres[1], ranres[2], ranres[3]);
	printf("size: %d\n", rangevalue);
	return (0);
}*/
