/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:49:49 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/03 12:49:55 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_sqrt(int base, int nb)
{
	if (base * base == nb)
		return (base);
	if (base * base >= nb)
		return (0);
	return (find_sqrt(base + 1, nb));
}

int	ft_sqrt(int nb)
{
	return (find_sqrt(0, nb));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(16));
	return (0);
}
*/
