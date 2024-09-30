/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:30:18 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/02 18:30:22 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	value_multiplied;

	value_multiplied = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		value_multiplied = nb * value_multiplied;
		power--;
	}
	return (value_multiplied);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(2, 2));
	return (0);
}
*/