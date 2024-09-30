/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:24:06 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/19 09:24:14 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*void	ft_create_values(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	*pptr;

	a = 1;
	b = 0;
	ptr = &a;
	pptr = &b;
	ft_swap(ptr, pptr);
}

int	main(void)
{
	ft_create_values();
	return (0);
}*/
