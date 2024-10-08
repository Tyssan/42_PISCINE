/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:01:16 by tbrunier          #+#    #+#             */
/*   Updated: 2024/09/18 17:50:40 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
    char s1[] = "Test1";
    char s2[] = "OK";
    char s3[] = "Same";
    char s4[] = "Size";
    char s5[] = "Shorter";
    char s6[] = "ThanMyself";
    char s7[] = "ShorterTest";

    printf("%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
    printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
    printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
    printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
    printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
    printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
    printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
    printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
    printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
}*/
