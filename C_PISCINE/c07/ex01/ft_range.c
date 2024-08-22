/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:21:59 by tbrunier          #+#    #+#             */
/*   Updated: 2024/08/22 10:57:53 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
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

/*int	main(void)
{
	int	min;
	int	max;
	int *ranres;

	min = 0;
	max = 4;
	ranres = ft_range(min, max);
	if (ranres == NULL)
	{
		printf("malloc error.");
		return (0);
	}
	printf("%d\n%d\n%d\n%d\n", ranres[0], ranres[1], ranres[2], ranres[3]);
	return (0);
}*/
