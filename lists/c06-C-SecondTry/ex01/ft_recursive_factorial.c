/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:30:54 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/02 16:30:56 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d %d\n", nb,  (nb - 1));
	printf("%d", ft_recursive_factorial(5));
	return(0);
}
*/
