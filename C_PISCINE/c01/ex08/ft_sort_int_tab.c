/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:08:20 by tbrunier          #+#    #+#             */
/*   Updated: 2023/08/27 12:47:11 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	c[] = {55, -10, 59, 0, 54};

	printf("pre-triage: ");
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
	printf("\n");	
	ft_sort_int_tab(c, 5);
	printf("Ordre croissant: ");
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
	printf("\n");
	return (0);
}*/
