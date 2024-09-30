/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:34:01 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/02 15:34:06 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	j;

	j = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	while (j >= 1)
	{
		nb = nb * j;
		j--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return(0);
}
*/