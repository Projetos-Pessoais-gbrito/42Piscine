/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:21:55 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/03 20:21:59 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 2;
	if (nb <= 1)
		return (2);
	if (nb <= 3)
		return (nb);
	while (i < nb)
	{
		j = 2;
		while (j < nb)
		{
			if (nb % j == 0)
				nb++;
			j++;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(83));
	return (0);
}
*/