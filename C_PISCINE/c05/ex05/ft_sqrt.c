/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:13:51 by tbrunier          #+#    #+#             */
/*   Updated: 2024/08/22 10:56:16 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (sqrt * sqrt < nb)
	{
		if (sqrt == 46341)
			return (0);
		++sqrt;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

/*int	main(void)
{
	int	racinede;

	racinede = 564;
	printf("racine de %d = %d\n", racinede, ft_sqrt(racinede));
	return (0);
}*/
