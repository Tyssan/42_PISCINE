/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:41:55 by tbrunier          #+#    #+#             */
/*   Updated: 2024/08/22 10:57:28 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = ft_strlen(src);
	result = malloc((i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i >= 0)
	{
		result[i] = src[i];
		i--;
	}
	return (result);
}
/*
int	main(void)
{
	char	s1[] = "~vive mon correcteur! Et les points!@#$%^&*()_+-=[]{}|';:/?.>,<";
	char	*s2;
	char	s3[] = "~vive mon correcteur! Et les points!@#$%^&*()_+-=[]{}|';:/?.>,<";
	char	*s4;

	s2 = strdup(s1);
	printf("%s\n", s2);
	s4 = ft_strdup(s3);
	if (s4 == NULL)
	{
		printf("malloc error.\n");
		return(0);
	}
	printf("%s\n", s4);
	return (0);
}*/
